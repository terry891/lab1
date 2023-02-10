module ThetaModule(
  input         clock,
  input         reset,
  input  [63:0] io_state_i_0,
  input  [63:0] io_state_i_1,
  input  [63:0] io_state_i_2,
  input  [63:0] io_state_i_3,
  input  [63:0] io_state_i_4,
  input  [63:0] io_state_i_5,
  input  [63:0] io_state_i_6,
  input  [63:0] io_state_i_7,
  input  [63:0] io_state_i_8,
  input  [63:0] io_state_i_9,
  input  [63:0] io_state_i_10,
  input  [63:0] io_state_i_11,
  input  [63:0] io_state_i_12,
  input  [63:0] io_state_i_13,
  input  [63:0] io_state_i_14,
  input  [63:0] io_state_i_15,
  input  [63:0] io_state_i_16,
  input  [63:0] io_state_i_17,
  input  [63:0] io_state_i_18,
  input  [63:0] io_state_i_19,
  input  [63:0] io_state_i_20,
  input  [63:0] io_state_i_21,
  input  [63:0] io_state_i_22,
  input  [63:0] io_state_i_23,
  input  [63:0] io_state_i_24,
  output [63:0] io_state_o_0,
  output [63:0] io_state_o_1,
  output [63:0] io_state_o_2,
  output [63:0] io_state_o_3,
  output [63:0] io_state_o_4,
  output [63:0] io_state_o_5,
  output [63:0] io_state_o_6,
  output [63:0] io_state_o_7,
  output [63:0] io_state_o_8,
  output [63:0] io_state_o_9,
  output [63:0] io_state_o_10,
  output [63:0] io_state_o_11,
  output [63:0] io_state_o_12,
  output [63:0] io_state_o_13,
  output [63:0] io_state_o_14,
  output [63:0] io_state_o_15,
  output [63:0] io_state_o_16,
  output [63:0] io_state_o_17,
  output [63:0] io_state_o_18,
  output [63:0] io_state_o_19,
  output [63:0] io_state_o_20,
  output [63:0] io_state_o_21,
  output [63:0] io_state_o_22,
  output [63:0] io_state_o_23,
  output [63:0] io_state_o_24
);
  wire [63:0] _intermediate_states_0_T = io_state_i_0 ^ io_state_i_5; // @[theta.scala 20:50]
  wire [63:0] _intermediate_states_0_T_1 = _intermediate_states_0_T ^ io_state_i_10; // @[theta.scala 20:73]
  wire [63:0] _intermediate_states_0_T_2 = _intermediate_states_0_T_1 ^ io_state_i_15; // @[theta.scala 20:97]
  wire [63:0] intermediate_states_0 = _intermediate_states_0_T_2 ^ io_state_i_20; // @[theta.scala 20:121]
  wire [63:0] _intermediate_states_1_T = io_state_i_1 ^ io_state_i_6; // @[theta.scala 20:50]
  wire [63:0] _intermediate_states_1_T_1 = _intermediate_states_1_T ^ io_state_i_11; // @[theta.scala 20:73]
  wire [63:0] _intermediate_states_1_T_2 = _intermediate_states_1_T_1 ^ io_state_i_16; // @[theta.scala 20:97]
  wire [63:0] intermediate_states_1 = _intermediate_states_1_T_2 ^ io_state_i_21; // @[theta.scala 20:121]
  wire [63:0] _intermediate_states_2_T = io_state_i_2 ^ io_state_i_7; // @[theta.scala 20:50]
  wire [63:0] _intermediate_states_2_T_1 = _intermediate_states_2_T ^ io_state_i_12; // @[theta.scala 20:73]
  wire [63:0] _intermediate_states_2_T_2 = _intermediate_states_2_T_1 ^ io_state_i_17; // @[theta.scala 20:97]
  wire [63:0] intermediate_states_2 = _intermediate_states_2_T_2 ^ io_state_i_22; // @[theta.scala 20:121]
  wire [63:0] _intermediate_states_3_T = io_state_i_3 ^ io_state_i_8; // @[theta.scala 20:50]
  wire [63:0] _intermediate_states_3_T_1 = _intermediate_states_3_T ^ io_state_i_13; // @[theta.scala 20:73]
  wire [63:0] _intermediate_states_3_T_2 = _intermediate_states_3_T_1 ^ io_state_i_18; // @[theta.scala 20:97]
  wire [63:0] intermediate_states_3 = _intermediate_states_3_T_2 ^ io_state_i_23; // @[theta.scala 20:121]
  wire [63:0] _intermediate_states_4_T = io_state_i_4 ^ io_state_i_9; // @[theta.scala 20:50]
  wire [63:0] _intermediate_states_4_T_1 = _intermediate_states_4_T ^ io_state_i_14; // @[theta.scala 20:73]
  wire [63:0] _intermediate_states_4_T_2 = _intermediate_states_4_T_1 ^ io_state_i_19; // @[theta.scala 20:97]
  wire [63:0] intermediate_states_4 = _intermediate_states_4_T_2 ^ io_state_i_24; // @[theta.scala 20:121]
  wire [63:0] _io_state_o_0_T = io_state_i_0 ^ intermediate_states_4; // @[theta.scala 23:53]
  wire [64:0] _io_state_o_0_T_1 = {intermediate_states_1, 1'h0}; // @[theta.scala 23:126]
  wire [64:0] _GEN_0 = {{1'd0}, _io_state_o_0_T}; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_0_T_2 = _GEN_0 ^ _io_state_o_0_T_1; // @[theta.scala 23:88]
  wire [64:0] _GEN_1 = {{64'd0}, intermediate_states_1[63]}; // @[theta.scala 23:134]
  wire [64:0] _io_state_o_0_T_4 = _io_state_o_0_T_2 | _GEN_1; // @[theta.scala 23:134]
  wire [63:0] _io_state_o_5_T = io_state_i_5 ^ intermediate_states_4; // @[theta.scala 23:53]
  wire [64:0] _GEN_2 = {{1'd0}, _io_state_o_5_T}; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_5_T_2 = _GEN_2 ^ _io_state_o_0_T_1; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_5_T_4 = _io_state_o_5_T_2 | _GEN_1; // @[theta.scala 23:134]
  wire [63:0] _io_state_o_10_T = io_state_i_10 ^ intermediate_states_4; // @[theta.scala 23:53]
  wire [64:0] _GEN_4 = {{1'd0}, _io_state_o_10_T}; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_10_T_2 = _GEN_4 ^ _io_state_o_0_T_1; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_10_T_4 = _io_state_o_10_T_2 | _GEN_1; // @[theta.scala 23:134]
  wire [63:0] _io_state_o_15_T = io_state_i_15 ^ intermediate_states_4; // @[theta.scala 23:53]
  wire [64:0] _GEN_6 = {{1'd0}, _io_state_o_15_T}; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_15_T_2 = _GEN_6 ^ _io_state_o_0_T_1; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_15_T_4 = _io_state_o_15_T_2 | _GEN_1; // @[theta.scala 23:134]
  wire [63:0] _io_state_o_20_T = io_state_i_20 ^ intermediate_states_4; // @[theta.scala 23:53]
  wire [64:0] _GEN_8 = {{1'd0}, _io_state_o_20_T}; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_20_T_2 = _GEN_8 ^ _io_state_o_0_T_1; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_20_T_4 = _io_state_o_20_T_2 | _GEN_1; // @[theta.scala 23:134]
  wire [63:0] _io_state_o_1_T = io_state_i_1 ^ intermediate_states_0; // @[theta.scala 23:53]
  wire [64:0] _io_state_o_1_T_1 = {intermediate_states_2, 1'h0}; // @[theta.scala 23:126]
  wire [64:0] _GEN_10 = {{1'd0}, _io_state_o_1_T}; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_1_T_2 = _GEN_10 ^ _io_state_o_1_T_1; // @[theta.scala 23:88]
  wire [64:0] _GEN_11 = {{64'd0}, intermediate_states_2[63]}; // @[theta.scala 23:134]
  wire [64:0] _io_state_o_1_T_4 = _io_state_o_1_T_2 | _GEN_11; // @[theta.scala 23:134]
  wire [63:0] _io_state_o_6_T = io_state_i_6 ^ intermediate_states_0; // @[theta.scala 23:53]
  wire [64:0] _GEN_12 = {{1'd0}, _io_state_o_6_T}; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_6_T_2 = _GEN_12 ^ _io_state_o_1_T_1; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_6_T_4 = _io_state_o_6_T_2 | _GEN_11; // @[theta.scala 23:134]
  wire [63:0] _io_state_o_11_T = io_state_i_11 ^ intermediate_states_0; // @[theta.scala 23:53]
  wire [64:0] _GEN_14 = {{1'd0}, _io_state_o_11_T}; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_11_T_2 = _GEN_14 ^ _io_state_o_1_T_1; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_11_T_4 = _io_state_o_11_T_2 | _GEN_11; // @[theta.scala 23:134]
  wire [63:0] _io_state_o_16_T = io_state_i_16 ^ intermediate_states_0; // @[theta.scala 23:53]
  wire [64:0] _GEN_16 = {{1'd0}, _io_state_o_16_T}; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_16_T_2 = _GEN_16 ^ _io_state_o_1_T_1; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_16_T_4 = _io_state_o_16_T_2 | _GEN_11; // @[theta.scala 23:134]
  wire [63:0] _io_state_o_21_T = io_state_i_21 ^ intermediate_states_0; // @[theta.scala 23:53]
  wire [64:0] _GEN_18 = {{1'd0}, _io_state_o_21_T}; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_21_T_2 = _GEN_18 ^ _io_state_o_1_T_1; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_21_T_4 = _io_state_o_21_T_2 | _GEN_11; // @[theta.scala 23:134]
  wire [63:0] _io_state_o_2_T = io_state_i_2 ^ intermediate_states_1; // @[theta.scala 23:53]
  wire [64:0] _io_state_o_2_T_1 = {intermediate_states_3, 1'h0}; // @[theta.scala 23:126]
  wire [64:0] _GEN_20 = {{1'd0}, _io_state_o_2_T}; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_2_T_2 = _GEN_20 ^ _io_state_o_2_T_1; // @[theta.scala 23:88]
  wire [64:0] _GEN_21 = {{64'd0}, intermediate_states_3[63]}; // @[theta.scala 23:134]
  wire [64:0] _io_state_o_2_T_4 = _io_state_o_2_T_2 | _GEN_21; // @[theta.scala 23:134]
  wire [63:0] _io_state_o_7_T = io_state_i_7 ^ intermediate_states_1; // @[theta.scala 23:53]
  wire [64:0] _GEN_22 = {{1'd0}, _io_state_o_7_T}; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_7_T_2 = _GEN_22 ^ _io_state_o_2_T_1; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_7_T_4 = _io_state_o_7_T_2 | _GEN_21; // @[theta.scala 23:134]
  wire [63:0] _io_state_o_12_T = io_state_i_12 ^ intermediate_states_1; // @[theta.scala 23:53]
  wire [64:0] _GEN_24 = {{1'd0}, _io_state_o_12_T}; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_12_T_2 = _GEN_24 ^ _io_state_o_2_T_1; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_12_T_4 = _io_state_o_12_T_2 | _GEN_21; // @[theta.scala 23:134]
  wire [63:0] _io_state_o_17_T = io_state_i_17 ^ intermediate_states_1; // @[theta.scala 23:53]
  wire [64:0] _GEN_26 = {{1'd0}, _io_state_o_17_T}; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_17_T_2 = _GEN_26 ^ _io_state_o_2_T_1; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_17_T_4 = _io_state_o_17_T_2 | _GEN_21; // @[theta.scala 23:134]
  wire [63:0] _io_state_o_22_T = io_state_i_22 ^ intermediate_states_1; // @[theta.scala 23:53]
  wire [64:0] _GEN_28 = {{1'd0}, _io_state_o_22_T}; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_22_T_2 = _GEN_28 ^ _io_state_o_2_T_1; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_22_T_4 = _io_state_o_22_T_2 | _GEN_21; // @[theta.scala 23:134]
  wire [63:0] _io_state_o_3_T = io_state_i_3 ^ intermediate_states_2; // @[theta.scala 23:53]
  wire [64:0] _io_state_o_3_T_1 = {intermediate_states_4, 1'h0}; // @[theta.scala 23:126]
  wire [64:0] _GEN_30 = {{1'd0}, _io_state_o_3_T}; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_3_T_2 = _GEN_30 ^ _io_state_o_3_T_1; // @[theta.scala 23:88]
  wire [64:0] _GEN_31 = {{64'd0}, intermediate_states_4[63]}; // @[theta.scala 23:134]
  wire [64:0] _io_state_o_3_T_4 = _io_state_o_3_T_2 | _GEN_31; // @[theta.scala 23:134]
  wire [63:0] _io_state_o_8_T = io_state_i_8 ^ intermediate_states_2; // @[theta.scala 23:53]
  wire [64:0] _GEN_32 = {{1'd0}, _io_state_o_8_T}; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_8_T_2 = _GEN_32 ^ _io_state_o_3_T_1; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_8_T_4 = _io_state_o_8_T_2 | _GEN_31; // @[theta.scala 23:134]
  wire [63:0] _io_state_o_13_T = io_state_i_13 ^ intermediate_states_2; // @[theta.scala 23:53]
  wire [64:0] _GEN_34 = {{1'd0}, _io_state_o_13_T}; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_13_T_2 = _GEN_34 ^ _io_state_o_3_T_1; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_13_T_4 = _io_state_o_13_T_2 | _GEN_31; // @[theta.scala 23:134]
  wire [63:0] _io_state_o_18_T = io_state_i_18 ^ intermediate_states_2; // @[theta.scala 23:53]
  wire [64:0] _GEN_36 = {{1'd0}, _io_state_o_18_T}; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_18_T_2 = _GEN_36 ^ _io_state_o_3_T_1; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_18_T_4 = _io_state_o_18_T_2 | _GEN_31; // @[theta.scala 23:134]
  wire [63:0] _io_state_o_23_T = io_state_i_23 ^ intermediate_states_2; // @[theta.scala 23:53]
  wire [64:0] _GEN_38 = {{1'd0}, _io_state_o_23_T}; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_23_T_2 = _GEN_38 ^ _io_state_o_3_T_1; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_23_T_4 = _io_state_o_23_T_2 | _GEN_31; // @[theta.scala 23:134]
  wire [63:0] _io_state_o_4_T = io_state_i_4 ^ intermediate_states_3; // @[theta.scala 23:53]
  wire [64:0] _io_state_o_4_T_1 = {intermediate_states_0, 1'h0}; // @[theta.scala 23:126]
  wire [64:0] _GEN_40 = {{1'd0}, _io_state_o_4_T}; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_4_T_2 = _GEN_40 ^ _io_state_o_4_T_1; // @[theta.scala 23:88]
  wire [64:0] _GEN_41 = {{64'd0}, intermediate_states_0[63]}; // @[theta.scala 23:134]
  wire [64:0] _io_state_o_4_T_4 = _io_state_o_4_T_2 | _GEN_41; // @[theta.scala 23:134]
  wire [63:0] _io_state_o_9_T = io_state_i_9 ^ intermediate_states_3; // @[theta.scala 23:53]
  wire [64:0] _GEN_42 = {{1'd0}, _io_state_o_9_T}; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_9_T_2 = _GEN_42 ^ _io_state_o_4_T_1; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_9_T_4 = _io_state_o_9_T_2 | _GEN_41; // @[theta.scala 23:134]
  wire [63:0] _io_state_o_14_T = io_state_i_14 ^ intermediate_states_3; // @[theta.scala 23:53]
  wire [64:0] _GEN_44 = {{1'd0}, _io_state_o_14_T}; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_14_T_2 = _GEN_44 ^ _io_state_o_4_T_1; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_14_T_4 = _io_state_o_14_T_2 | _GEN_41; // @[theta.scala 23:134]
  wire [63:0] _io_state_o_19_T = io_state_i_19 ^ intermediate_states_3; // @[theta.scala 23:53]
  wire [64:0] _GEN_46 = {{1'd0}, _io_state_o_19_T}; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_19_T_2 = _GEN_46 ^ _io_state_o_4_T_1; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_19_T_4 = _io_state_o_19_T_2 | _GEN_41; // @[theta.scala 23:134]
  wire [63:0] _io_state_o_24_T = io_state_i_24 ^ intermediate_states_3; // @[theta.scala 23:53]
  wire [64:0] _GEN_48 = {{1'd0}, _io_state_o_24_T}; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_24_T_2 = _GEN_48 ^ _io_state_o_4_T_1; // @[theta.scala 23:88]
  wire [64:0] _io_state_o_24_T_4 = _io_state_o_24_T_2 | _GEN_41; // @[theta.scala 23:134]
  assign io_state_o_0 = _io_state_o_0_T_4[63:0]; // @[theta.scala 23:29]
  assign io_state_o_1 = _io_state_o_1_T_4[63:0]; // @[theta.scala 23:29]
  assign io_state_o_2 = _io_state_o_2_T_4[63:0]; // @[theta.scala 23:29]
  assign io_state_o_3 = _io_state_o_3_T_4[63:0]; // @[theta.scala 23:29]
  assign io_state_o_4 = _io_state_o_4_T_4[63:0]; // @[theta.scala 23:29]
  assign io_state_o_5 = _io_state_o_5_T_4[63:0]; // @[theta.scala 23:29]
  assign io_state_o_6 = _io_state_o_6_T_4[63:0]; // @[theta.scala 23:29]
  assign io_state_o_7 = _io_state_o_7_T_4[63:0]; // @[theta.scala 23:29]
  assign io_state_o_8 = _io_state_o_8_T_4[63:0]; // @[theta.scala 23:29]
  assign io_state_o_9 = _io_state_o_9_T_4[63:0]; // @[theta.scala 23:29]
  assign io_state_o_10 = _io_state_o_10_T_4[63:0]; // @[theta.scala 23:29]
  assign io_state_o_11 = _io_state_o_11_T_4[63:0]; // @[theta.scala 23:29]
  assign io_state_o_12 = _io_state_o_12_T_4[63:0]; // @[theta.scala 23:29]
  assign io_state_o_13 = _io_state_o_13_T_4[63:0]; // @[theta.scala 23:29]
  assign io_state_o_14 = _io_state_o_14_T_4[63:0]; // @[theta.scala 23:29]
  assign io_state_o_15 = _io_state_o_15_T_4[63:0]; // @[theta.scala 23:29]
  assign io_state_o_16 = _io_state_o_16_T_4[63:0]; // @[theta.scala 23:29]
  assign io_state_o_17 = _io_state_o_17_T_4[63:0]; // @[theta.scala 23:29]
  assign io_state_o_18 = _io_state_o_18_T_4[63:0]; // @[theta.scala 23:29]
  assign io_state_o_19 = _io_state_o_19_T_4[63:0]; // @[theta.scala 23:29]
  assign io_state_o_20 = _io_state_o_20_T_4[63:0]; // @[theta.scala 23:29]
  assign io_state_o_21 = _io_state_o_21_T_4[63:0]; // @[theta.scala 23:29]
  assign io_state_o_22 = _io_state_o_22_T_4[63:0]; // @[theta.scala 23:29]
  assign io_state_o_23 = _io_state_o_23_T_4[63:0]; // @[theta.scala 23:29]
  assign io_state_o_24 = _io_state_o_24_T_4[63:0]; // @[theta.scala 23:29]
endmodule
