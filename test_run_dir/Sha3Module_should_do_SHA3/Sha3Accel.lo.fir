FIRRTL version 1.1.0
circuit Sha3Accel :
  module ThetaModule :
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

    node st_0 = io_state_i_0 @[theta.scala 12:18 14:15]
    node st_5 = io_state_i_5 @[theta.scala 12:18 14:15]
    node _bc_0_T = xor(st_0, st_5) @[theta.scala 18:24]
    node st_10 = io_state_i_10 @[theta.scala 12:18 14:15]
    node _bc_0_T_1 = xor(_bc_0_T, st_10) @[theta.scala 18:36]
    node st_15 = io_state_i_15 @[theta.scala 12:18 14:15]
    node _bc_0_T_2 = xor(_bc_0_T_1, st_15) @[theta.scala 18:49]
    node st_20 = io_state_i_20 @[theta.scala 12:18 14:15]
    node _bc_0_T_3 = xor(_bc_0_T_2, st_20) @[theta.scala 18:62]
    node st_1 = io_state_i_1 @[theta.scala 12:18 14:15]
    node st_6 = io_state_i_6 @[theta.scala 12:18 14:15]
    node _bc_1_T = xor(st_1, st_6) @[theta.scala 18:24]
    node st_11 = io_state_i_11 @[theta.scala 12:18 14:15]
    node _bc_1_T_1 = xor(_bc_1_T, st_11) @[theta.scala 18:36]
    node st_16 = io_state_i_16 @[theta.scala 12:18 14:15]
    node _bc_1_T_2 = xor(_bc_1_T_1, st_16) @[theta.scala 18:49]
    node st_21 = io_state_i_21 @[theta.scala 12:18 14:15]
    node _bc_1_T_3 = xor(_bc_1_T_2, st_21) @[theta.scala 18:62]
    node st_2 = io_state_i_2 @[theta.scala 12:18 14:15]
    node st_7 = io_state_i_7 @[theta.scala 12:18 14:15]
    node _bc_2_T = xor(st_2, st_7) @[theta.scala 18:24]
    node st_12 = io_state_i_12 @[theta.scala 12:18 14:15]
    node _bc_2_T_1 = xor(_bc_2_T, st_12) @[theta.scala 18:36]
    node st_17 = io_state_i_17 @[theta.scala 12:18 14:15]
    node _bc_2_T_2 = xor(_bc_2_T_1, st_17) @[theta.scala 18:49]
    node st_22 = io_state_i_22 @[theta.scala 12:18 14:15]
    node _bc_2_T_3 = xor(_bc_2_T_2, st_22) @[theta.scala 18:62]
    node st_3 = io_state_i_3 @[theta.scala 12:18 14:15]
    node st_8 = io_state_i_8 @[theta.scala 12:18 14:15]
    node _bc_3_T = xor(st_3, st_8) @[theta.scala 18:24]
    node st_13 = io_state_i_13 @[theta.scala 12:18 14:15]
    node _bc_3_T_1 = xor(_bc_3_T, st_13) @[theta.scala 18:36]
    node st_18 = io_state_i_18 @[theta.scala 12:18 14:15]
    node _bc_3_T_2 = xor(_bc_3_T_1, st_18) @[theta.scala 18:49]
    node st_23 = io_state_i_23 @[theta.scala 12:18 14:15]
    node _bc_3_T_3 = xor(_bc_3_T_2, st_23) @[theta.scala 18:62]
    node st_4 = io_state_i_4 @[theta.scala 12:18 14:15]
    node st_9 = io_state_i_9 @[theta.scala 12:18 14:15]
    node _bc_4_T = xor(st_4, st_9) @[theta.scala 18:24]
    node st_14 = io_state_i_14 @[theta.scala 12:18 14:15]
    node _bc_4_T_1 = xor(_bc_4_T, st_14) @[theta.scala 18:36]
    node st_19 = io_state_i_19 @[theta.scala 12:18 14:15]
    node _bc_4_T_2 = xor(_bc_4_T_1, st_19) @[theta.scala 18:49]
    node st_24 = io_state_i_24 @[theta.scala 12:18 14:15]
    node _bc_4_T_3 = xor(_bc_4_T_2, st_24) @[theta.scala 18:62]
    node bc_1 = _bc_1_T_3 @[theta.scala 16:18 18:15]
    node _ROTL_T = shl(bc_1, 1) @[theta.scala 22:37]
    node _ROTL_T_1 = shr(bc_1, 63) @[theta.scala 22:66]
    node _ROTL_T_2 = or(_ROTL_T, _ROTL_T_1) @[theta.scala 22:45]
    node bc_4 = _bc_4_T_3 @[theta.scala 16:18 18:15]
    node ROTL = bits(_ROTL_T_2, 63, 0) @[theta.scala 21:24 22:14]
    node _tmp_T = xor(bc_4, ROTL) @[theta.scala 23:33]
    node tmp = _tmp_T @[theta.scala 20:23 23:13]
    node _io_state_o_0_T = xor(st_0, tmp) @[theta.scala 25:42]
    node _io_state_o_5_T = xor(st_5, tmp) @[theta.scala 25:42]
    node _io_state_o_10_T = xor(st_10, tmp) @[theta.scala 25:42]
    node _io_state_o_15_T = xor(st_15, tmp) @[theta.scala 25:42]
    node _io_state_o_20_T = xor(st_20, tmp) @[theta.scala 25:42]
    node bc_2 = _bc_2_T_3 @[theta.scala 16:18 18:15]
    node _ROTL_T_3 = shl(bc_2, 1) @[theta.scala 22:37]
    node _ROTL_T_4 = shr(bc_2, 63) @[theta.scala 22:66]
    node _ROTL_T_5 = or(_ROTL_T_3, _ROTL_T_4) @[theta.scala 22:45]
    node bc_0 = _bc_0_T_3 @[theta.scala 16:18 18:15]
    node ROTL_1 = bits(_ROTL_T_5, 63, 0) @[theta.scala 21:24 22:14]
    node _tmp_T_1 = xor(bc_0, ROTL_1) @[theta.scala 23:33]
    node tmp_1 = _tmp_T_1 @[theta.scala 20:23 23:13]
    node _io_state_o_1_T = xor(st_1, tmp_1) @[theta.scala 25:42]
    node _io_state_o_6_T = xor(st_6, tmp_1) @[theta.scala 25:42]
    node _io_state_o_11_T = xor(st_11, tmp_1) @[theta.scala 25:42]
    node _io_state_o_16_T = xor(st_16, tmp_1) @[theta.scala 25:42]
    node _io_state_o_21_T = xor(st_21, tmp_1) @[theta.scala 25:42]
    node bc_3 = _bc_3_T_3 @[theta.scala 16:18 18:15]
    node _ROTL_T_6 = shl(bc_3, 1) @[theta.scala 22:37]
    node _ROTL_T_7 = shr(bc_3, 63) @[theta.scala 22:66]
    node _ROTL_T_8 = or(_ROTL_T_6, _ROTL_T_7) @[theta.scala 22:45]
    node ROTL_2 = bits(_ROTL_T_8, 63, 0) @[theta.scala 21:24 22:14]
    node _tmp_T_2 = xor(bc_1, ROTL_2) @[theta.scala 23:33]
    node tmp_2 = _tmp_T_2 @[theta.scala 20:23 23:13]
    node _io_state_o_2_T = xor(st_2, tmp_2) @[theta.scala 25:42]
    node _io_state_o_7_T = xor(st_7, tmp_2) @[theta.scala 25:42]
    node _io_state_o_12_T = xor(st_12, tmp_2) @[theta.scala 25:42]
    node _io_state_o_17_T = xor(st_17, tmp_2) @[theta.scala 25:42]
    node _io_state_o_22_T = xor(st_22, tmp_2) @[theta.scala 25:42]
    node _ROTL_T_9 = shl(bc_4, 1) @[theta.scala 22:37]
    node _ROTL_T_10 = shr(bc_4, 63) @[theta.scala 22:66]
    node _ROTL_T_11 = or(_ROTL_T_9, _ROTL_T_10) @[theta.scala 22:45]
    node ROTL_3 = bits(_ROTL_T_11, 63, 0) @[theta.scala 21:24 22:14]
    node _tmp_T_3 = xor(bc_2, ROTL_3) @[theta.scala 23:33]
    node tmp_3 = _tmp_T_3 @[theta.scala 20:23 23:13]
    node _io_state_o_3_T = xor(st_3, tmp_3) @[theta.scala 25:42]
    node _io_state_o_8_T = xor(st_8, tmp_3) @[theta.scala 25:42]
    node _io_state_o_13_T = xor(st_13, tmp_3) @[theta.scala 25:42]
    node _io_state_o_18_T = xor(st_18, tmp_3) @[theta.scala 25:42]
    node _io_state_o_23_T = xor(st_23, tmp_3) @[theta.scala 25:42]
    node _ROTL_T_12 = shl(bc_0, 1) @[theta.scala 22:37]
    node _ROTL_T_13 = shr(bc_0, 63) @[theta.scala 22:66]
    node _ROTL_T_14 = or(_ROTL_T_12, _ROTL_T_13) @[theta.scala 22:45]
    node ROTL_4 = bits(_ROTL_T_14, 63, 0) @[theta.scala 21:24 22:14]
    node _tmp_T_4 = xor(bc_3, ROTL_4) @[theta.scala 23:33]
    node tmp_4 = _tmp_T_4 @[theta.scala 20:23 23:13]
    node _io_state_o_4_T = xor(st_4, tmp_4) @[theta.scala 25:42]
    node _io_state_o_9_T = xor(st_9, tmp_4) @[theta.scala 25:42]
    node _io_state_o_14_T = xor(st_14, tmp_4) @[theta.scala 25:42]
    node _io_state_o_19_T = xor(st_19, tmp_4) @[theta.scala 25:42]
    node _io_state_o_24_T = xor(st_24, tmp_4) @[theta.scala 25:42]
    io_state_o_0 <= _io_state_o_0_T @[theta.scala 25:31]
    io_state_o_1 <= _io_state_o_1_T @[theta.scala 25:31]
    io_state_o_2 <= _io_state_o_2_T @[theta.scala 25:31]
    io_state_o_3 <= _io_state_o_3_T @[theta.scala 25:31]
    io_state_o_4 <= _io_state_o_4_T @[theta.scala 25:31]
    io_state_o_5 <= _io_state_o_5_T @[theta.scala 25:31]
    io_state_o_6 <= _io_state_o_6_T @[theta.scala 25:31]
    io_state_o_7 <= _io_state_o_7_T @[theta.scala 25:31]
    io_state_o_8 <= _io_state_o_8_T @[theta.scala 25:31]
    io_state_o_9 <= _io_state_o_9_T @[theta.scala 25:31]
    io_state_o_10 <= _io_state_o_10_T @[theta.scala 25:31]
    io_state_o_11 <= _io_state_o_11_T @[theta.scala 25:31]
    io_state_o_12 <= _io_state_o_12_T @[theta.scala 25:31]
    io_state_o_13 <= _io_state_o_13_T @[theta.scala 25:31]
    io_state_o_14 <= _io_state_o_14_T @[theta.scala 25:31]
    io_state_o_15 <= _io_state_o_15_T @[theta.scala 25:31]
    io_state_o_16 <= _io_state_o_16_T @[theta.scala 25:31]
    io_state_o_17 <= _io_state_o_17_T @[theta.scala 25:31]
    io_state_o_18 <= _io_state_o_18_T @[theta.scala 25:31]
    io_state_o_19 <= _io_state_o_19_T @[theta.scala 25:31]
    io_state_o_20 <= _io_state_o_20_T @[theta.scala 25:31]
    io_state_o_21 <= _io_state_o_21_T @[theta.scala 25:31]
    io_state_o_22 <= _io_state_o_22_T @[theta.scala 25:31]
    io_state_o_23 <= _io_state_o_23_T @[theta.scala 25:31]
    io_state_o_24 <= _io_state_o_24_T @[theta.scala 25:31]

  module RhoPiModule :
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

    node _io_state_o_10_T = bits(io_state_i_1, 62, 0) @[common.scala 8:11]
    node _io_state_o_10_T_1 = bits(io_state_i_1, 63, 63) @[common.scala 8:32]
    node _io_state_o_10_T_2 = cat(_io_state_o_10_T, _io_state_o_10_T_1) @[Cat.scala 33:92]
    node _io_state_o_7_T = bits(io_state_i_10, 60, 0) @[common.scala 8:11]
    node _io_state_o_7_T_1 = bits(io_state_i_10, 63, 61) @[common.scala 8:32]
    node _io_state_o_7_T_2 = cat(_io_state_o_7_T, _io_state_o_7_T_1) @[Cat.scala 33:92]
    node _io_state_o_11_T = bits(io_state_i_7, 57, 0) @[common.scala 8:11]
    node _io_state_o_11_T_1 = bits(io_state_i_7, 63, 58) @[common.scala 8:32]
    node _io_state_o_11_T_2 = cat(_io_state_o_11_T, _io_state_o_11_T_1) @[Cat.scala 33:92]
    node _io_state_o_17_T = bits(io_state_i_11, 53, 0) @[common.scala 8:11]
    node _io_state_o_17_T_1 = bits(io_state_i_11, 63, 54) @[common.scala 8:32]
    node _io_state_o_17_T_2 = cat(_io_state_o_17_T, _io_state_o_17_T_1) @[Cat.scala 33:92]
    node _io_state_o_18_T = bits(io_state_i_17, 48, 0) @[common.scala 8:11]
    node _io_state_o_18_T_1 = bits(io_state_i_17, 63, 49) @[common.scala 8:32]
    node _io_state_o_18_T_2 = cat(_io_state_o_18_T, _io_state_o_18_T_1) @[Cat.scala 33:92]
    node _io_state_o_3_T = bits(io_state_i_18, 42, 0) @[common.scala 8:11]
    node _io_state_o_3_T_1 = bits(io_state_i_18, 63, 43) @[common.scala 8:32]
    node _io_state_o_3_T_2 = cat(_io_state_o_3_T, _io_state_o_3_T_1) @[Cat.scala 33:92]
    node _io_state_o_5_T = bits(io_state_i_3, 35, 0) @[common.scala 8:11]
    node _io_state_o_5_T_1 = bits(io_state_i_3, 63, 36) @[common.scala 8:32]
    node _io_state_o_5_T_2 = cat(_io_state_o_5_T, _io_state_o_5_T_1) @[Cat.scala 33:92]
    node _io_state_o_16_T = bits(io_state_i_5, 27, 0) @[common.scala 8:11]
    node _io_state_o_16_T_1 = bits(io_state_i_5, 63, 28) @[common.scala 8:32]
    node _io_state_o_16_T_2 = cat(_io_state_o_16_T, _io_state_o_16_T_1) @[Cat.scala 33:92]
    node _io_state_o_8_T = bits(io_state_i_16, 18, 0) @[common.scala 8:11]
    node _io_state_o_8_T_1 = bits(io_state_i_16, 63, 19) @[common.scala 8:32]
    node _io_state_o_8_T_2 = cat(_io_state_o_8_T, _io_state_o_8_T_1) @[Cat.scala 33:92]
    node _io_state_o_21_T = bits(io_state_i_8, 8, 0) @[common.scala 8:11]
    node _io_state_o_21_T_1 = bits(io_state_i_8, 63, 9) @[common.scala 8:32]
    node _io_state_o_21_T_2 = cat(_io_state_o_21_T, _io_state_o_21_T_1) @[Cat.scala 33:92]
    node _io_state_o_24_T = bits(io_state_i_21, 61, 0) @[common.scala 8:11]
    node _io_state_o_24_T_1 = bits(io_state_i_21, 63, 62) @[common.scala 8:32]
    node _io_state_o_24_T_2 = cat(_io_state_o_24_T, _io_state_o_24_T_1) @[Cat.scala 33:92]
    node _io_state_o_4_T = bits(io_state_i_24, 49, 0) @[common.scala 8:11]
    node _io_state_o_4_T_1 = bits(io_state_i_24, 63, 50) @[common.scala 8:32]
    node _io_state_o_4_T_2 = cat(_io_state_o_4_T, _io_state_o_4_T_1) @[Cat.scala 33:92]
    node _io_state_o_15_T = bits(io_state_i_4, 36, 0) @[common.scala 8:11]
    node _io_state_o_15_T_1 = bits(io_state_i_4, 63, 37) @[common.scala 8:32]
    node _io_state_o_15_T_2 = cat(_io_state_o_15_T, _io_state_o_15_T_1) @[Cat.scala 33:92]
    node _io_state_o_23_T = bits(io_state_i_15, 22, 0) @[common.scala 8:11]
    node _io_state_o_23_T_1 = bits(io_state_i_15, 63, 23) @[common.scala 8:32]
    node _io_state_o_23_T_2 = cat(_io_state_o_23_T, _io_state_o_23_T_1) @[Cat.scala 33:92]
    node _io_state_o_19_T = bits(io_state_i_23, 7, 0) @[common.scala 8:11]
    node _io_state_o_19_T_1 = bits(io_state_i_23, 63, 8) @[common.scala 8:32]
    node _io_state_o_19_T_2 = cat(_io_state_o_19_T, _io_state_o_19_T_1) @[Cat.scala 33:92]
    node _io_state_o_13_T = bits(io_state_i_19, 55, 0) @[common.scala 8:11]
    node _io_state_o_13_T_1 = bits(io_state_i_19, 63, 56) @[common.scala 8:32]
    node _io_state_o_13_T_2 = cat(_io_state_o_13_T, _io_state_o_13_T_1) @[Cat.scala 33:92]
    node _io_state_o_12_T = bits(io_state_i_13, 38, 0) @[common.scala 8:11]
    node _io_state_o_12_T_1 = bits(io_state_i_13, 63, 39) @[common.scala 8:32]
    node _io_state_o_12_T_2 = cat(_io_state_o_12_T, _io_state_o_12_T_1) @[Cat.scala 33:92]
    node _io_state_o_2_T = bits(io_state_i_12, 20, 0) @[common.scala 8:11]
    node _io_state_o_2_T_1 = bits(io_state_i_12, 63, 21) @[common.scala 8:32]
    node _io_state_o_2_T_2 = cat(_io_state_o_2_T, _io_state_o_2_T_1) @[Cat.scala 33:92]
    node _io_state_o_20_T = bits(io_state_i_2, 1, 0) @[common.scala 8:11]
    node _io_state_o_20_T_1 = bits(io_state_i_2, 63, 2) @[common.scala 8:32]
    node _io_state_o_20_T_2 = cat(_io_state_o_20_T, _io_state_o_20_T_1) @[Cat.scala 33:92]
    node _io_state_o_14_T = bits(io_state_i_20, 45, 0) @[common.scala 8:11]
    node _io_state_o_14_T_1 = bits(io_state_i_20, 63, 46) @[common.scala 8:32]
    node _io_state_o_14_T_2 = cat(_io_state_o_14_T, _io_state_o_14_T_1) @[Cat.scala 33:92]
    node _io_state_o_22_T = bits(io_state_i_14, 24, 0) @[common.scala 8:11]
    node _io_state_o_22_T_1 = bits(io_state_i_14, 63, 25) @[common.scala 8:32]
    node _io_state_o_22_T_2 = cat(_io_state_o_22_T, _io_state_o_22_T_1) @[Cat.scala 33:92]
    node _io_state_o_9_T = bits(io_state_i_22, 2, 0) @[common.scala 8:11]
    node _io_state_o_9_T_1 = bits(io_state_i_22, 63, 3) @[common.scala 8:32]
    node _io_state_o_9_T_2 = cat(_io_state_o_9_T, _io_state_o_9_T_1) @[Cat.scala 33:92]
    node _io_state_o_6_T = bits(io_state_i_9, 43, 0) @[common.scala 8:11]
    node _io_state_o_6_T_1 = bits(io_state_i_9, 63, 44) @[common.scala 8:32]
    node _io_state_o_6_T_2 = cat(_io_state_o_6_T, _io_state_o_6_T_1) @[Cat.scala 33:92]
    node _io_state_o_1_T = bits(io_state_i_6, 19, 0) @[common.scala 8:11]
    node _io_state_o_1_T_1 = bits(io_state_i_6, 63, 20) @[common.scala 8:32]
    node _io_state_o_1_T_2 = cat(_io_state_o_1_T, _io_state_o_1_T_1) @[Cat.scala 33:92]
    io_state_o_0 <= io_state_i_0 @[rhopi.scala 26:17]
    io_state_o_1 <= _io_state_o_1_T_2 @[rhopi.scala 22:25]
    io_state_o_2 <= _io_state_o_2_T_2 @[rhopi.scala 22:25]
    io_state_o_3 <= _io_state_o_3_T_2 @[rhopi.scala 22:25]
    io_state_o_4 <= _io_state_o_4_T_2 @[rhopi.scala 22:25]
    io_state_o_5 <= _io_state_o_5_T_2 @[rhopi.scala 22:25]
    io_state_o_6 <= _io_state_o_6_T_2 @[rhopi.scala 22:25]
    io_state_o_7 <= _io_state_o_7_T_2 @[rhopi.scala 22:25]
    io_state_o_8 <= _io_state_o_8_T_2 @[rhopi.scala 22:25]
    io_state_o_9 <= _io_state_o_9_T_2 @[rhopi.scala 22:25]
    io_state_o_10 <= _io_state_o_10_T_2 @[rhopi.scala 22:25]
    io_state_o_11 <= _io_state_o_11_T_2 @[rhopi.scala 22:25]
    io_state_o_12 <= _io_state_o_12_T_2 @[rhopi.scala 22:25]
    io_state_o_13 <= _io_state_o_13_T_2 @[rhopi.scala 22:25]
    io_state_o_14 <= _io_state_o_14_T_2 @[rhopi.scala 22:25]
    io_state_o_15 <= _io_state_o_15_T_2 @[rhopi.scala 22:25]
    io_state_o_16 <= _io_state_o_16_T_2 @[rhopi.scala 22:25]
    io_state_o_17 <= _io_state_o_17_T_2 @[rhopi.scala 22:25]
    io_state_o_18 <= _io_state_o_18_T_2 @[rhopi.scala 22:25]
    io_state_o_19 <= _io_state_o_19_T_2 @[rhopi.scala 22:25]
    io_state_o_20 <= _io_state_o_20_T_2 @[rhopi.scala 22:25]
    io_state_o_21 <= _io_state_o_21_T_2 @[rhopi.scala 22:25]
    io_state_o_22 <= _io_state_o_22_T_2 @[rhopi.scala 22:25]
    io_state_o_23 <= _io_state_o_23_T_2 @[rhopi.scala 22:25]
    io_state_o_24 <= _io_state_o_24_T_2 @[rhopi.scala 22:25]

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

  module DpathModule :
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

    inst theta of ThetaModule @[dpath.scala 24:21]
    inst rhopi of RhoPiModule @[dpath.scala 25:21]
    inst chi of ChiModule @[dpath.scala 26:19]
    inst iota of IotaModule @[dpath.scala 27:20]
    io_state_o_0 <= iota.io_state_o_0 @[dpath.scala 35:14]
    io_state_o_1 <= iota.io_state_o_1 @[dpath.scala 35:14]
    io_state_o_2 <= iota.io_state_o_2 @[dpath.scala 35:14]
    io_state_o_3 <= iota.io_state_o_3 @[dpath.scala 35:14]
    io_state_o_4 <= iota.io_state_o_4 @[dpath.scala 35:14]
    io_state_o_5 <= iota.io_state_o_5 @[dpath.scala 35:14]
    io_state_o_6 <= iota.io_state_o_6 @[dpath.scala 35:14]
    io_state_o_7 <= iota.io_state_o_7 @[dpath.scala 35:14]
    io_state_o_8 <= iota.io_state_o_8 @[dpath.scala 35:14]
    io_state_o_9 <= iota.io_state_o_9 @[dpath.scala 35:14]
    io_state_o_10 <= iota.io_state_o_10 @[dpath.scala 35:14]
    io_state_o_11 <= iota.io_state_o_11 @[dpath.scala 35:14]
    io_state_o_12 <= iota.io_state_o_12 @[dpath.scala 35:14]
    io_state_o_13 <= iota.io_state_o_13 @[dpath.scala 35:14]
    io_state_o_14 <= iota.io_state_o_14 @[dpath.scala 35:14]
    io_state_o_15 <= iota.io_state_o_15 @[dpath.scala 35:14]
    io_state_o_16 <= iota.io_state_o_16 @[dpath.scala 35:14]
    io_state_o_17 <= iota.io_state_o_17 @[dpath.scala 35:14]
    io_state_o_18 <= iota.io_state_o_18 @[dpath.scala 35:14]
    io_state_o_19 <= iota.io_state_o_19 @[dpath.scala 35:14]
    io_state_o_20 <= iota.io_state_o_20 @[dpath.scala 35:14]
    io_state_o_21 <= iota.io_state_o_21 @[dpath.scala 35:14]
    io_state_o_22 <= iota.io_state_o_22 @[dpath.scala 35:14]
    io_state_o_23 <= iota.io_state_o_23 @[dpath.scala 35:14]
    io_state_o_24 <= iota.io_state_o_24 @[dpath.scala 35:14]
    theta.clock <= clock
    theta.reset <= reset
    theta.io_state_i_0 <= io_state_i_0 @[dpath.scala 30:20]
    theta.io_state_i_1 <= io_state_i_1 @[dpath.scala 30:20]
    theta.io_state_i_2 <= io_state_i_2 @[dpath.scala 30:20]
    theta.io_state_i_3 <= io_state_i_3 @[dpath.scala 30:20]
    theta.io_state_i_4 <= io_state_i_4 @[dpath.scala 30:20]
    theta.io_state_i_5 <= io_state_i_5 @[dpath.scala 30:20]
    theta.io_state_i_6 <= io_state_i_6 @[dpath.scala 30:20]
    theta.io_state_i_7 <= io_state_i_7 @[dpath.scala 30:20]
    theta.io_state_i_8 <= io_state_i_8 @[dpath.scala 30:20]
    theta.io_state_i_9 <= io_state_i_9 @[dpath.scala 30:20]
    theta.io_state_i_10 <= io_state_i_10 @[dpath.scala 30:20]
    theta.io_state_i_11 <= io_state_i_11 @[dpath.scala 30:20]
    theta.io_state_i_12 <= io_state_i_12 @[dpath.scala 30:20]
    theta.io_state_i_13 <= io_state_i_13 @[dpath.scala 30:20]
    theta.io_state_i_14 <= io_state_i_14 @[dpath.scala 30:20]
    theta.io_state_i_15 <= io_state_i_15 @[dpath.scala 30:20]
    theta.io_state_i_16 <= io_state_i_16 @[dpath.scala 30:20]
    theta.io_state_i_17 <= io_state_i_17 @[dpath.scala 30:20]
    theta.io_state_i_18 <= io_state_i_18 @[dpath.scala 30:20]
    theta.io_state_i_19 <= io_state_i_19 @[dpath.scala 30:20]
    theta.io_state_i_20 <= io_state_i_20 @[dpath.scala 30:20]
    theta.io_state_i_21 <= io_state_i_21 @[dpath.scala 30:20]
    theta.io_state_i_22 <= io_state_i_22 @[dpath.scala 30:20]
    theta.io_state_i_23 <= io_state_i_23 @[dpath.scala 30:20]
    theta.io_state_i_24 <= io_state_i_24 @[dpath.scala 30:20]
    rhopi.clock <= clock
    rhopi.reset <= reset
    rhopi.io_state_i_0 <= theta.io_state_o_0 @[dpath.scala 31:20]
    rhopi.io_state_i_1 <= theta.io_state_o_1 @[dpath.scala 31:20]
    rhopi.io_state_i_2 <= theta.io_state_o_2 @[dpath.scala 31:20]
    rhopi.io_state_i_3 <= theta.io_state_o_3 @[dpath.scala 31:20]
    rhopi.io_state_i_4 <= theta.io_state_o_4 @[dpath.scala 31:20]
    rhopi.io_state_i_5 <= theta.io_state_o_5 @[dpath.scala 31:20]
    rhopi.io_state_i_6 <= theta.io_state_o_6 @[dpath.scala 31:20]
    rhopi.io_state_i_7 <= theta.io_state_o_7 @[dpath.scala 31:20]
    rhopi.io_state_i_8 <= theta.io_state_o_8 @[dpath.scala 31:20]
    rhopi.io_state_i_9 <= theta.io_state_o_9 @[dpath.scala 31:20]
    rhopi.io_state_i_10 <= theta.io_state_o_10 @[dpath.scala 31:20]
    rhopi.io_state_i_11 <= theta.io_state_o_11 @[dpath.scala 31:20]
    rhopi.io_state_i_12 <= theta.io_state_o_12 @[dpath.scala 31:20]
    rhopi.io_state_i_13 <= theta.io_state_o_13 @[dpath.scala 31:20]
    rhopi.io_state_i_14 <= theta.io_state_o_14 @[dpath.scala 31:20]
    rhopi.io_state_i_15 <= theta.io_state_o_15 @[dpath.scala 31:20]
    rhopi.io_state_i_16 <= theta.io_state_o_16 @[dpath.scala 31:20]
    rhopi.io_state_i_17 <= theta.io_state_o_17 @[dpath.scala 31:20]
    rhopi.io_state_i_18 <= theta.io_state_o_18 @[dpath.scala 31:20]
    rhopi.io_state_i_19 <= theta.io_state_o_19 @[dpath.scala 31:20]
    rhopi.io_state_i_20 <= theta.io_state_o_20 @[dpath.scala 31:20]
    rhopi.io_state_i_21 <= theta.io_state_o_21 @[dpath.scala 31:20]
    rhopi.io_state_i_22 <= theta.io_state_o_22 @[dpath.scala 31:20]
    rhopi.io_state_i_23 <= theta.io_state_o_23 @[dpath.scala 31:20]
    rhopi.io_state_i_24 <= theta.io_state_o_24 @[dpath.scala 31:20]
    chi.clock <= clock
    chi.reset <= reset
    chi.io_state_i_0 <= rhopi.io_state_o_0 @[dpath.scala 32:18]
    chi.io_state_i_1 <= rhopi.io_state_o_1 @[dpath.scala 32:18]
    chi.io_state_i_2 <= rhopi.io_state_o_2 @[dpath.scala 32:18]
    chi.io_state_i_3 <= rhopi.io_state_o_3 @[dpath.scala 32:18]
    chi.io_state_i_4 <= rhopi.io_state_o_4 @[dpath.scala 32:18]
    chi.io_state_i_5 <= rhopi.io_state_o_5 @[dpath.scala 32:18]
    chi.io_state_i_6 <= rhopi.io_state_o_6 @[dpath.scala 32:18]
    chi.io_state_i_7 <= rhopi.io_state_o_7 @[dpath.scala 32:18]
    chi.io_state_i_8 <= rhopi.io_state_o_8 @[dpath.scala 32:18]
    chi.io_state_i_9 <= rhopi.io_state_o_9 @[dpath.scala 32:18]
    chi.io_state_i_10 <= rhopi.io_state_o_10 @[dpath.scala 32:18]
    chi.io_state_i_11 <= rhopi.io_state_o_11 @[dpath.scala 32:18]
    chi.io_state_i_12 <= rhopi.io_state_o_12 @[dpath.scala 32:18]
    chi.io_state_i_13 <= rhopi.io_state_o_13 @[dpath.scala 32:18]
    chi.io_state_i_14 <= rhopi.io_state_o_14 @[dpath.scala 32:18]
    chi.io_state_i_15 <= rhopi.io_state_o_15 @[dpath.scala 32:18]
    chi.io_state_i_16 <= rhopi.io_state_o_16 @[dpath.scala 32:18]
    chi.io_state_i_17 <= rhopi.io_state_o_17 @[dpath.scala 32:18]
    chi.io_state_i_18 <= rhopi.io_state_o_18 @[dpath.scala 32:18]
    chi.io_state_i_19 <= rhopi.io_state_o_19 @[dpath.scala 32:18]
    chi.io_state_i_20 <= rhopi.io_state_o_20 @[dpath.scala 32:18]
    chi.io_state_i_21 <= rhopi.io_state_o_21 @[dpath.scala 32:18]
    chi.io_state_i_22 <= rhopi.io_state_o_22 @[dpath.scala 32:18]
    chi.io_state_i_23 <= rhopi.io_state_o_23 @[dpath.scala 32:18]
    chi.io_state_i_24 <= rhopi.io_state_o_24 @[dpath.scala 32:18]
    iota.clock <= clock
    iota.reset <= reset
    iota.io_state_i_0 <= chi.io_state_o_0 @[dpath.scala 33:19]
    iota.io_state_i_1 <= chi.io_state_o_1 @[dpath.scala 33:19]
    iota.io_state_i_2 <= chi.io_state_o_2 @[dpath.scala 33:19]
    iota.io_state_i_3 <= chi.io_state_o_3 @[dpath.scala 33:19]
    iota.io_state_i_4 <= chi.io_state_o_4 @[dpath.scala 33:19]
    iota.io_state_i_5 <= chi.io_state_o_5 @[dpath.scala 33:19]
    iota.io_state_i_6 <= chi.io_state_o_6 @[dpath.scala 33:19]
    iota.io_state_i_7 <= chi.io_state_o_7 @[dpath.scala 33:19]
    iota.io_state_i_8 <= chi.io_state_o_8 @[dpath.scala 33:19]
    iota.io_state_i_9 <= chi.io_state_o_9 @[dpath.scala 33:19]
    iota.io_state_i_10 <= chi.io_state_o_10 @[dpath.scala 33:19]
    iota.io_state_i_11 <= chi.io_state_o_11 @[dpath.scala 33:19]
    iota.io_state_i_12 <= chi.io_state_o_12 @[dpath.scala 33:19]
    iota.io_state_i_13 <= chi.io_state_o_13 @[dpath.scala 33:19]
    iota.io_state_i_14 <= chi.io_state_o_14 @[dpath.scala 33:19]
    iota.io_state_i_15 <= chi.io_state_o_15 @[dpath.scala 33:19]
    iota.io_state_i_16 <= chi.io_state_o_16 @[dpath.scala 33:19]
    iota.io_state_i_17 <= chi.io_state_o_17 @[dpath.scala 33:19]
    iota.io_state_i_18 <= chi.io_state_o_18 @[dpath.scala 33:19]
    iota.io_state_i_19 <= chi.io_state_o_19 @[dpath.scala 33:19]
    iota.io_state_i_20 <= chi.io_state_o_20 @[dpath.scala 33:19]
    iota.io_state_i_21 <= chi.io_state_o_21 @[dpath.scala 33:19]
    iota.io_state_i_22 <= chi.io_state_o_22 @[dpath.scala 33:19]
    iota.io_state_i_23 <= chi.io_state_o_23 @[dpath.scala 33:19]
    iota.io_state_i_24 <= chi.io_state_o_24 @[dpath.scala 33:19]
    iota.io_round <= io_round @[dpath.scala 34:17]

  module CtrlModule :
    input clock : Clock
    input reset : UInt<1>
    input io_message_val : UInt<1>
    output io_message_rdy : UInt<1>
    output io_hash_val : UInt<1>
    input io_hash_rdy : UInt<1>
    input io_message_0 : UInt<64>
    input io_message_1 : UInt<64>
    input io_message_2 : UInt<64>
    input io_message_3 : UInt<64>
    input io_message_4 : UInt<64>
    input io_message_5 : UInt<64>
    input io_message_6 : UInt<64>
    input io_message_7 : UInt<64>
    input io_message_8 : UInt<64>
    input io_message_9 : UInt<64>
    input io_message_10 : UInt<64>
    input io_message_11 : UInt<64>
    input io_message_12 : UInt<64>
    input io_message_13 : UInt<64>
    input io_message_14 : UInt<64>
    input io_message_15 : UInt<64>
    input io_message_16 : UInt<64>
    output io_hash_0 : UInt<64>
    output io_hash_1 : UInt<64>
    output io_hash_2 : UInt<64>
    output io_hash_3 : UInt<64>

    inst dpath of DpathModule @[ctrl.scala 29:21]
    reg encryptReady : UInt<1>, clock with :
      reset => (UInt<1>("h0"), encryptReady) @[ctrl.scala 24:29]
    reg messageReady : UInt<1>, clock with :
      reset => (UInt<1>("h0"), messageReady) @[ctrl.scala 25:29]
    reg temp_0 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), temp_0) @[ctrl.scala 30:21]
    reg temp_1 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), temp_1) @[ctrl.scala 30:21]
    reg temp_2 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), temp_2) @[ctrl.scala 30:21]
    reg temp_3 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), temp_3) @[ctrl.scala 30:21]
    reg temp_4 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), temp_4) @[ctrl.scala 30:21]
    reg temp_5 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), temp_5) @[ctrl.scala 30:21]
    reg temp_6 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), temp_6) @[ctrl.scala 30:21]
    reg temp_7 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), temp_7) @[ctrl.scala 30:21]
    reg temp_8 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), temp_8) @[ctrl.scala 30:21]
    reg temp_9 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), temp_9) @[ctrl.scala 30:21]
    reg temp_10 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), temp_10) @[ctrl.scala 30:21]
    reg temp_11 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), temp_11) @[ctrl.scala 30:21]
    reg temp_12 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), temp_12) @[ctrl.scala 30:21]
    reg temp_13 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), temp_13) @[ctrl.scala 30:21]
    reg temp_14 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), temp_14) @[ctrl.scala 30:21]
    reg temp_15 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), temp_15) @[ctrl.scala 30:21]
    reg temp_16 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), temp_16) @[ctrl.scala 30:21]
    reg temp_17 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), temp_17) @[ctrl.scala 30:21]
    reg temp_18 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), temp_18) @[ctrl.scala 30:21]
    reg temp_19 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), temp_19) @[ctrl.scala 30:21]
    reg temp_20 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), temp_20) @[ctrl.scala 30:21]
    reg temp_21 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), temp_21) @[ctrl.scala 30:21]
    reg temp_22 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), temp_22) @[ctrl.scala 30:21]
    reg temp_23 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), temp_23) @[ctrl.scala 30:21]
    reg temp_24 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), temp_24) @[ctrl.scala 30:21]
    reg round : UInt<5>, clock with :
      reset => (UInt<1>("h0"), round) @[ctrl.scala 31:22]
    reg roundsDone : UInt<1>, clock with :
      reset => (UInt<1>("h0"), roundsDone) @[ctrl.scala 32:27]
    node _T = asUInt(reset) @[ctrl.scala 40:9]
    node _T_1 = eq(_T, UInt<1>("h0")) @[ctrl.scala 40:9]
    node _T_2 = and(messageReady, io_message_val) @[ctrl.scala 42:22]
    node inputData_0 = io_message_0 @[ctrl.scala 43:25 45:22]
    node _GEN_0 = mux(_T_2, inputData_0, dpath.io_state_o_0) @[ctrl.scala 42:41 50:10 39:8]
    node inputData_1 = io_message_1 @[ctrl.scala 43:25 45:22]
    node _GEN_1 = mux(_T_2, inputData_1, dpath.io_state_o_1) @[ctrl.scala 42:41 50:10 39:8]
    node inputData_2 = io_message_2 @[ctrl.scala 43:25 45:22]
    node _GEN_2 = mux(_T_2, inputData_2, dpath.io_state_o_2) @[ctrl.scala 42:41 50:10 39:8]
    node inputData_3 = io_message_3 @[ctrl.scala 43:25 45:22]
    node _GEN_3 = mux(_T_2, inputData_3, dpath.io_state_o_3) @[ctrl.scala 42:41 50:10 39:8]
    node inputData_4 = io_message_4 @[ctrl.scala 43:25 45:22]
    node _GEN_4 = mux(_T_2, inputData_4, dpath.io_state_o_4) @[ctrl.scala 42:41 50:10 39:8]
    node inputData_5 = io_message_5 @[ctrl.scala 43:25 45:22]
    node _GEN_5 = mux(_T_2, inputData_5, dpath.io_state_o_5) @[ctrl.scala 42:41 50:10 39:8]
    node inputData_6 = io_message_6 @[ctrl.scala 43:25 45:22]
    node _GEN_6 = mux(_T_2, inputData_6, dpath.io_state_o_6) @[ctrl.scala 42:41 50:10 39:8]
    node inputData_7 = io_message_7 @[ctrl.scala 43:25 45:22]
    node _GEN_7 = mux(_T_2, inputData_7, dpath.io_state_o_7) @[ctrl.scala 42:41 50:10 39:8]
    node inputData_8 = io_message_8 @[ctrl.scala 43:25 45:22]
    node _GEN_8 = mux(_T_2, inputData_8, dpath.io_state_o_8) @[ctrl.scala 42:41 50:10 39:8]
    node inputData_9 = io_message_9 @[ctrl.scala 43:25 45:22]
    node _GEN_9 = mux(_T_2, inputData_9, dpath.io_state_o_9) @[ctrl.scala 42:41 50:10 39:8]
    node inputData_10 = io_message_10 @[ctrl.scala 43:25 45:22]
    node _GEN_10 = mux(_T_2, inputData_10, dpath.io_state_o_10) @[ctrl.scala 42:41 50:10 39:8]
    node inputData_11 = io_message_11 @[ctrl.scala 43:25 45:22]
    node _GEN_11 = mux(_T_2, inputData_11, dpath.io_state_o_11) @[ctrl.scala 42:41 50:10 39:8]
    node inputData_12 = io_message_12 @[ctrl.scala 43:25 45:22]
    node _GEN_12 = mux(_T_2, inputData_12, dpath.io_state_o_12) @[ctrl.scala 42:41 50:10 39:8]
    node inputData_13 = io_message_13 @[ctrl.scala 43:25 45:22]
    node _GEN_13 = mux(_T_2, inputData_13, dpath.io_state_o_13) @[ctrl.scala 42:41 50:10 39:8]
    node inputData_14 = io_message_14 @[ctrl.scala 43:25 45:22]
    node _GEN_14 = mux(_T_2, inputData_14, dpath.io_state_o_14) @[ctrl.scala 42:41 50:10 39:8]
    node inputData_15 = io_message_15 @[ctrl.scala 43:25 45:22]
    node _GEN_15 = mux(_T_2, inputData_15, dpath.io_state_o_15) @[ctrl.scala 42:41 50:10 39:8]
    node inputData_16 = io_message_16 @[ctrl.scala 43:25 45:22]
    node _GEN_16 = mux(_T_2, inputData_16, dpath.io_state_o_16) @[ctrl.scala 42:41 50:10 39:8]
    node inputData_17 = UInt<64>("h0") @[ctrl.scala 43:25 48:22]
    node _GEN_17 = mux(_T_2, inputData_17, dpath.io_state_o_17) @[ctrl.scala 42:41 50:10 39:8]
    node inputData_18 = UInt<64>("h0") @[ctrl.scala 43:25 48:22]
    node _GEN_18 = mux(_T_2, inputData_18, dpath.io_state_o_18) @[ctrl.scala 42:41 50:10 39:8]
    node inputData_19 = UInt<64>("h0") @[ctrl.scala 43:25 48:22]
    node _GEN_19 = mux(_T_2, inputData_19, dpath.io_state_o_19) @[ctrl.scala 42:41 50:10 39:8]
    node inputData_20 = UInt<64>("h0") @[ctrl.scala 43:25 48:22]
    node _GEN_20 = mux(_T_2, inputData_20, dpath.io_state_o_20) @[ctrl.scala 42:41 50:10 39:8]
    node inputData_21 = UInt<64>("h0") @[ctrl.scala 43:25 48:22]
    node _GEN_21 = mux(_T_2, inputData_21, dpath.io_state_o_21) @[ctrl.scala 42:41 50:10 39:8]
    node inputData_22 = UInt<64>("h0") @[ctrl.scala 43:25 48:22]
    node _GEN_22 = mux(_T_2, inputData_22, dpath.io_state_o_22) @[ctrl.scala 42:41 50:10 39:8]
    node inputData_23 = UInt<64>("h0") @[ctrl.scala 43:25 48:22]
    node _GEN_23 = mux(_T_2, inputData_23, dpath.io_state_o_23) @[ctrl.scala 42:41 50:10 39:8]
    node inputData_24 = UInt<64>("h0") @[ctrl.scala 43:25 48:22]
    node _GEN_24 = mux(_T_2, inputData_24, dpath.io_state_o_24) @[ctrl.scala 42:41 50:10 39:8]
    node _GEN_25 = mux(_T_2, UInt<1>("h0"), messageReady) @[ctrl.scala 42:41 51:18 25:29]
    node _GEN_26 = mux(_T_2, UInt<1>("h1"), encryptReady) @[ctrl.scala 42:41 52:18 24:29]
    node _T_3 = eq(roundsDone, UInt<1>("h0")) @[ctrl.scala 57:9]
    node _T_4 = and(_T_3, encryptReady) @[ctrl.scala 57:21]
    node _round_T = add(round, UInt<1>("h1")) @[ctrl.scala 59:20]
    node _round_T_1 = tail(_round_T, 1) @[ctrl.scala 59:20]
    node _roundsDone_T = add(round, UInt<1>("h1")) @[ctrl.scala 60:25]
    node _roundsDone_T_1 = tail(_roundsDone_T, 1) @[ctrl.scala 60:25]
    node _roundsDone_T_2 = geq(_roundsDone_T_1, UInt<5>("h18")) @[ctrl.scala 60:31]
    node _GEN_27 = mux(_T_4, round, UInt<1>("h0")) @[ctrl.scala 37:18 57:38 58:20]
    node _GEN_28 = mux(_T_4, _round_T_1, round) @[ctrl.scala 57:38 59:11 31:22]
    node _GEN_29 = mux(_T_4, _roundsDone_T_2, roundsDone) @[ctrl.scala 57:38 60:16 32:27]
    node _T_5 = and(roundsDone, io_hash_rdy) @[ctrl.scala 64:20]
    node _GEN_30 = mux(_T_5, UInt<1>("h1"), messageReady) @[ctrl.scala 27:18 64:36 65:20]
    node _GEN_31 = mux(_T_5, UInt<1>("h0"), _GEN_28) @[ctrl.scala 64:36 66:11]
    node _GEN_32 = mux(_T_5, UInt<1>("h1"), UInt<1>("h0")) @[ctrl.scala 26:15 64:36 67:17]
    node _GEN_33 = mux(_T_5, UInt<1>("h0"), _GEN_26) @[ctrl.scala 64:36 68:18]
    node _temp_WIRE_0 = UInt<64>("h0") @[ctrl.scala 30:{29,29}]
    node _temp_WIRE_1 = UInt<64>("h0") @[ctrl.scala 30:{29,29}]
    node _temp_WIRE_2 = UInt<64>("h0") @[ctrl.scala 30:{29,29}]
    node _temp_WIRE_3 = UInt<64>("h0") @[ctrl.scala 30:{29,29}]
    node _temp_WIRE_4 = UInt<64>("h0") @[ctrl.scala 30:{29,29}]
    node _temp_WIRE_5 = UInt<64>("h0") @[ctrl.scala 30:{29,29}]
    node _temp_WIRE_6 = UInt<64>("h0") @[ctrl.scala 30:{29,29}]
    node _temp_WIRE_7 = UInt<64>("h0") @[ctrl.scala 30:{29,29}]
    node _temp_WIRE_8 = UInt<64>("h0") @[ctrl.scala 30:{29,29}]
    node _temp_WIRE_9 = UInt<64>("h0") @[ctrl.scala 30:{29,29}]
    node _temp_WIRE_10 = UInt<64>("h0") @[ctrl.scala 30:{29,29}]
    node _temp_WIRE_11 = UInt<64>("h0") @[ctrl.scala 30:{29,29}]
    node _temp_WIRE_12 = UInt<64>("h0") @[ctrl.scala 30:{29,29}]
    node _temp_WIRE_13 = UInt<64>("h0") @[ctrl.scala 30:{29,29}]
    node _temp_WIRE_14 = UInt<64>("h0") @[ctrl.scala 30:{29,29}]
    node _temp_WIRE_15 = UInt<64>("h0") @[ctrl.scala 30:{29,29}]
    node _temp_WIRE_16 = UInt<64>("h0") @[ctrl.scala 30:{29,29}]
    node _temp_WIRE_17 = UInt<64>("h0") @[ctrl.scala 30:{29,29}]
    node _temp_WIRE_18 = UInt<64>("h0") @[ctrl.scala 30:{29,29}]
    node _temp_WIRE_19 = UInt<64>("h0") @[ctrl.scala 30:{29,29}]
    node _temp_WIRE_20 = UInt<64>("h0") @[ctrl.scala 30:{29,29}]
    node _temp_WIRE_21 = UInt<64>("h0") @[ctrl.scala 30:{29,29}]
    node _temp_WIRE_22 = UInt<64>("h0") @[ctrl.scala 30:{29,29}]
    node _temp_WIRE_23 = UInt<64>("h0") @[ctrl.scala 30:{29,29}]
    node _temp_WIRE_24 = UInt<64>("h0") @[ctrl.scala 30:{29,29}]
    io_message_rdy <= _GEN_30
    io_hash_val <= _GEN_32
    io_hash_0 <= temp_0 @[ctrl.scala 35:16]
    io_hash_1 <= temp_1 @[ctrl.scala 35:16]
    io_hash_2 <= temp_2 @[ctrl.scala 35:16]
    io_hash_3 <= temp_3 @[ctrl.scala 35:16]
    encryptReady <= mux(reset, UInt<1>("h0"), _GEN_33) @[ctrl.scala 24:{29,29}]
    messageReady <= mux(reset, UInt<1>("h1"), _GEN_25) @[ctrl.scala 25:{29,29}]
    dpath.clock <= clock
    dpath.reset <= reset
    dpath.io_state_i_0 <= temp_0 @[ctrl.scala 38:20]
    dpath.io_state_i_1 <= temp_1 @[ctrl.scala 38:20]
    dpath.io_state_i_2 <= temp_2 @[ctrl.scala 38:20]
    dpath.io_state_i_3 <= temp_3 @[ctrl.scala 38:20]
    dpath.io_state_i_4 <= temp_4 @[ctrl.scala 38:20]
    dpath.io_state_i_5 <= temp_5 @[ctrl.scala 38:20]
    dpath.io_state_i_6 <= temp_6 @[ctrl.scala 38:20]
    dpath.io_state_i_7 <= temp_7 @[ctrl.scala 38:20]
    dpath.io_state_i_8 <= temp_8 @[ctrl.scala 38:20]
    dpath.io_state_i_9 <= temp_9 @[ctrl.scala 38:20]
    dpath.io_state_i_10 <= temp_10 @[ctrl.scala 38:20]
    dpath.io_state_i_11 <= temp_11 @[ctrl.scala 38:20]
    dpath.io_state_i_12 <= temp_12 @[ctrl.scala 38:20]
    dpath.io_state_i_13 <= temp_13 @[ctrl.scala 38:20]
    dpath.io_state_i_14 <= temp_14 @[ctrl.scala 38:20]
    dpath.io_state_i_15 <= temp_15 @[ctrl.scala 38:20]
    dpath.io_state_i_16 <= temp_16 @[ctrl.scala 38:20]
    dpath.io_state_i_17 <= temp_17 @[ctrl.scala 38:20]
    dpath.io_state_i_18 <= temp_18 @[ctrl.scala 38:20]
    dpath.io_state_i_19 <= temp_19 @[ctrl.scala 38:20]
    dpath.io_state_i_20 <= temp_20 @[ctrl.scala 38:20]
    dpath.io_state_i_21 <= temp_21 @[ctrl.scala 38:20]
    dpath.io_state_i_22 <= temp_22 @[ctrl.scala 38:20]
    dpath.io_state_i_23 <= temp_23 @[ctrl.scala 38:20]
    dpath.io_state_i_24 <= temp_24 @[ctrl.scala 38:20]
    dpath.io_round <= _GEN_27
    temp_0 <= mux(reset, _temp_WIRE_0, _GEN_0) @[ctrl.scala 30:{21,21}]
    temp_1 <= mux(reset, _temp_WIRE_1, _GEN_1) @[ctrl.scala 30:{21,21}]
    temp_2 <= mux(reset, _temp_WIRE_2, _GEN_2) @[ctrl.scala 30:{21,21}]
    temp_3 <= mux(reset, _temp_WIRE_3, _GEN_3) @[ctrl.scala 30:{21,21}]
    temp_4 <= mux(reset, _temp_WIRE_4, _GEN_4) @[ctrl.scala 30:{21,21}]
    temp_5 <= mux(reset, _temp_WIRE_5, _GEN_5) @[ctrl.scala 30:{21,21}]
    temp_6 <= mux(reset, _temp_WIRE_6, _GEN_6) @[ctrl.scala 30:{21,21}]
    temp_7 <= mux(reset, _temp_WIRE_7, _GEN_7) @[ctrl.scala 30:{21,21}]
    temp_8 <= mux(reset, _temp_WIRE_8, _GEN_8) @[ctrl.scala 30:{21,21}]
    temp_9 <= mux(reset, _temp_WIRE_9, _GEN_9) @[ctrl.scala 30:{21,21}]
    temp_10 <= mux(reset, _temp_WIRE_10, _GEN_10) @[ctrl.scala 30:{21,21}]
    temp_11 <= mux(reset, _temp_WIRE_11, _GEN_11) @[ctrl.scala 30:{21,21}]
    temp_12 <= mux(reset, _temp_WIRE_12, _GEN_12) @[ctrl.scala 30:{21,21}]
    temp_13 <= mux(reset, _temp_WIRE_13, _GEN_13) @[ctrl.scala 30:{21,21}]
    temp_14 <= mux(reset, _temp_WIRE_14, _GEN_14) @[ctrl.scala 30:{21,21}]
    temp_15 <= mux(reset, _temp_WIRE_15, _GEN_15) @[ctrl.scala 30:{21,21}]
    temp_16 <= mux(reset, _temp_WIRE_16, _GEN_16) @[ctrl.scala 30:{21,21}]
    temp_17 <= mux(reset, _temp_WIRE_17, _GEN_17) @[ctrl.scala 30:{21,21}]
    temp_18 <= mux(reset, _temp_WIRE_18, _GEN_18) @[ctrl.scala 30:{21,21}]
    temp_19 <= mux(reset, _temp_WIRE_19, _GEN_19) @[ctrl.scala 30:{21,21}]
    temp_20 <= mux(reset, _temp_WIRE_20, _GEN_20) @[ctrl.scala 30:{21,21}]
    temp_21 <= mux(reset, _temp_WIRE_21, _GEN_21) @[ctrl.scala 30:{21,21}]
    temp_22 <= mux(reset, _temp_WIRE_22, _GEN_22) @[ctrl.scala 30:{21,21}]
    temp_23 <= mux(reset, _temp_WIRE_23, _GEN_23) @[ctrl.scala 30:{21,21}]
    temp_24 <= mux(reset, _temp_WIRE_24, _GEN_24) @[ctrl.scala 30:{21,21}]
    round <= mux(reset, UInt<5>("h0"), _GEN_31) @[ctrl.scala 31:{22,22}]
    roundsDone <= mux(reset, UInt<1>("h0"), _GEN_29) @[ctrl.scala 32:{27,27}]
    printf(clock, and(and(UInt<1>("h1"), _T_1), UInt<1>("h1")), "CTRL_out Round:%d - Vec(%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d)\n", round, temp_0, temp_1, temp_2, temp_3, temp_4, temp_5, temp_6, temp_7, temp_8, temp_9, temp_10, temp_11, temp_12, temp_13, temp_14, temp_15, temp_16, temp_17, temp_18, temp_19, temp_20, temp_21, temp_22, temp_23, temp_24) : printf @[ctrl.scala 40:9]

  module Sha3Accel :
    input clock : Clock
    input reset : UInt<1>
    output io_message_ready : UInt<1>
    input io_message_valid : UInt<1>
    input io_message_bits_0 : UInt<64>
    input io_message_bits_1 : UInt<64>
    input io_message_bits_2 : UInt<64>
    input io_message_bits_3 : UInt<64>
    input io_message_bits_4 : UInt<64>
    input io_message_bits_5 : UInt<64>
    input io_message_bits_6 : UInt<64>
    input io_message_bits_7 : UInt<64>
    input io_message_bits_8 : UInt<64>
    input io_message_bits_9 : UInt<64>
    input io_message_bits_10 : UInt<64>
    input io_message_bits_11 : UInt<64>
    input io_message_bits_12 : UInt<64>
    input io_message_bits_13 : UInt<64>
    input io_message_bits_14 : UInt<64>
    input io_message_bits_15 : UInt<64>
    input io_message_bits_16 : UInt<64>
    input io_hash_ready : UInt<1>
    output io_hash_valid : UInt<1>
    output io_hash_bits_0 : UInt<64>
    output io_hash_bits_1 : UInt<64>
    output io_hash_bits_2 : UInt<64>
    output io_hash_bits_3 : UInt<64>

    inst ctrl of CtrlModule @[sha3.scala 22:20]
    io_message_ready <= ctrl.io_message_rdy @[sha3.scala 24:23]
    io_hash_valid <= ctrl.io_hash_val @[sha3.scala 25:20]
    io_hash_bits_0 <= ctrl.io_hash_0 @[sha3.scala 30:16]
    io_hash_bits_1 <= ctrl.io_hash_1 @[sha3.scala 30:16]
    io_hash_bits_2 <= ctrl.io_hash_2 @[sha3.scala 30:16]
    io_hash_bits_3 <= ctrl.io_hash_3 @[sha3.scala 30:16]
    ctrl.clock <= clock
    ctrl.reset <= reset
    ctrl.io_message_val <= io_message_valid @[sha3.scala 23:23]
    ctrl.io_hash_rdy <= io_hash_ready @[sha3.scala 26:20]
    ctrl.io_message_0 <= io_message_bits_0 @[sha3.scala 29:19]
    ctrl.io_message_1 <= io_message_bits_1 @[sha3.scala 29:19]
    ctrl.io_message_2 <= io_message_bits_2 @[sha3.scala 29:19]
    ctrl.io_message_3 <= io_message_bits_3 @[sha3.scala 29:19]
    ctrl.io_message_4 <= io_message_bits_4 @[sha3.scala 29:19]
    ctrl.io_message_5 <= io_message_bits_5 @[sha3.scala 29:19]
    ctrl.io_message_6 <= io_message_bits_6 @[sha3.scala 29:19]
    ctrl.io_message_7 <= io_message_bits_7 @[sha3.scala 29:19]
    ctrl.io_message_8 <= io_message_bits_8 @[sha3.scala 29:19]
    ctrl.io_message_9 <= io_message_bits_9 @[sha3.scala 29:19]
    ctrl.io_message_10 <= io_message_bits_10 @[sha3.scala 29:19]
    ctrl.io_message_11 <= io_message_bits_11 @[sha3.scala 29:19]
    ctrl.io_message_12 <= io_message_bits_12 @[sha3.scala 29:19]
    ctrl.io_message_13 <= io_message_bits_13 @[sha3.scala 29:19]
    ctrl.io_message_14 <= io_message_bits_14 @[sha3.scala 29:19]
    ctrl.io_message_15 <= io_message_bits_15 @[sha3.scala 29:19]
    ctrl.io_message_16 <= io_message_bits_16 @[sha3.scala 29:19]
