FIRRTL version 1.1.0
circuit ChiModule :
  module ChiModule :
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

    node st_1 = io_state_i_1 @[chi.scala 12:18 14:15]
    node _io_state_o_0_T = not(st_1) @[chi.scala 18:45]
    node st_2 = io_state_i_2 @[chi.scala 12:18 14:15]
    node _io_state_o_0_T_1 = and(_io_state_o_0_T, st_2) @[chi.scala 18:67]
    node st_0 = io_state_i_0 @[chi.scala 12:18 14:15]
    node _io_state_o_0_T_2 = xor(st_0, _io_state_o_0_T_1) @[chi.scala 18:42]
    node _io_state_o_1_T = not(st_2) @[chi.scala 18:45]
    node st_3 = io_state_i_3 @[chi.scala 12:18 14:15]
    node _io_state_o_1_T_1 = and(_io_state_o_1_T, st_3) @[chi.scala 18:67]
    node _io_state_o_1_T_2 = xor(st_1, _io_state_o_1_T_1) @[chi.scala 18:42]
    node _io_state_o_2_T = not(st_3) @[chi.scala 18:45]
    node st_4 = io_state_i_4 @[chi.scala 12:18 14:15]
    node _io_state_o_2_T_1 = and(_io_state_o_2_T, st_4) @[chi.scala 18:67]
    node _io_state_o_2_T_2 = xor(st_2, _io_state_o_2_T_1) @[chi.scala 18:42]
    node _io_state_o_3_T = not(st_4) @[chi.scala 18:45]
    node _io_state_o_3_T_1 = and(_io_state_o_3_T, st_0) @[chi.scala 18:67]
    node _io_state_o_3_T_2 = xor(st_3, _io_state_o_3_T_1) @[chi.scala 18:42]
    node _io_state_o_4_T = not(st_0) @[chi.scala 18:45]
    node _io_state_o_4_T_1 = and(_io_state_o_4_T, st_1) @[chi.scala 18:67]
    node _io_state_o_4_T_2 = xor(st_4, _io_state_o_4_T_1) @[chi.scala 18:42]
    node st_6 = io_state_i_6 @[chi.scala 12:18 14:15]
    node _io_state_o_5_T = not(st_6) @[chi.scala 18:45]
    node st_7 = io_state_i_7 @[chi.scala 12:18 14:15]
    node _io_state_o_5_T_1 = and(_io_state_o_5_T, st_7) @[chi.scala 18:67]
    node st_5 = io_state_i_5 @[chi.scala 12:18 14:15]
    node _io_state_o_5_T_2 = xor(st_5, _io_state_o_5_T_1) @[chi.scala 18:42]
    node _io_state_o_6_T = not(st_7) @[chi.scala 18:45]
    node st_8 = io_state_i_8 @[chi.scala 12:18 14:15]
    node _io_state_o_6_T_1 = and(_io_state_o_6_T, st_8) @[chi.scala 18:67]
    node _io_state_o_6_T_2 = xor(st_6, _io_state_o_6_T_1) @[chi.scala 18:42]
    node _io_state_o_7_T = not(st_8) @[chi.scala 18:45]
    node st_9 = io_state_i_9 @[chi.scala 12:18 14:15]
    node _io_state_o_7_T_1 = and(_io_state_o_7_T, st_9) @[chi.scala 18:67]
    node _io_state_o_7_T_2 = xor(st_7, _io_state_o_7_T_1) @[chi.scala 18:42]
    node _io_state_o_8_T = not(st_9) @[chi.scala 18:45]
    node _io_state_o_8_T_1 = and(_io_state_o_8_T, st_5) @[chi.scala 18:67]
    node _io_state_o_8_T_2 = xor(st_8, _io_state_o_8_T_1) @[chi.scala 18:42]
    node _io_state_o_9_T = not(st_5) @[chi.scala 18:45]
    node _io_state_o_9_T_1 = and(_io_state_o_9_T, st_6) @[chi.scala 18:67]
    node _io_state_o_9_T_2 = xor(st_9, _io_state_o_9_T_1) @[chi.scala 18:42]
    node st_11 = io_state_i_11 @[chi.scala 12:18 14:15]
    node _io_state_o_10_T = not(st_11) @[chi.scala 18:45]
    node st_12 = io_state_i_12 @[chi.scala 12:18 14:15]
    node _io_state_o_10_T_1 = and(_io_state_o_10_T, st_12) @[chi.scala 18:67]
    node st_10 = io_state_i_10 @[chi.scala 12:18 14:15]
    node _io_state_o_10_T_2 = xor(st_10, _io_state_o_10_T_1) @[chi.scala 18:42]
    node _io_state_o_11_T = not(st_12) @[chi.scala 18:45]
    node st_13 = io_state_i_13 @[chi.scala 12:18 14:15]
    node _io_state_o_11_T_1 = and(_io_state_o_11_T, st_13) @[chi.scala 18:67]
    node _io_state_o_11_T_2 = xor(st_11, _io_state_o_11_T_1) @[chi.scala 18:42]
    node _io_state_o_12_T = not(st_13) @[chi.scala 18:45]
    node st_14 = io_state_i_14 @[chi.scala 12:18 14:15]
    node _io_state_o_12_T_1 = and(_io_state_o_12_T, st_14) @[chi.scala 18:67]
    node _io_state_o_12_T_2 = xor(st_12, _io_state_o_12_T_1) @[chi.scala 18:42]
    node _io_state_o_13_T = not(st_14) @[chi.scala 18:45]
    node _io_state_o_13_T_1 = and(_io_state_o_13_T, st_10) @[chi.scala 18:67]
    node _io_state_o_13_T_2 = xor(st_13, _io_state_o_13_T_1) @[chi.scala 18:42]
    node _io_state_o_14_T = not(st_10) @[chi.scala 18:45]
    node _io_state_o_14_T_1 = and(_io_state_o_14_T, st_11) @[chi.scala 18:67]
    node _io_state_o_14_T_2 = xor(st_14, _io_state_o_14_T_1) @[chi.scala 18:42]
    node st_16 = io_state_i_16 @[chi.scala 12:18 14:15]
    node _io_state_o_15_T = not(st_16) @[chi.scala 18:45]
    node st_17 = io_state_i_17 @[chi.scala 12:18 14:15]
    node _io_state_o_15_T_1 = and(_io_state_o_15_T, st_17) @[chi.scala 18:67]
    node st_15 = io_state_i_15 @[chi.scala 12:18 14:15]
    node _io_state_o_15_T_2 = xor(st_15, _io_state_o_15_T_1) @[chi.scala 18:42]
    node _io_state_o_16_T = not(st_17) @[chi.scala 18:45]
    node st_18 = io_state_i_18 @[chi.scala 12:18 14:15]
    node _io_state_o_16_T_1 = and(_io_state_o_16_T, st_18) @[chi.scala 18:67]
    node _io_state_o_16_T_2 = xor(st_16, _io_state_o_16_T_1) @[chi.scala 18:42]
    node _io_state_o_17_T = not(st_18) @[chi.scala 18:45]
    node st_19 = io_state_i_19 @[chi.scala 12:18 14:15]
    node _io_state_o_17_T_1 = and(_io_state_o_17_T, st_19) @[chi.scala 18:67]
    node _io_state_o_17_T_2 = xor(st_17, _io_state_o_17_T_1) @[chi.scala 18:42]
    node _io_state_o_18_T = not(st_19) @[chi.scala 18:45]
    node _io_state_o_18_T_1 = and(_io_state_o_18_T, st_15) @[chi.scala 18:67]
    node _io_state_o_18_T_2 = xor(st_18, _io_state_o_18_T_1) @[chi.scala 18:42]
    node _io_state_o_19_T = not(st_15) @[chi.scala 18:45]
    node _io_state_o_19_T_1 = and(_io_state_o_19_T, st_16) @[chi.scala 18:67]
    node _io_state_o_19_T_2 = xor(st_19, _io_state_o_19_T_1) @[chi.scala 18:42]
    node st_21 = io_state_i_21 @[chi.scala 12:18 14:15]
    node _io_state_o_20_T = not(st_21) @[chi.scala 18:45]
    node st_22 = io_state_i_22 @[chi.scala 12:18 14:15]
    node _io_state_o_20_T_1 = and(_io_state_o_20_T, st_22) @[chi.scala 18:67]
    node st_20 = io_state_i_20 @[chi.scala 12:18 14:15]
    node _io_state_o_20_T_2 = xor(st_20, _io_state_o_20_T_1) @[chi.scala 18:42]
    node _io_state_o_21_T = not(st_22) @[chi.scala 18:45]
    node st_23 = io_state_i_23 @[chi.scala 12:18 14:15]
    node _io_state_o_21_T_1 = and(_io_state_o_21_T, st_23) @[chi.scala 18:67]
    node _io_state_o_21_T_2 = xor(st_21, _io_state_o_21_T_1) @[chi.scala 18:42]
    node _io_state_o_22_T = not(st_23) @[chi.scala 18:45]
    node st_24 = io_state_i_24 @[chi.scala 12:18 14:15]
    node _io_state_o_22_T_1 = and(_io_state_o_22_T, st_24) @[chi.scala 18:67]
    node _io_state_o_22_T_2 = xor(st_22, _io_state_o_22_T_1) @[chi.scala 18:42]
    node _io_state_o_23_T = not(st_24) @[chi.scala 18:45]
    node _io_state_o_23_T_1 = and(_io_state_o_23_T, st_20) @[chi.scala 18:67]
    node _io_state_o_23_T_2 = xor(st_23, _io_state_o_23_T_1) @[chi.scala 18:42]
    node _io_state_o_24_T = not(st_20) @[chi.scala 18:45]
    node _io_state_o_24_T_1 = and(_io_state_o_24_T, st_21) @[chi.scala 18:67]
    node _io_state_o_24_T_2 = xor(st_24, _io_state_o_24_T_1) @[chi.scala 18:42]
    io_state_o_0 <= _io_state_o_0_T_2 @[chi.scala 18:31]
    io_state_o_1 <= _io_state_o_1_T_2 @[chi.scala 18:31]
    io_state_o_2 <= _io_state_o_2_T_2 @[chi.scala 18:31]
    io_state_o_3 <= _io_state_o_3_T_2 @[chi.scala 18:31]
    io_state_o_4 <= _io_state_o_4_T_2 @[chi.scala 18:31]
    io_state_o_5 <= _io_state_o_5_T_2 @[chi.scala 18:31]
    io_state_o_6 <= _io_state_o_6_T_2 @[chi.scala 18:31]
    io_state_o_7 <= _io_state_o_7_T_2 @[chi.scala 18:31]
    io_state_o_8 <= _io_state_o_8_T_2 @[chi.scala 18:31]
    io_state_o_9 <= _io_state_o_9_T_2 @[chi.scala 18:31]
    io_state_o_10 <= _io_state_o_10_T_2 @[chi.scala 18:31]
    io_state_o_11 <= _io_state_o_11_T_2 @[chi.scala 18:31]
    io_state_o_12 <= _io_state_o_12_T_2 @[chi.scala 18:31]
    io_state_o_13 <= _io_state_o_13_T_2 @[chi.scala 18:31]
    io_state_o_14 <= _io_state_o_14_T_2 @[chi.scala 18:31]
    io_state_o_15 <= _io_state_o_15_T_2 @[chi.scala 18:31]
    io_state_o_16 <= _io_state_o_16_T_2 @[chi.scala 18:31]
    io_state_o_17 <= _io_state_o_17_T_2 @[chi.scala 18:31]
    io_state_o_18 <= _io_state_o_18_T_2 @[chi.scala 18:31]
    io_state_o_19 <= _io_state_o_19_T_2 @[chi.scala 18:31]
    io_state_o_20 <= _io_state_o_20_T_2 @[chi.scala 18:31]
    io_state_o_21 <= _io_state_o_21_T_2 @[chi.scala 18:31]
    io_state_o_22 <= _io_state_o_22_T_2 @[chi.scala 18:31]
    io_state_o_23 <= _io_state_o_23_T_2 @[chi.scala 18:31]
    io_state_o_24 <= _io_state_o_24_T_2 @[chi.scala 18:31]
