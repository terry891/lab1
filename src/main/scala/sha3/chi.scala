package sha3

import chisel3._
import sha3.common._

class ChiModule(val W: Int = 64) extends Module {
    val io = IO(new Bundle {
    val state_i = Input (Vec(5*5, Bits(W.W)))
    val state_o = Output(Vec(5*5, Bits(W.W)))
    })

    val st = Wire(chisel3.Vec(25, UInt(W.W)))
    for (i <- 0 to 24)
        st(i) := io.state_i(i)

    for (j <- 0 to 24 by 5) {
        for (i <- 0 to 4) {
            io.state_o(j + i) := st(j+i) ^ (~st((i + 1) % 5 + j)) & st((i + 2) % 5 + j)
        }
    }
}
