package sha3

import chisel3._

//Tianshu Wang

class DpathModule(val W: Int) extends Module {
  //Constants
  val r = 2*256
  val c = 25*W - r
  val round_size_words = c/W
  val rounds = 24 //12 + 2l
  val hash_size_words = 256/W
  val bytes_per_word = W/8

  //Inputs and outputs
  val io = IO(new Bundle {
    val state_i = Input (Vec(5*5, Bits(W.W)))
    val state_o = Output(Vec(5*5, Bits(W.W)))
    val round = Input(UInt(5.W))
  })

  //Initialize the modules
  val theta = Module(new ThetaModule())
  val rhopi = Module(new RhoPiModule())
  val chi = Module(new ChiModule())
  val iota = Module(new IotaModule())

  //Fused the models
  theta.io.state_i := io.state_i
  rhopi.io.state_i := theta.io.state_o
  chi.io.state_i := rhopi.io.state_o
  iota.io.state_i := chi.io.state_o
  iota.io.round := io.round
  io.state_o := iota.io.state_o
}

