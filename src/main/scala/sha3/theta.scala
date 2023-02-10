package sha3

import chisel3._
import sha3.common._

class ThetaModule(val W: Int = 64) extends Module {
  val io = IO(new Bundle {
    val state_i = Input (Vec(5*5, Bits(W.W)))
    val state_o = Output(Vec(5*5, Bits(W.W)))
  })

  //Store input states and intermediate states in Wires
  val stored_states = Wire(chisel3.Vec(25, UInt(W.W)))
  for (i <- 0 to 24)
    stored_states(i) := io.state_i(i)
  val intermediate_states = Wire(chisel3.Vec(5, UInt(W.W)))


  for (i <- 0 to 4)
      intermediate_states(i) := stored_states(i) ^ stored_states(i + 5) ^ stored_states(i + 10) ^ stored_states(i + 15) ^ stored_states(i + 20)
  for (i <- 0 to 4) {
      for (j <- 0 to 24 by 5)
          io.state_o(j + i) := stored_states(j + i) ^ intermediate_states((i + 4) % 5) ^ ((intermediate_states((i + 1) % 5)) << (1)) | ((intermediate_states((i + 1) % 5)) >> (63))
  }
}

