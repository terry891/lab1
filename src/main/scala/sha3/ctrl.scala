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

  val io = IO(new Bundle {
    val message_val = Input(Bool())
    val message_rdy = Output(Bool())
    val hash_val    = Output(Bool())
    val hash_rdy    = Input(Bool())

    //YOU MAY ADD MORE PORTS
  })
  //YOUR IMPLEMENTATION HERE
}
