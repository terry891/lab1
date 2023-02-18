package sha3

import chisel3._

class CtrlModule(val W: Int) extends Module {
  //val W = 64
  val r = 2*256
  val c = 25*W - r
  val round_size_words = c/W
  val rounds = 24 //12 + 2l
  val hash_size_words = 256/W
  val bytes_per_word = W/8

  //Inputs and ouputs
  val io = IO(new Bundle {
    val message_val = Input(Bool())
    val message_rdy = Output(Bool())
    val hash_val    = Output(Bool())
    val hash_rdy    = Input(Bool())

    val message: Vec[UInt] = Input(Vec(round_size_words, Bits(W.W)))
    val hash: Vec[UInt] = Output(Vec(hash_size_words, Bits(W.W)))
  })
  
  //Initialize data
  val dpath = Module(new DpathModule(W))
  val temp = RegInit(VecInit(Seq.fill(25)(0.U(W.W))))
  val round = RegInit(0.U(5.W))
  val completed = RegInit(false.B)
  val to_hash_ready = RegInit(false.B)
  val to_message_ready = RegInit(true.B)


  io.hash_val := false.B
  io.message_rdy := to_message_ready

  for (i <- 0 until hash_size_words)
    io.hash(i) := temp(i)


  //Do one round of work
  dpath.io.round := 0.U
  dpath.io.state_i := temp
  temp := dpath.io.state_o

  //Only do work when it's needed
  when (to_message_ready && io.message_val) {
    val inputData = Wire(Vec(5*5, Bits(W.W)))
    for (i <- 0 until round_size_words)
        inputData(i) := io.message(i)

    for (i <- round_size_words until 25)
        inputData(i) := 0.U

    temp := inputData
    to_message_ready := false.B
    to_hash_ready := true.B
  }
  
  //Completed work and ready re received next
  when (completed && io.hash_rdy) {
    io.message_rdy := true.B
    round := 0.U
    io.hash_val := true.B
    to_hash_ready := false.B
  }

  //Not completely, go to next round
  when (!completed && to_hash_ready) {
    dpath.io.round := round
    round := round + 1.U
    completed := round + 1.U >= rounds.U
  }

}
