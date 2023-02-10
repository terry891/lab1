FIRRTL version 1.1.0
circuit IotaModule :
  module IotaModule :
    input clock : Clock
    input reset : UInt<1>
    input io_state_i_0 : UInt<64>
    input io_state_i_1 : UInt<64>
    input io_state_i_2 : UInt<64>
    input io_state_i_3 : UInt<64>
    input io_state_i_4 : UInt<64>
    input io_state_i_5 : UInt<64>
    input io_state_i_6 : UInt<64>
    input io_state_i_7 : UInt<64>
    input io_state_i_8 : UInt<64>
    input io_state_i_9 : UInt<64>
    input io_state_i_10 : UInt<64>
    input io_state_i_11 : UInt<64>
    input io_state_i_12 : UInt<64>
    input io_state_i_13 : UInt<64>
    input io_state_i_14 : UInt<64>
    input io_state_i_15 : UInt<64>
    input io_state_i_16 : UInt<64>
    input io_state_i_17 : UInt<64>
    input io_state_i_18 : UInt<64>
    input io_state_i_19 : UInt<64>
    input io_state_i_20 : UInt<64>
    input io_state_i_21 : UInt<64>
    input io_state_i_22 : UInt<64>
    input io_state_i_23 : UInt<64>
    input io_state_i_24 : UInt<64>
    output io_state_o_0 : UInt<64>
    output io_state_o_1 : UInt<64>
    output io_state_o_2 : UInt<64>
    output io_state_o_3 : UInt<64>
    output io_state_o_4 : UInt<64>
    output io_state_o_5 : UInt<64>
    output io_state_o_6 : UInt<64>
    output io_state_o_7 : UInt<64>
    output io_state_o_8 : UInt<64>
    output io_state_o_9 : UInt<64>
    output io_state_o_10 : UInt<64>
    output io_state_o_11 : UInt<64>
    output io_state_o_12 : UInt<64>
    output io_state_o_13 : UInt<64>
    output io_state_o_14 : UInt<64>
    output io_state_o_15 : UInt<64>
    output io_state_o_16 : UInt<64>
    output io_state_o_17 : UInt<64>
    output io_state_o_18 : UInt<64>
    output io_state_o_19 : UInt<64>
    output io_state_o_20 : UInt<64>
    output io_state_o_21 : UInt<64>
    output io_state_o_22 : UInt<64>
    output io_state_o_23 : UInt<64>
    output io_state_o_24 : UInt<64>
    input io_round : UInt<5>

    node round_const_0 = UInt<64>("h1") @[iota.scala 16:{28,28}]
    node _GEN_0 = validif(eq(UInt<1>("h0"), io_round), round_const_0) @[iota.scala 42:{34,34}]
    node round_const_1 = UInt<64>("h8082") @[iota.scala 16:{28,28}]
    node _GEN_1 = mux(eq(UInt<1>("h1"), io_round), round_const_1, _GEN_0) @[iota.scala 42:{34,34}]
    node round_const_2 = UInt<64>("h800000000000808a") @[iota.scala 16:{28,28}]
    node _GEN_2 = mux(eq(UInt<2>("h2"), io_round), round_const_2, _GEN_1) @[iota.scala 42:{34,34}]
    node round_const_3 = UInt<64>("h8000000080008000") @[iota.scala 16:{28,28}]
    node _GEN_3 = mux(eq(UInt<2>("h3"), io_round), round_const_3, _GEN_2) @[iota.scala 42:{34,34}]
    node round_const_4 = UInt<64>("h808b") @[iota.scala 16:{28,28}]
    node _GEN_4 = mux(eq(UInt<3>("h4"), io_round), round_const_4, _GEN_3) @[iota.scala 42:{34,34}]
    node round_const_5 = UInt<64>("h80000001") @[iota.scala 16:{28,28}]
    node _GEN_5 = mux(eq(UInt<3>("h5"), io_round), round_const_5, _GEN_4) @[iota.scala 42:{34,34}]
    node round_const_6 = UInt<64>("h8000000080008081") @[iota.scala 16:{28,28}]
    node _GEN_6 = mux(eq(UInt<3>("h6"), io_round), round_const_6, _GEN_5) @[iota.scala 42:{34,34}]
    node round_const_7 = UInt<64>("h8000000000008009") @[iota.scala 16:{28,28}]
    node _GEN_7 = mux(eq(UInt<3>("h7"), io_round), round_const_7, _GEN_6) @[iota.scala 42:{34,34}]
    node round_const_8 = UInt<64>("h8a") @[iota.scala 16:{28,28}]
    node _GEN_8 = mux(eq(UInt<4>("h8"), io_round), round_const_8, _GEN_7) @[iota.scala 42:{34,34}]
    node round_const_9 = UInt<64>("h88") @[iota.scala 16:{28,28}]
    node _GEN_9 = mux(eq(UInt<4>("h9"), io_round), round_const_9, _GEN_8) @[iota.scala 42:{34,34}]
    node round_const_10 = UInt<64>("h80008009") @[iota.scala 16:{28,28}]
    node _GEN_10 = mux(eq(UInt<4>("ha"), io_round), round_const_10, _GEN_9) @[iota.scala 42:{34,34}]
    node round_const_11 = UInt<64>("h8000000a") @[iota.scala 16:{28,28}]
    node _GEN_11 = mux(eq(UInt<4>("hb"), io_round), round_const_11, _GEN_10) @[iota.scala 42:{34,34}]
    node round_const_12 = UInt<64>("h8000808b") @[iota.scala 16:{28,28}]
    node _GEN_12 = mux(eq(UInt<4>("hc"), io_round), round_const_12, _GEN_11) @[iota.scala 42:{34,34}]
    node round_const_13 = UInt<64>("h800000000000008b") @[iota.scala 16:{28,28}]
    node _GEN_13 = mux(eq(UInt<4>("hd"), io_round), round_const_13, _GEN_12) @[iota.scala 42:{34,34}]
    node round_const_14 = UInt<64>("h8000000000008089") @[iota.scala 16:{28,28}]
    node _GEN_14 = mux(eq(UInt<4>("he"), io_round), round_const_14, _GEN_13) @[iota.scala 42:{34,34}]
    node round_const_15 = UInt<64>("h8000000000008003") @[iota.scala 16:{28,28}]
    node _GEN_15 = mux(eq(UInt<4>("hf"), io_round), round_const_15, _GEN_14) @[iota.scala 42:{34,34}]
    node round_const_16 = UInt<64>("h8000000000008002") @[iota.scala 16:{28,28}]
    node _GEN_16 = mux(eq(UInt<5>("h10"), io_round), round_const_16, _GEN_15) @[iota.scala 42:{34,34}]
    node round_const_17 = UInt<64>("h8000000000000080") @[iota.scala 16:{28,28}]
    node _GEN_17 = mux(eq(UInt<5>("h11"), io_round), round_const_17, _GEN_16) @[iota.scala 42:{34,34}]
    node round_const_18 = UInt<64>("h800a") @[iota.scala 16:{28,28}]
    node _GEN_18 = mux(eq(UInt<5>("h12"), io_round), round_const_18, _GEN_17) @[iota.scala 42:{34,34}]
    node round_const_19 = UInt<64>("h800000008000000a") @[iota.scala 16:{28,28}]
    node _GEN_19 = mux(eq(UInt<5>("h13"), io_round), round_const_19, _GEN_18) @[iota.scala 42:{34,34}]
    node round_const_20 = UInt<64>("h8000000080008081") @[iota.scala 16:{28,28}]
    node _GEN_20 = mux(eq(UInt<5>("h14"), io_round), round_const_20, _GEN_19) @[iota.scala 42:{34,34}]
    node round_const_21 = UInt<64>("h8000000000008080") @[iota.scala 16:{28,28}]
    node _GEN_21 = mux(eq(UInt<5>("h15"), io_round), round_const_21, _GEN_20) @[iota.scala 42:{34,34}]
    node round_const_22 = UInt<64>("h80000001") @[iota.scala 16:{28,28}]
    node _GEN_22 = mux(eq(UInt<5>("h16"), io_round), round_const_22, _GEN_21) @[iota.scala 42:{34,34}]
    node round_const_23 = UInt<64>("h8000000080008008") @[iota.scala 16:{28,28}]
    node _GEN_23 = mux(eq(UInt<5>("h17"), io_round), round_const_23, _GEN_22) @[iota.scala 42:{34,34}]
    node _round_const_io_round = _GEN_23 @[iota.scala 42:34]
    node _io_state_o_0_T = xor(io_state_i_0, _round_const_io_round) @[iota.scala 42:34]
    io_state_o_0 <= _io_state_o_0_T @[iota.scala 42:17]
    io_state_o_1 <= io_state_i_1 @[iota.scala 13:19]
    io_state_o_2 <= io_state_i_2 @[iota.scala 13:19]
    io_state_o_3 <= io_state_i_3 @[iota.scala 13:19]
    io_state_o_4 <= io_state_i_4 @[iota.scala 13:19]
    io_state_o_5 <= io_state_i_5 @[iota.scala 13:19]
    io_state_o_6 <= io_state_i_6 @[iota.scala 13:19]
    io_state_o_7 <= io_state_i_7 @[iota.scala 13:19]
    io_state_o_8 <= io_state_i_8 @[iota.scala 13:19]
    io_state_o_9 <= io_state_i_9 @[iota.scala 13:19]
    io_state_o_10 <= io_state_i_10 @[iota.scala 13:19]
    io_state_o_11 <= io_state_i_11 @[iota.scala 13:19]
    io_state_o_12 <= io_state_i_12 @[iota.scala 13:19]
    io_state_o_13 <= io_state_i_13 @[iota.scala 13:19]
    io_state_o_14 <= io_state_i_14 @[iota.scala 13:19]
    io_state_o_15 <= io_state_i_15 @[iota.scala 13:19]
    io_state_o_16 <= io_state_i_16 @[iota.scala 13:19]
    io_state_o_17 <= io_state_i_17 @[iota.scala 13:19]
    io_state_o_18 <= io_state_i_18 @[iota.scala 13:19]
    io_state_o_19 <= io_state_i_19 @[iota.scala 13:19]
    io_state_o_20 <= io_state_i_20 @[iota.scala 13:19]
    io_state_o_21 <= io_state_i_21 @[iota.scala 13:19]
    io_state_o_22 <= io_state_i_22 @[iota.scala 13:19]
    io_state_o_23 <= io_state_i_23 @[iota.scala 13:19]
    io_state_o_24 <= io_state_i_24 @[iota.scala 13:19]
