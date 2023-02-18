package sha3

import chisel3._
import sha3.common._

class ThetaModule(val W: Int = 64) extends Module {
    val io = IO(new Bundle {
        val state_i = Input (Vec(5*5, Bits(W.W)))
        val state_o = Output(Vec(5*5, Bits(W.W)))
    })

    val st = Wire(chisel3.Vec(25, UInt(W.W)))
    for (i <- 0 to 24)
        st(i) := io.state_i(i)

    val bc = Wire(chisel3.Vec(5, UInt(W.W)))
    for (i <- 0 to 4)
        bc(i) := st(i) ^ st(i + 5) ^ st(i + 10) ^ st(i + 15) ^ st(i + 20)
    for (i <- 0 to 4) {
        val tmp = Wire(UInt(W.W))
        val ROTL = Wire(UInt(W.W))
        ROTL := (((bc((i + 1) % 5)) << (1)) | ((bc((i + 1) % 5)) >> (63)))
        tmp := (bc((i + 4) % 5) ^ ROTL)
        for (j <- 0 to 24 by 5)
            io.state_o(j + i) := st(j+i) ^ tmp
    }
}

