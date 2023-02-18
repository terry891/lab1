// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSha3Accel__Syms.h"


VL_ATTR_COLD void VSha3Accel___024root__trace_init_sub__TOP__0(VSha3Accel___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSha3Accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSha3Accel___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+236,"clock", false,-1);
    tracep->declBit(c+237,"reset", false,-1);
    tracep->declBit(c+238,"io_message_ready", false,-1);
    tracep->declBit(c+239,"io_message_valid", false,-1);
    tracep->declQuad(c+240,"io_message_bits_0", false,-1, 63,0);
    tracep->declQuad(c+242,"io_message_bits_1", false,-1, 63,0);
    tracep->declQuad(c+244,"io_message_bits_2", false,-1, 63,0);
    tracep->declQuad(c+246,"io_message_bits_3", false,-1, 63,0);
    tracep->declQuad(c+248,"io_message_bits_4", false,-1, 63,0);
    tracep->declQuad(c+250,"io_message_bits_5", false,-1, 63,0);
    tracep->declQuad(c+252,"io_message_bits_6", false,-1, 63,0);
    tracep->declQuad(c+254,"io_message_bits_7", false,-1, 63,0);
    tracep->declQuad(c+256,"io_message_bits_8", false,-1, 63,0);
    tracep->declQuad(c+258,"io_message_bits_9", false,-1, 63,0);
    tracep->declQuad(c+260,"io_message_bits_10", false,-1, 63,0);
    tracep->declQuad(c+262,"io_message_bits_11", false,-1, 63,0);
    tracep->declQuad(c+264,"io_message_bits_12", false,-1, 63,0);
    tracep->declQuad(c+266,"io_message_bits_13", false,-1, 63,0);
    tracep->declQuad(c+268,"io_message_bits_14", false,-1, 63,0);
    tracep->declQuad(c+270,"io_message_bits_15", false,-1, 63,0);
    tracep->declQuad(c+272,"io_message_bits_16", false,-1, 63,0);
    tracep->declBit(c+274,"io_hash_ready", false,-1);
    tracep->declBit(c+275,"io_hash_valid", false,-1);
    tracep->declQuad(c+276,"io_hash_bits_0", false,-1, 63,0);
    tracep->declQuad(c+278,"io_hash_bits_1", false,-1, 63,0);
    tracep->declQuad(c+280,"io_hash_bits_2", false,-1, 63,0);
    tracep->declQuad(c+282,"io_hash_bits_3", false,-1, 63,0);
    tracep->pushNamePrefix("Sha3Accel ");
    tracep->declBit(c+236,"clock", false,-1);
    tracep->declBit(c+237,"reset", false,-1);
    tracep->declBit(c+238,"io_message_ready", false,-1);
    tracep->declBit(c+239,"io_message_valid", false,-1);
    tracep->declQuad(c+240,"io_message_bits_0", false,-1, 63,0);
    tracep->declQuad(c+242,"io_message_bits_1", false,-1, 63,0);
    tracep->declQuad(c+244,"io_message_bits_2", false,-1, 63,0);
    tracep->declQuad(c+246,"io_message_bits_3", false,-1, 63,0);
    tracep->declQuad(c+248,"io_message_bits_4", false,-1, 63,0);
    tracep->declQuad(c+250,"io_message_bits_5", false,-1, 63,0);
    tracep->declQuad(c+252,"io_message_bits_6", false,-1, 63,0);
    tracep->declQuad(c+254,"io_message_bits_7", false,-1, 63,0);
    tracep->declQuad(c+256,"io_message_bits_8", false,-1, 63,0);
    tracep->declQuad(c+258,"io_message_bits_9", false,-1, 63,0);
    tracep->declQuad(c+260,"io_message_bits_10", false,-1, 63,0);
    tracep->declQuad(c+262,"io_message_bits_11", false,-1, 63,0);
    tracep->declQuad(c+264,"io_message_bits_12", false,-1, 63,0);
    tracep->declQuad(c+266,"io_message_bits_13", false,-1, 63,0);
    tracep->declQuad(c+268,"io_message_bits_14", false,-1, 63,0);
    tracep->declQuad(c+270,"io_message_bits_15", false,-1, 63,0);
    tracep->declQuad(c+272,"io_message_bits_16", false,-1, 63,0);
    tracep->declBit(c+274,"io_hash_ready", false,-1);
    tracep->declBit(c+275,"io_hash_valid", false,-1);
    tracep->declQuad(c+276,"io_hash_bits_0", false,-1, 63,0);
    tracep->declQuad(c+278,"io_hash_bits_1", false,-1, 63,0);
    tracep->declQuad(c+280,"io_hash_bits_2", false,-1, 63,0);
    tracep->declQuad(c+282,"io_hash_bits_3", false,-1, 63,0);
    tracep->declBit(c+236,"ctrl_clock", false,-1);
    tracep->declBit(c+237,"ctrl_reset", false,-1);
    tracep->declBit(c+239,"ctrl_io_message_val", false,-1);
    tracep->declBit(c+284,"ctrl_io_message_rdy", false,-1);
    tracep->declBit(c+285,"ctrl_io_hash_val", false,-1);
    tracep->declBit(c+274,"ctrl_io_hash_rdy", false,-1);
    tracep->declQuad(c+240,"ctrl_io_message_0", false,-1, 63,0);
    tracep->declQuad(c+242,"ctrl_io_message_1", false,-1, 63,0);
    tracep->declQuad(c+244,"ctrl_io_message_2", false,-1, 63,0);
    tracep->declQuad(c+246,"ctrl_io_message_3", false,-1, 63,0);
    tracep->declQuad(c+248,"ctrl_io_message_4", false,-1, 63,0);
    tracep->declQuad(c+250,"ctrl_io_message_5", false,-1, 63,0);
    tracep->declQuad(c+252,"ctrl_io_message_6", false,-1, 63,0);
    tracep->declQuad(c+254,"ctrl_io_message_7", false,-1, 63,0);
    tracep->declQuad(c+256,"ctrl_io_message_8", false,-1, 63,0);
    tracep->declQuad(c+258,"ctrl_io_message_9", false,-1, 63,0);
    tracep->declQuad(c+260,"ctrl_io_message_10", false,-1, 63,0);
    tracep->declQuad(c+262,"ctrl_io_message_11", false,-1, 63,0);
    tracep->declQuad(c+264,"ctrl_io_message_12", false,-1, 63,0);
    tracep->declQuad(c+266,"ctrl_io_message_13", false,-1, 63,0);
    tracep->declQuad(c+268,"ctrl_io_message_14", false,-1, 63,0);
    tracep->declQuad(c+270,"ctrl_io_message_15", false,-1, 63,0);
    tracep->declQuad(c+272,"ctrl_io_message_16", false,-1, 63,0);
    tracep->declQuad(c+1,"ctrl_io_hash_0", false,-1, 63,0);
    tracep->declQuad(c+3,"ctrl_io_hash_1", false,-1, 63,0);
    tracep->declQuad(c+5,"ctrl_io_hash_2", false,-1, 63,0);
    tracep->declQuad(c+7,"ctrl_io_hash_3", false,-1, 63,0);
    tracep->pushNamePrefix("ctrl ");
    tracep->declBit(c+236,"clock", false,-1);
    tracep->declBit(c+237,"reset", false,-1);
    tracep->declBit(c+239,"io_message_val", false,-1);
    tracep->declBit(c+284,"io_message_rdy", false,-1);
    tracep->declBit(c+285,"io_hash_val", false,-1);
    tracep->declBit(c+274,"io_hash_rdy", false,-1);
    tracep->declQuad(c+240,"io_message_0", false,-1, 63,0);
    tracep->declQuad(c+242,"io_message_1", false,-1, 63,0);
    tracep->declQuad(c+244,"io_message_2", false,-1, 63,0);
    tracep->declQuad(c+246,"io_message_3", false,-1, 63,0);
    tracep->declQuad(c+248,"io_message_4", false,-1, 63,0);
    tracep->declQuad(c+250,"io_message_5", false,-1, 63,0);
    tracep->declQuad(c+252,"io_message_6", false,-1, 63,0);
    tracep->declQuad(c+254,"io_message_7", false,-1, 63,0);
    tracep->declQuad(c+256,"io_message_8", false,-1, 63,0);
    tracep->declQuad(c+258,"io_message_9", false,-1, 63,0);
    tracep->declQuad(c+260,"io_message_10", false,-1, 63,0);
    tracep->declQuad(c+262,"io_message_11", false,-1, 63,0);
    tracep->declQuad(c+264,"io_message_12", false,-1, 63,0);
    tracep->declQuad(c+266,"io_message_13", false,-1, 63,0);
    tracep->declQuad(c+268,"io_message_14", false,-1, 63,0);
    tracep->declQuad(c+270,"io_message_15", false,-1, 63,0);
    tracep->declQuad(c+272,"io_message_16", false,-1, 63,0);
    tracep->declQuad(c+1,"io_hash_0", false,-1, 63,0);
    tracep->declQuad(c+3,"io_hash_1", false,-1, 63,0);
    tracep->declQuad(c+5,"io_hash_2", false,-1, 63,0);
    tracep->declQuad(c+7,"io_hash_3", false,-1, 63,0);
    tracep->declQuad(c+1,"dpath_io_state_i_0", false,-1, 63,0);
    tracep->declQuad(c+3,"dpath_io_state_i_1", false,-1, 63,0);
    tracep->declQuad(c+5,"dpath_io_state_i_2", false,-1, 63,0);
    tracep->declQuad(c+7,"dpath_io_state_i_3", false,-1, 63,0);
    tracep->declQuad(c+9,"dpath_io_state_i_4", false,-1, 63,0);
    tracep->declQuad(c+11,"dpath_io_state_i_5", false,-1, 63,0);
    tracep->declQuad(c+13,"dpath_io_state_i_6", false,-1, 63,0);
    tracep->declQuad(c+15,"dpath_io_state_i_7", false,-1, 63,0);
    tracep->declQuad(c+17,"dpath_io_state_i_8", false,-1, 63,0);
    tracep->declQuad(c+19,"dpath_io_state_i_9", false,-1, 63,0);
    tracep->declQuad(c+21,"dpath_io_state_i_10", false,-1, 63,0);
    tracep->declQuad(c+23,"dpath_io_state_i_11", false,-1, 63,0);
    tracep->declQuad(c+25,"dpath_io_state_i_12", false,-1, 63,0);
    tracep->declQuad(c+27,"dpath_io_state_i_13", false,-1, 63,0);
    tracep->declQuad(c+29,"dpath_io_state_i_14", false,-1, 63,0);
    tracep->declQuad(c+31,"dpath_io_state_i_15", false,-1, 63,0);
    tracep->declQuad(c+33,"dpath_io_state_i_16", false,-1, 63,0);
    tracep->declQuad(c+35,"dpath_io_state_i_17", false,-1, 63,0);
    tracep->declQuad(c+37,"dpath_io_state_i_18", false,-1, 63,0);
    tracep->declQuad(c+39,"dpath_io_state_i_19", false,-1, 63,0);
    tracep->declQuad(c+41,"dpath_io_state_i_20", false,-1, 63,0);
    tracep->declQuad(c+43,"dpath_io_state_i_21", false,-1, 63,0);
    tracep->declQuad(c+45,"dpath_io_state_i_22", false,-1, 63,0);
    tracep->declQuad(c+47,"dpath_io_state_i_23", false,-1, 63,0);
    tracep->declQuad(c+49,"dpath_io_state_i_24", false,-1, 63,0);
    tracep->declQuad(c+51,"dpath_io_state_o_0", false,-1, 63,0);
    tracep->declQuad(c+53,"dpath_io_state_o_1", false,-1, 63,0);
    tracep->declQuad(c+55,"dpath_io_state_o_2", false,-1, 63,0);
    tracep->declQuad(c+57,"dpath_io_state_o_3", false,-1, 63,0);
    tracep->declQuad(c+59,"dpath_io_state_o_4", false,-1, 63,0);
    tracep->declQuad(c+61,"dpath_io_state_o_5", false,-1, 63,0);
    tracep->declQuad(c+63,"dpath_io_state_o_6", false,-1, 63,0);
    tracep->declQuad(c+65,"dpath_io_state_o_7", false,-1, 63,0);
    tracep->declQuad(c+67,"dpath_io_state_o_8", false,-1, 63,0);
    tracep->declQuad(c+69,"dpath_io_state_o_9", false,-1, 63,0);
    tracep->declQuad(c+71,"dpath_io_state_o_10", false,-1, 63,0);
    tracep->declQuad(c+73,"dpath_io_state_o_11", false,-1, 63,0);
    tracep->declQuad(c+75,"dpath_io_state_o_12", false,-1, 63,0);
    tracep->declQuad(c+77,"dpath_io_state_o_13", false,-1, 63,0);
    tracep->declQuad(c+79,"dpath_io_state_o_14", false,-1, 63,0);
    tracep->declQuad(c+81,"dpath_io_state_o_15", false,-1, 63,0);
    tracep->declQuad(c+83,"dpath_io_state_o_16", false,-1, 63,0);
    tracep->declQuad(c+85,"dpath_io_state_o_17", false,-1, 63,0);
    tracep->declQuad(c+87,"dpath_io_state_o_18", false,-1, 63,0);
    tracep->declQuad(c+89,"dpath_io_state_o_19", false,-1, 63,0);
    tracep->declQuad(c+91,"dpath_io_state_o_20", false,-1, 63,0);
    tracep->declQuad(c+93,"dpath_io_state_o_21", false,-1, 63,0);
    tracep->declQuad(c+95,"dpath_io_state_o_22", false,-1, 63,0);
    tracep->declQuad(c+97,"dpath_io_state_o_23", false,-1, 63,0);
    tracep->declQuad(c+99,"dpath_io_state_o_24", false,-1, 63,0);
    tracep->declBus(c+101,"dpath_io_round", false,-1, 4,0);
    tracep->declBit(c+102,"encryptReady", false,-1);
    tracep->declBit(c+103,"messageReady", false,-1);
    tracep->declQuad(c+1,"temp_0", false,-1, 63,0);
    tracep->declQuad(c+3,"temp_1", false,-1, 63,0);
    tracep->declQuad(c+5,"temp_2", false,-1, 63,0);
    tracep->declQuad(c+7,"temp_3", false,-1, 63,0);
    tracep->declQuad(c+9,"temp_4", false,-1, 63,0);
    tracep->declQuad(c+11,"temp_5", false,-1, 63,0);
    tracep->declQuad(c+13,"temp_6", false,-1, 63,0);
    tracep->declQuad(c+15,"temp_7", false,-1, 63,0);
    tracep->declQuad(c+17,"temp_8", false,-1, 63,0);
    tracep->declQuad(c+19,"temp_9", false,-1, 63,0);
    tracep->declQuad(c+21,"temp_10", false,-1, 63,0);
    tracep->declQuad(c+23,"temp_11", false,-1, 63,0);
    tracep->declQuad(c+25,"temp_12", false,-1, 63,0);
    tracep->declQuad(c+27,"temp_13", false,-1, 63,0);
    tracep->declQuad(c+29,"temp_14", false,-1, 63,0);
    tracep->declQuad(c+31,"temp_15", false,-1, 63,0);
    tracep->declQuad(c+33,"temp_16", false,-1, 63,0);
    tracep->declQuad(c+35,"temp_17", false,-1, 63,0);
    tracep->declQuad(c+37,"temp_18", false,-1, 63,0);
    tracep->declQuad(c+39,"temp_19", false,-1, 63,0);
    tracep->declQuad(c+41,"temp_20", false,-1, 63,0);
    tracep->declQuad(c+43,"temp_21", false,-1, 63,0);
    tracep->declQuad(c+45,"temp_22", false,-1, 63,0);
    tracep->declQuad(c+47,"temp_23", false,-1, 63,0);
    tracep->declQuad(c+49,"temp_24", false,-1, 63,0);
    tracep->declBus(c+104,"round", false,-1, 4,0);
    tracep->declBit(c+105,"roundsDone", false,-1);
    tracep->pushNamePrefix("dpath ");
    tracep->declQuad(c+1,"io_state_i_0", false,-1, 63,0);
    tracep->declQuad(c+3,"io_state_i_1", false,-1, 63,0);
    tracep->declQuad(c+5,"io_state_i_2", false,-1, 63,0);
    tracep->declQuad(c+7,"io_state_i_3", false,-1, 63,0);
    tracep->declQuad(c+9,"io_state_i_4", false,-1, 63,0);
    tracep->declQuad(c+11,"io_state_i_5", false,-1, 63,0);
    tracep->declQuad(c+13,"io_state_i_6", false,-1, 63,0);
    tracep->declQuad(c+15,"io_state_i_7", false,-1, 63,0);
    tracep->declQuad(c+17,"io_state_i_8", false,-1, 63,0);
    tracep->declQuad(c+19,"io_state_i_9", false,-1, 63,0);
    tracep->declQuad(c+21,"io_state_i_10", false,-1, 63,0);
    tracep->declQuad(c+23,"io_state_i_11", false,-1, 63,0);
    tracep->declQuad(c+25,"io_state_i_12", false,-1, 63,0);
    tracep->declQuad(c+27,"io_state_i_13", false,-1, 63,0);
    tracep->declQuad(c+29,"io_state_i_14", false,-1, 63,0);
    tracep->declQuad(c+31,"io_state_i_15", false,-1, 63,0);
    tracep->declQuad(c+33,"io_state_i_16", false,-1, 63,0);
    tracep->declQuad(c+35,"io_state_i_17", false,-1, 63,0);
    tracep->declQuad(c+37,"io_state_i_18", false,-1, 63,0);
    tracep->declQuad(c+39,"io_state_i_19", false,-1, 63,0);
    tracep->declQuad(c+41,"io_state_i_20", false,-1, 63,0);
    tracep->declQuad(c+43,"io_state_i_21", false,-1, 63,0);
    tracep->declQuad(c+45,"io_state_i_22", false,-1, 63,0);
    tracep->declQuad(c+47,"io_state_i_23", false,-1, 63,0);
    tracep->declQuad(c+49,"io_state_i_24", false,-1, 63,0);
    tracep->declQuad(c+51,"io_state_o_0", false,-1, 63,0);
    tracep->declQuad(c+53,"io_state_o_1", false,-1, 63,0);
    tracep->declQuad(c+55,"io_state_o_2", false,-1, 63,0);
    tracep->declQuad(c+57,"io_state_o_3", false,-1, 63,0);
    tracep->declQuad(c+59,"io_state_o_4", false,-1, 63,0);
    tracep->declQuad(c+61,"io_state_o_5", false,-1, 63,0);
    tracep->declQuad(c+63,"io_state_o_6", false,-1, 63,0);
    tracep->declQuad(c+65,"io_state_o_7", false,-1, 63,0);
    tracep->declQuad(c+67,"io_state_o_8", false,-1, 63,0);
    tracep->declQuad(c+69,"io_state_o_9", false,-1, 63,0);
    tracep->declQuad(c+71,"io_state_o_10", false,-1, 63,0);
    tracep->declQuad(c+73,"io_state_o_11", false,-1, 63,0);
    tracep->declQuad(c+75,"io_state_o_12", false,-1, 63,0);
    tracep->declQuad(c+77,"io_state_o_13", false,-1, 63,0);
    tracep->declQuad(c+79,"io_state_o_14", false,-1, 63,0);
    tracep->declQuad(c+81,"io_state_o_15", false,-1, 63,0);
    tracep->declQuad(c+83,"io_state_o_16", false,-1, 63,0);
    tracep->declQuad(c+85,"io_state_o_17", false,-1, 63,0);
    tracep->declQuad(c+87,"io_state_o_18", false,-1, 63,0);
    tracep->declQuad(c+89,"io_state_o_19", false,-1, 63,0);
    tracep->declQuad(c+91,"io_state_o_20", false,-1, 63,0);
    tracep->declQuad(c+93,"io_state_o_21", false,-1, 63,0);
    tracep->declQuad(c+95,"io_state_o_22", false,-1, 63,0);
    tracep->declQuad(c+97,"io_state_o_23", false,-1, 63,0);
    tracep->declQuad(c+99,"io_state_o_24", false,-1, 63,0);
    tracep->declBus(c+101,"io_round", false,-1, 4,0);
    tracep->declQuad(c+1,"theta_io_state_i_0", false,-1, 63,0);
    tracep->declQuad(c+3,"theta_io_state_i_1", false,-1, 63,0);
    tracep->declQuad(c+5,"theta_io_state_i_2", false,-1, 63,0);
    tracep->declQuad(c+7,"theta_io_state_i_3", false,-1, 63,0);
    tracep->declQuad(c+9,"theta_io_state_i_4", false,-1, 63,0);
    tracep->declQuad(c+11,"theta_io_state_i_5", false,-1, 63,0);
    tracep->declQuad(c+13,"theta_io_state_i_6", false,-1, 63,0);
    tracep->declQuad(c+15,"theta_io_state_i_7", false,-1, 63,0);
    tracep->declQuad(c+17,"theta_io_state_i_8", false,-1, 63,0);
    tracep->declQuad(c+19,"theta_io_state_i_9", false,-1, 63,0);
    tracep->declQuad(c+21,"theta_io_state_i_10", false,-1, 63,0);
    tracep->declQuad(c+23,"theta_io_state_i_11", false,-1, 63,0);
    tracep->declQuad(c+25,"theta_io_state_i_12", false,-1, 63,0);
    tracep->declQuad(c+27,"theta_io_state_i_13", false,-1, 63,0);
    tracep->declQuad(c+29,"theta_io_state_i_14", false,-1, 63,0);
    tracep->declQuad(c+31,"theta_io_state_i_15", false,-1, 63,0);
    tracep->declQuad(c+33,"theta_io_state_i_16", false,-1, 63,0);
    tracep->declQuad(c+35,"theta_io_state_i_17", false,-1, 63,0);
    tracep->declQuad(c+37,"theta_io_state_i_18", false,-1, 63,0);
    tracep->declQuad(c+39,"theta_io_state_i_19", false,-1, 63,0);
    tracep->declQuad(c+41,"theta_io_state_i_20", false,-1, 63,0);
    tracep->declQuad(c+43,"theta_io_state_i_21", false,-1, 63,0);
    tracep->declQuad(c+45,"theta_io_state_i_22", false,-1, 63,0);
    tracep->declQuad(c+47,"theta_io_state_i_23", false,-1, 63,0);
    tracep->declQuad(c+49,"theta_io_state_i_24", false,-1, 63,0);
    tracep->declQuad(c+106,"theta_io_state_o_0", false,-1, 63,0);
    tracep->declQuad(c+108,"theta_io_state_o_1", false,-1, 63,0);
    tracep->declQuad(c+110,"theta_io_state_o_2", false,-1, 63,0);
    tracep->declQuad(c+112,"theta_io_state_o_3", false,-1, 63,0);
    tracep->declQuad(c+114,"theta_io_state_o_4", false,-1, 63,0);
    tracep->declQuad(c+116,"theta_io_state_o_5", false,-1, 63,0);
    tracep->declQuad(c+118,"theta_io_state_o_6", false,-1, 63,0);
    tracep->declQuad(c+120,"theta_io_state_o_7", false,-1, 63,0);
    tracep->declQuad(c+122,"theta_io_state_o_8", false,-1, 63,0);
    tracep->declQuad(c+124,"theta_io_state_o_9", false,-1, 63,0);
    tracep->declQuad(c+126,"theta_io_state_o_10", false,-1, 63,0);
    tracep->declQuad(c+128,"theta_io_state_o_11", false,-1, 63,0);
    tracep->declQuad(c+130,"theta_io_state_o_12", false,-1, 63,0);
    tracep->declQuad(c+132,"theta_io_state_o_13", false,-1, 63,0);
    tracep->declQuad(c+134,"theta_io_state_o_14", false,-1, 63,0);
    tracep->declQuad(c+136,"theta_io_state_o_15", false,-1, 63,0);
    tracep->declQuad(c+138,"theta_io_state_o_16", false,-1, 63,0);
    tracep->declQuad(c+140,"theta_io_state_o_17", false,-1, 63,0);
    tracep->declQuad(c+142,"theta_io_state_o_18", false,-1, 63,0);
    tracep->declQuad(c+144,"theta_io_state_o_19", false,-1, 63,0);
    tracep->declQuad(c+146,"theta_io_state_o_20", false,-1, 63,0);
    tracep->declQuad(c+148,"theta_io_state_o_21", false,-1, 63,0);
    tracep->declQuad(c+150,"theta_io_state_o_22", false,-1, 63,0);
    tracep->declQuad(c+152,"theta_io_state_o_23", false,-1, 63,0);
    tracep->declQuad(c+154,"theta_io_state_o_24", false,-1, 63,0);
    tracep->declQuad(c+106,"rhopi_io_state_i_0", false,-1, 63,0);
    tracep->declQuad(c+108,"rhopi_io_state_i_1", false,-1, 63,0);
    tracep->declQuad(c+110,"rhopi_io_state_i_2", false,-1, 63,0);
    tracep->declQuad(c+112,"rhopi_io_state_i_3", false,-1, 63,0);
    tracep->declQuad(c+114,"rhopi_io_state_i_4", false,-1, 63,0);
    tracep->declQuad(c+116,"rhopi_io_state_i_5", false,-1, 63,0);
    tracep->declQuad(c+118,"rhopi_io_state_i_6", false,-1, 63,0);
    tracep->declQuad(c+120,"rhopi_io_state_i_7", false,-1, 63,0);
    tracep->declQuad(c+122,"rhopi_io_state_i_8", false,-1, 63,0);
    tracep->declQuad(c+124,"rhopi_io_state_i_9", false,-1, 63,0);
    tracep->declQuad(c+126,"rhopi_io_state_i_10", false,-1, 63,0);
    tracep->declQuad(c+128,"rhopi_io_state_i_11", false,-1, 63,0);
    tracep->declQuad(c+130,"rhopi_io_state_i_12", false,-1, 63,0);
    tracep->declQuad(c+132,"rhopi_io_state_i_13", false,-1, 63,0);
    tracep->declQuad(c+134,"rhopi_io_state_i_14", false,-1, 63,0);
    tracep->declQuad(c+136,"rhopi_io_state_i_15", false,-1, 63,0);
    tracep->declQuad(c+138,"rhopi_io_state_i_16", false,-1, 63,0);
    tracep->declQuad(c+140,"rhopi_io_state_i_17", false,-1, 63,0);
    tracep->declQuad(c+142,"rhopi_io_state_i_18", false,-1, 63,0);
    tracep->declQuad(c+144,"rhopi_io_state_i_19", false,-1, 63,0);
    tracep->declQuad(c+146,"rhopi_io_state_i_20", false,-1, 63,0);
    tracep->declQuad(c+148,"rhopi_io_state_i_21", false,-1, 63,0);
    tracep->declQuad(c+150,"rhopi_io_state_i_22", false,-1, 63,0);
    tracep->declQuad(c+152,"rhopi_io_state_i_23", false,-1, 63,0);
    tracep->declQuad(c+154,"rhopi_io_state_i_24", false,-1, 63,0);
    tracep->declQuad(c+106,"rhopi_io_state_o_0", false,-1, 63,0);
    tracep->declQuad(c+156,"rhopi_io_state_o_1", false,-1, 63,0);
    tracep->declQuad(c+158,"rhopi_io_state_o_2", false,-1, 63,0);
    tracep->declQuad(c+160,"rhopi_io_state_o_3", false,-1, 63,0);
    tracep->declQuad(c+162,"rhopi_io_state_o_4", false,-1, 63,0);
    tracep->declQuad(c+164,"rhopi_io_state_o_5", false,-1, 63,0);
    tracep->declQuad(c+166,"rhopi_io_state_o_6", false,-1, 63,0);
    tracep->declQuad(c+168,"rhopi_io_state_o_7", false,-1, 63,0);
    tracep->declQuad(c+170,"rhopi_io_state_o_8", false,-1, 63,0);
    tracep->declQuad(c+172,"rhopi_io_state_o_9", false,-1, 63,0);
    tracep->declQuad(c+174,"rhopi_io_state_o_10", false,-1, 63,0);
    tracep->declQuad(c+176,"rhopi_io_state_o_11", false,-1, 63,0);
    tracep->declQuad(c+178,"rhopi_io_state_o_12", false,-1, 63,0);
    tracep->declQuad(c+180,"rhopi_io_state_o_13", false,-1, 63,0);
    tracep->declQuad(c+182,"rhopi_io_state_o_14", false,-1, 63,0);
    tracep->declQuad(c+184,"rhopi_io_state_o_15", false,-1, 63,0);
    tracep->declQuad(c+186,"rhopi_io_state_o_16", false,-1, 63,0);
    tracep->declQuad(c+188,"rhopi_io_state_o_17", false,-1, 63,0);
    tracep->declQuad(c+190,"rhopi_io_state_o_18", false,-1, 63,0);
    tracep->declQuad(c+192,"rhopi_io_state_o_19", false,-1, 63,0);
    tracep->declQuad(c+194,"rhopi_io_state_o_20", false,-1, 63,0);
    tracep->declQuad(c+196,"rhopi_io_state_o_21", false,-1, 63,0);
    tracep->declQuad(c+198,"rhopi_io_state_o_22", false,-1, 63,0);
    tracep->declQuad(c+200,"rhopi_io_state_o_23", false,-1, 63,0);
    tracep->declQuad(c+202,"rhopi_io_state_o_24", false,-1, 63,0);
    tracep->declQuad(c+106,"chi_io_state_i_0", false,-1, 63,0);
    tracep->declQuad(c+156,"chi_io_state_i_1", false,-1, 63,0);
    tracep->declQuad(c+158,"chi_io_state_i_2", false,-1, 63,0);
    tracep->declQuad(c+160,"chi_io_state_i_3", false,-1, 63,0);
    tracep->declQuad(c+162,"chi_io_state_i_4", false,-1, 63,0);
    tracep->declQuad(c+164,"chi_io_state_i_5", false,-1, 63,0);
    tracep->declQuad(c+166,"chi_io_state_i_6", false,-1, 63,0);
    tracep->declQuad(c+168,"chi_io_state_i_7", false,-1, 63,0);
    tracep->declQuad(c+170,"chi_io_state_i_8", false,-1, 63,0);
    tracep->declQuad(c+172,"chi_io_state_i_9", false,-1, 63,0);
    tracep->declQuad(c+174,"chi_io_state_i_10", false,-1, 63,0);
    tracep->declQuad(c+176,"chi_io_state_i_11", false,-1, 63,0);
    tracep->declQuad(c+178,"chi_io_state_i_12", false,-1, 63,0);
    tracep->declQuad(c+180,"chi_io_state_i_13", false,-1, 63,0);
    tracep->declQuad(c+182,"chi_io_state_i_14", false,-1, 63,0);
    tracep->declQuad(c+184,"chi_io_state_i_15", false,-1, 63,0);
    tracep->declQuad(c+186,"chi_io_state_i_16", false,-1, 63,0);
    tracep->declQuad(c+188,"chi_io_state_i_17", false,-1, 63,0);
    tracep->declQuad(c+190,"chi_io_state_i_18", false,-1, 63,0);
    tracep->declQuad(c+192,"chi_io_state_i_19", false,-1, 63,0);
    tracep->declQuad(c+194,"chi_io_state_i_20", false,-1, 63,0);
    tracep->declQuad(c+196,"chi_io_state_i_21", false,-1, 63,0);
    tracep->declQuad(c+198,"chi_io_state_i_22", false,-1, 63,0);
    tracep->declQuad(c+200,"chi_io_state_i_23", false,-1, 63,0);
    tracep->declQuad(c+202,"chi_io_state_i_24", false,-1, 63,0);
    tracep->declQuad(c+204,"chi_io_state_o_0", false,-1, 63,0);
    tracep->declQuad(c+53,"chi_io_state_o_1", false,-1, 63,0);
    tracep->declQuad(c+55,"chi_io_state_o_2", false,-1, 63,0);
    tracep->declQuad(c+57,"chi_io_state_o_3", false,-1, 63,0);
    tracep->declQuad(c+59,"chi_io_state_o_4", false,-1, 63,0);
    tracep->declQuad(c+61,"chi_io_state_o_5", false,-1, 63,0);
    tracep->declQuad(c+63,"chi_io_state_o_6", false,-1, 63,0);
    tracep->declQuad(c+65,"chi_io_state_o_7", false,-1, 63,0);
    tracep->declQuad(c+67,"chi_io_state_o_8", false,-1, 63,0);
    tracep->declQuad(c+69,"chi_io_state_o_9", false,-1, 63,0);
    tracep->declQuad(c+71,"chi_io_state_o_10", false,-1, 63,0);
    tracep->declQuad(c+73,"chi_io_state_o_11", false,-1, 63,0);
    tracep->declQuad(c+75,"chi_io_state_o_12", false,-1, 63,0);
    tracep->declQuad(c+77,"chi_io_state_o_13", false,-1, 63,0);
    tracep->declQuad(c+79,"chi_io_state_o_14", false,-1, 63,0);
    tracep->declQuad(c+81,"chi_io_state_o_15", false,-1, 63,0);
    tracep->declQuad(c+83,"chi_io_state_o_16", false,-1, 63,0);
    tracep->declQuad(c+85,"chi_io_state_o_17", false,-1, 63,0);
    tracep->declQuad(c+87,"chi_io_state_o_18", false,-1, 63,0);
    tracep->declQuad(c+89,"chi_io_state_o_19", false,-1, 63,0);
    tracep->declQuad(c+91,"chi_io_state_o_20", false,-1, 63,0);
    tracep->declQuad(c+93,"chi_io_state_o_21", false,-1, 63,0);
    tracep->declQuad(c+95,"chi_io_state_o_22", false,-1, 63,0);
    tracep->declQuad(c+97,"chi_io_state_o_23", false,-1, 63,0);
    tracep->declQuad(c+99,"chi_io_state_o_24", false,-1, 63,0);
    tracep->declQuad(c+204,"iota_io_state_i_0", false,-1, 63,0);
    tracep->declQuad(c+53,"iota_io_state_i_1", false,-1, 63,0);
    tracep->declQuad(c+55,"iota_io_state_i_2", false,-1, 63,0);
    tracep->declQuad(c+57,"iota_io_state_i_3", false,-1, 63,0);
    tracep->declQuad(c+59,"iota_io_state_i_4", false,-1, 63,0);
    tracep->declQuad(c+61,"iota_io_state_i_5", false,-1, 63,0);
    tracep->declQuad(c+63,"iota_io_state_i_6", false,-1, 63,0);
    tracep->declQuad(c+65,"iota_io_state_i_7", false,-1, 63,0);
    tracep->declQuad(c+67,"iota_io_state_i_8", false,-1, 63,0);
    tracep->declQuad(c+69,"iota_io_state_i_9", false,-1, 63,0);
    tracep->declQuad(c+71,"iota_io_state_i_10", false,-1, 63,0);
    tracep->declQuad(c+73,"iota_io_state_i_11", false,-1, 63,0);
    tracep->declQuad(c+75,"iota_io_state_i_12", false,-1, 63,0);
    tracep->declQuad(c+77,"iota_io_state_i_13", false,-1, 63,0);
    tracep->declQuad(c+79,"iota_io_state_i_14", false,-1, 63,0);
    tracep->declQuad(c+81,"iota_io_state_i_15", false,-1, 63,0);
    tracep->declQuad(c+83,"iota_io_state_i_16", false,-1, 63,0);
    tracep->declQuad(c+85,"iota_io_state_i_17", false,-1, 63,0);
    tracep->declQuad(c+87,"iota_io_state_i_18", false,-1, 63,0);
    tracep->declQuad(c+89,"iota_io_state_i_19", false,-1, 63,0);
    tracep->declQuad(c+91,"iota_io_state_i_20", false,-1, 63,0);
    tracep->declQuad(c+93,"iota_io_state_i_21", false,-1, 63,0);
    tracep->declQuad(c+95,"iota_io_state_i_22", false,-1, 63,0);
    tracep->declQuad(c+97,"iota_io_state_i_23", false,-1, 63,0);
    tracep->declQuad(c+99,"iota_io_state_i_24", false,-1, 63,0);
    tracep->declQuad(c+51,"iota_io_state_o_0", false,-1, 63,0);
    tracep->declQuad(c+53,"iota_io_state_o_1", false,-1, 63,0);
    tracep->declQuad(c+55,"iota_io_state_o_2", false,-1, 63,0);
    tracep->declQuad(c+57,"iota_io_state_o_3", false,-1, 63,0);
    tracep->declQuad(c+59,"iota_io_state_o_4", false,-1, 63,0);
    tracep->declQuad(c+61,"iota_io_state_o_5", false,-1, 63,0);
    tracep->declQuad(c+63,"iota_io_state_o_6", false,-1, 63,0);
    tracep->declQuad(c+65,"iota_io_state_o_7", false,-1, 63,0);
    tracep->declQuad(c+67,"iota_io_state_o_8", false,-1, 63,0);
    tracep->declQuad(c+69,"iota_io_state_o_9", false,-1, 63,0);
    tracep->declQuad(c+71,"iota_io_state_o_10", false,-1, 63,0);
    tracep->declQuad(c+73,"iota_io_state_o_11", false,-1, 63,0);
    tracep->declQuad(c+75,"iota_io_state_o_12", false,-1, 63,0);
    tracep->declQuad(c+77,"iota_io_state_o_13", false,-1, 63,0);
    tracep->declQuad(c+79,"iota_io_state_o_14", false,-1, 63,0);
    tracep->declQuad(c+81,"iota_io_state_o_15", false,-1, 63,0);
    tracep->declQuad(c+83,"iota_io_state_o_16", false,-1, 63,0);
    tracep->declQuad(c+85,"iota_io_state_o_17", false,-1, 63,0);
    tracep->declQuad(c+87,"iota_io_state_o_18", false,-1, 63,0);
    tracep->declQuad(c+89,"iota_io_state_o_19", false,-1, 63,0);
    tracep->declQuad(c+91,"iota_io_state_o_20", false,-1, 63,0);
    tracep->declQuad(c+93,"iota_io_state_o_21", false,-1, 63,0);
    tracep->declQuad(c+95,"iota_io_state_o_22", false,-1, 63,0);
    tracep->declQuad(c+97,"iota_io_state_o_23", false,-1, 63,0);
    tracep->declQuad(c+99,"iota_io_state_o_24", false,-1, 63,0);
    tracep->declBus(c+101,"iota_io_round", false,-1, 4,0);
    tracep->pushNamePrefix("chi ");
    tracep->declQuad(c+106,"io_state_i_0", false,-1, 63,0);
    tracep->declQuad(c+156,"io_state_i_1", false,-1, 63,0);
    tracep->declQuad(c+158,"io_state_i_2", false,-1, 63,0);
    tracep->declQuad(c+160,"io_state_i_3", false,-1, 63,0);
    tracep->declQuad(c+162,"io_state_i_4", false,-1, 63,0);
    tracep->declQuad(c+164,"io_state_i_5", false,-1, 63,0);
    tracep->declQuad(c+166,"io_state_i_6", false,-1, 63,0);
    tracep->declQuad(c+168,"io_state_i_7", false,-1, 63,0);
    tracep->declQuad(c+170,"io_state_i_8", false,-1, 63,0);
    tracep->declQuad(c+172,"io_state_i_9", false,-1, 63,0);
    tracep->declQuad(c+174,"io_state_i_10", false,-1, 63,0);
    tracep->declQuad(c+176,"io_state_i_11", false,-1, 63,0);
    tracep->declQuad(c+178,"io_state_i_12", false,-1, 63,0);
    tracep->declQuad(c+180,"io_state_i_13", false,-1, 63,0);
    tracep->declQuad(c+182,"io_state_i_14", false,-1, 63,0);
    tracep->declQuad(c+184,"io_state_i_15", false,-1, 63,0);
    tracep->declQuad(c+186,"io_state_i_16", false,-1, 63,0);
    tracep->declQuad(c+188,"io_state_i_17", false,-1, 63,0);
    tracep->declQuad(c+190,"io_state_i_18", false,-1, 63,0);
    tracep->declQuad(c+192,"io_state_i_19", false,-1, 63,0);
    tracep->declQuad(c+194,"io_state_i_20", false,-1, 63,0);
    tracep->declQuad(c+196,"io_state_i_21", false,-1, 63,0);
    tracep->declQuad(c+198,"io_state_i_22", false,-1, 63,0);
    tracep->declQuad(c+200,"io_state_i_23", false,-1, 63,0);
    tracep->declQuad(c+202,"io_state_i_24", false,-1, 63,0);
    tracep->declQuad(c+204,"io_state_o_0", false,-1, 63,0);
    tracep->declQuad(c+53,"io_state_o_1", false,-1, 63,0);
    tracep->declQuad(c+55,"io_state_o_2", false,-1, 63,0);
    tracep->declQuad(c+57,"io_state_o_3", false,-1, 63,0);
    tracep->declQuad(c+59,"io_state_o_4", false,-1, 63,0);
    tracep->declQuad(c+61,"io_state_o_5", false,-1, 63,0);
    tracep->declQuad(c+63,"io_state_o_6", false,-1, 63,0);
    tracep->declQuad(c+65,"io_state_o_7", false,-1, 63,0);
    tracep->declQuad(c+67,"io_state_o_8", false,-1, 63,0);
    tracep->declQuad(c+69,"io_state_o_9", false,-1, 63,0);
    tracep->declQuad(c+71,"io_state_o_10", false,-1, 63,0);
    tracep->declQuad(c+73,"io_state_o_11", false,-1, 63,0);
    tracep->declQuad(c+75,"io_state_o_12", false,-1, 63,0);
    tracep->declQuad(c+77,"io_state_o_13", false,-1, 63,0);
    tracep->declQuad(c+79,"io_state_o_14", false,-1, 63,0);
    tracep->declQuad(c+81,"io_state_o_15", false,-1, 63,0);
    tracep->declQuad(c+83,"io_state_o_16", false,-1, 63,0);
    tracep->declQuad(c+85,"io_state_o_17", false,-1, 63,0);
    tracep->declQuad(c+87,"io_state_o_18", false,-1, 63,0);
    tracep->declQuad(c+89,"io_state_o_19", false,-1, 63,0);
    tracep->declQuad(c+91,"io_state_o_20", false,-1, 63,0);
    tracep->declQuad(c+93,"io_state_o_21", false,-1, 63,0);
    tracep->declQuad(c+95,"io_state_o_22", false,-1, 63,0);
    tracep->declQuad(c+97,"io_state_o_23", false,-1, 63,0);
    tracep->declQuad(c+99,"io_state_o_24", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("iota ");
    tracep->declQuad(c+204,"io_state_i_0", false,-1, 63,0);
    tracep->declQuad(c+53,"io_state_i_1", false,-1, 63,0);
    tracep->declQuad(c+55,"io_state_i_2", false,-1, 63,0);
    tracep->declQuad(c+57,"io_state_i_3", false,-1, 63,0);
    tracep->declQuad(c+59,"io_state_i_4", false,-1, 63,0);
    tracep->declQuad(c+61,"io_state_i_5", false,-1, 63,0);
    tracep->declQuad(c+63,"io_state_i_6", false,-1, 63,0);
    tracep->declQuad(c+65,"io_state_i_7", false,-1, 63,0);
    tracep->declQuad(c+67,"io_state_i_8", false,-1, 63,0);
    tracep->declQuad(c+69,"io_state_i_9", false,-1, 63,0);
    tracep->declQuad(c+71,"io_state_i_10", false,-1, 63,0);
    tracep->declQuad(c+73,"io_state_i_11", false,-1, 63,0);
    tracep->declQuad(c+75,"io_state_i_12", false,-1, 63,0);
    tracep->declQuad(c+77,"io_state_i_13", false,-1, 63,0);
    tracep->declQuad(c+79,"io_state_i_14", false,-1, 63,0);
    tracep->declQuad(c+81,"io_state_i_15", false,-1, 63,0);
    tracep->declQuad(c+83,"io_state_i_16", false,-1, 63,0);
    tracep->declQuad(c+85,"io_state_i_17", false,-1, 63,0);
    tracep->declQuad(c+87,"io_state_i_18", false,-1, 63,0);
    tracep->declQuad(c+89,"io_state_i_19", false,-1, 63,0);
    tracep->declQuad(c+91,"io_state_i_20", false,-1, 63,0);
    tracep->declQuad(c+93,"io_state_i_21", false,-1, 63,0);
    tracep->declQuad(c+95,"io_state_i_22", false,-1, 63,0);
    tracep->declQuad(c+97,"io_state_i_23", false,-1, 63,0);
    tracep->declQuad(c+99,"io_state_i_24", false,-1, 63,0);
    tracep->declQuad(c+51,"io_state_o_0", false,-1, 63,0);
    tracep->declQuad(c+53,"io_state_o_1", false,-1, 63,0);
    tracep->declQuad(c+55,"io_state_o_2", false,-1, 63,0);
    tracep->declQuad(c+57,"io_state_o_3", false,-1, 63,0);
    tracep->declQuad(c+59,"io_state_o_4", false,-1, 63,0);
    tracep->declQuad(c+61,"io_state_o_5", false,-1, 63,0);
    tracep->declQuad(c+63,"io_state_o_6", false,-1, 63,0);
    tracep->declQuad(c+65,"io_state_o_7", false,-1, 63,0);
    tracep->declQuad(c+67,"io_state_o_8", false,-1, 63,0);
    tracep->declQuad(c+69,"io_state_o_9", false,-1, 63,0);
    tracep->declQuad(c+71,"io_state_o_10", false,-1, 63,0);
    tracep->declQuad(c+73,"io_state_o_11", false,-1, 63,0);
    tracep->declQuad(c+75,"io_state_o_12", false,-1, 63,0);
    tracep->declQuad(c+77,"io_state_o_13", false,-1, 63,0);
    tracep->declQuad(c+79,"io_state_o_14", false,-1, 63,0);
    tracep->declQuad(c+81,"io_state_o_15", false,-1, 63,0);
    tracep->declQuad(c+83,"io_state_o_16", false,-1, 63,0);
    tracep->declQuad(c+85,"io_state_o_17", false,-1, 63,0);
    tracep->declQuad(c+87,"io_state_o_18", false,-1, 63,0);
    tracep->declQuad(c+89,"io_state_o_19", false,-1, 63,0);
    tracep->declQuad(c+91,"io_state_o_20", false,-1, 63,0);
    tracep->declQuad(c+93,"io_state_o_21", false,-1, 63,0);
    tracep->declQuad(c+95,"io_state_o_22", false,-1, 63,0);
    tracep->declQuad(c+97,"io_state_o_23", false,-1, 63,0);
    tracep->declQuad(c+99,"io_state_o_24", false,-1, 63,0);
    tracep->declBus(c+101,"io_round", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rhopi ");
    tracep->declQuad(c+106,"io_state_i_0", false,-1, 63,0);
    tracep->declQuad(c+108,"io_state_i_1", false,-1, 63,0);
    tracep->declQuad(c+110,"io_state_i_2", false,-1, 63,0);
    tracep->declQuad(c+112,"io_state_i_3", false,-1, 63,0);
    tracep->declQuad(c+114,"io_state_i_4", false,-1, 63,0);
    tracep->declQuad(c+116,"io_state_i_5", false,-1, 63,0);
    tracep->declQuad(c+118,"io_state_i_6", false,-1, 63,0);
    tracep->declQuad(c+120,"io_state_i_7", false,-1, 63,0);
    tracep->declQuad(c+122,"io_state_i_8", false,-1, 63,0);
    tracep->declQuad(c+124,"io_state_i_9", false,-1, 63,0);
    tracep->declQuad(c+126,"io_state_i_10", false,-1, 63,0);
    tracep->declQuad(c+128,"io_state_i_11", false,-1, 63,0);
    tracep->declQuad(c+130,"io_state_i_12", false,-1, 63,0);
    tracep->declQuad(c+132,"io_state_i_13", false,-1, 63,0);
    tracep->declQuad(c+134,"io_state_i_14", false,-1, 63,0);
    tracep->declQuad(c+136,"io_state_i_15", false,-1, 63,0);
    tracep->declQuad(c+138,"io_state_i_16", false,-1, 63,0);
    tracep->declQuad(c+140,"io_state_i_17", false,-1, 63,0);
    tracep->declQuad(c+142,"io_state_i_18", false,-1, 63,0);
    tracep->declQuad(c+144,"io_state_i_19", false,-1, 63,0);
    tracep->declQuad(c+146,"io_state_i_20", false,-1, 63,0);
    tracep->declQuad(c+148,"io_state_i_21", false,-1, 63,0);
    tracep->declQuad(c+150,"io_state_i_22", false,-1, 63,0);
    tracep->declQuad(c+152,"io_state_i_23", false,-1, 63,0);
    tracep->declQuad(c+154,"io_state_i_24", false,-1, 63,0);
    tracep->declQuad(c+106,"io_state_o_0", false,-1, 63,0);
    tracep->declQuad(c+156,"io_state_o_1", false,-1, 63,0);
    tracep->declQuad(c+158,"io_state_o_2", false,-1, 63,0);
    tracep->declQuad(c+160,"io_state_o_3", false,-1, 63,0);
    tracep->declQuad(c+162,"io_state_o_4", false,-1, 63,0);
    tracep->declQuad(c+164,"io_state_o_5", false,-1, 63,0);
    tracep->declQuad(c+166,"io_state_o_6", false,-1, 63,0);
    tracep->declQuad(c+168,"io_state_o_7", false,-1, 63,0);
    tracep->declQuad(c+170,"io_state_o_8", false,-1, 63,0);
    tracep->declQuad(c+172,"io_state_o_9", false,-1, 63,0);
    tracep->declQuad(c+174,"io_state_o_10", false,-1, 63,0);
    tracep->declQuad(c+176,"io_state_o_11", false,-1, 63,0);
    tracep->declQuad(c+178,"io_state_o_12", false,-1, 63,0);
    tracep->declQuad(c+180,"io_state_o_13", false,-1, 63,0);
    tracep->declQuad(c+182,"io_state_o_14", false,-1, 63,0);
    tracep->declQuad(c+184,"io_state_o_15", false,-1, 63,0);
    tracep->declQuad(c+186,"io_state_o_16", false,-1, 63,0);
    tracep->declQuad(c+188,"io_state_o_17", false,-1, 63,0);
    tracep->declQuad(c+190,"io_state_o_18", false,-1, 63,0);
    tracep->declQuad(c+192,"io_state_o_19", false,-1, 63,0);
    tracep->declQuad(c+194,"io_state_o_20", false,-1, 63,0);
    tracep->declQuad(c+196,"io_state_o_21", false,-1, 63,0);
    tracep->declQuad(c+198,"io_state_o_22", false,-1, 63,0);
    tracep->declQuad(c+200,"io_state_o_23", false,-1, 63,0);
    tracep->declQuad(c+202,"io_state_o_24", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("theta ");
    tracep->declQuad(c+1,"io_state_i_0", false,-1, 63,0);
    tracep->declQuad(c+3,"io_state_i_1", false,-1, 63,0);
    tracep->declQuad(c+5,"io_state_i_2", false,-1, 63,0);
    tracep->declQuad(c+7,"io_state_i_3", false,-1, 63,0);
    tracep->declQuad(c+9,"io_state_i_4", false,-1, 63,0);
    tracep->declQuad(c+11,"io_state_i_5", false,-1, 63,0);
    tracep->declQuad(c+13,"io_state_i_6", false,-1, 63,0);
    tracep->declQuad(c+15,"io_state_i_7", false,-1, 63,0);
    tracep->declQuad(c+17,"io_state_i_8", false,-1, 63,0);
    tracep->declQuad(c+19,"io_state_i_9", false,-1, 63,0);
    tracep->declQuad(c+21,"io_state_i_10", false,-1, 63,0);
    tracep->declQuad(c+23,"io_state_i_11", false,-1, 63,0);
    tracep->declQuad(c+25,"io_state_i_12", false,-1, 63,0);
    tracep->declQuad(c+27,"io_state_i_13", false,-1, 63,0);
    tracep->declQuad(c+29,"io_state_i_14", false,-1, 63,0);
    tracep->declQuad(c+31,"io_state_i_15", false,-1, 63,0);
    tracep->declQuad(c+33,"io_state_i_16", false,-1, 63,0);
    tracep->declQuad(c+35,"io_state_i_17", false,-1, 63,0);
    tracep->declQuad(c+37,"io_state_i_18", false,-1, 63,0);
    tracep->declQuad(c+39,"io_state_i_19", false,-1, 63,0);
    tracep->declQuad(c+41,"io_state_i_20", false,-1, 63,0);
    tracep->declQuad(c+43,"io_state_i_21", false,-1, 63,0);
    tracep->declQuad(c+45,"io_state_i_22", false,-1, 63,0);
    tracep->declQuad(c+47,"io_state_i_23", false,-1, 63,0);
    tracep->declQuad(c+49,"io_state_i_24", false,-1, 63,0);
    tracep->declQuad(c+106,"io_state_o_0", false,-1, 63,0);
    tracep->declQuad(c+108,"io_state_o_1", false,-1, 63,0);
    tracep->declQuad(c+110,"io_state_o_2", false,-1, 63,0);
    tracep->declQuad(c+112,"io_state_o_3", false,-1, 63,0);
    tracep->declQuad(c+114,"io_state_o_4", false,-1, 63,0);
    tracep->declQuad(c+116,"io_state_o_5", false,-1, 63,0);
    tracep->declQuad(c+118,"io_state_o_6", false,-1, 63,0);
    tracep->declQuad(c+120,"io_state_o_7", false,-1, 63,0);
    tracep->declQuad(c+122,"io_state_o_8", false,-1, 63,0);
    tracep->declQuad(c+124,"io_state_o_9", false,-1, 63,0);
    tracep->declQuad(c+126,"io_state_o_10", false,-1, 63,0);
    tracep->declQuad(c+128,"io_state_o_11", false,-1, 63,0);
    tracep->declQuad(c+130,"io_state_o_12", false,-1, 63,0);
    tracep->declQuad(c+132,"io_state_o_13", false,-1, 63,0);
    tracep->declQuad(c+134,"io_state_o_14", false,-1, 63,0);
    tracep->declQuad(c+136,"io_state_o_15", false,-1, 63,0);
    tracep->declQuad(c+138,"io_state_o_16", false,-1, 63,0);
    tracep->declQuad(c+140,"io_state_o_17", false,-1, 63,0);
    tracep->declQuad(c+142,"io_state_o_18", false,-1, 63,0);
    tracep->declQuad(c+144,"io_state_o_19", false,-1, 63,0);
    tracep->declQuad(c+146,"io_state_o_20", false,-1, 63,0);
    tracep->declQuad(c+148,"io_state_o_21", false,-1, 63,0);
    tracep->declQuad(c+150,"io_state_o_22", false,-1, 63,0);
    tracep->declQuad(c+152,"io_state_o_23", false,-1, 63,0);
    tracep->declQuad(c+154,"io_state_o_24", false,-1, 63,0);
    tracep->declQuad(c+206,"bc_0", false,-1, 63,0);
    tracep->declQuad(c+208,"bc_1", false,-1, 63,0);
    tracep->declQuad(c+210,"bc_2", false,-1, 63,0);
    tracep->declQuad(c+212,"bc_3", false,-1, 63,0);
    tracep->declQuad(c+214,"bc_4", false,-1, 63,0);
    tracep->declQuad(c+216,"ROTL", false,-1, 63,0);
    tracep->declQuad(c+218,"tmp", false,-1, 63,0);
    tracep->declQuad(c+220,"ROTL_1", false,-1, 63,0);
    tracep->declQuad(c+222,"tmp_1", false,-1, 63,0);
    tracep->declQuad(c+224,"ROTL_2", false,-1, 63,0);
    tracep->declQuad(c+226,"tmp_2", false,-1, 63,0);
    tracep->declQuad(c+228,"ROTL_3", false,-1, 63,0);
    tracep->declQuad(c+230,"tmp_3", false,-1, 63,0);
    tracep->declQuad(c+232,"ROTL_4", false,-1, 63,0);
    tracep->declQuad(c+234,"tmp_4", false,-1, 63,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VSha3Accel___024root__trace_init_top(VSha3Accel___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSha3Accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSha3Accel___024root__trace_init_top\n"); );
    // Body
    VSha3Accel___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSha3Accel___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSha3Accel___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSha3Accel___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSha3Accel___024root__trace_register(VSha3Accel___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSha3Accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSha3Accel___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSha3Accel___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSha3Accel___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSha3Accel___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSha3Accel___024root__trace_full_sub_0(VSha3Accel___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSha3Accel___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSha3Accel___024root__trace_full_top_0\n"); );
    // Init
    VSha3Accel___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSha3Accel___024root*>(voidSelf);
    VSha3Accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSha3Accel___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSha3Accel___024root__trace_full_sub_0(VSha3Accel___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSha3Accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSha3Accel___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_hb1ac96fb__0;
    VlWide<3>/*95:0*/ __Vtemp_hf269d6c7__0;
    VlWide<3>/*95:0*/ __Vtemp_h7b6161fe__0;
    VlWide<3>/*95:0*/ __Vtemp_h63f35153__0;
    VlWide<3>/*95:0*/ __Vtemp_ha2ad4748__0;
    // Body
    bufp->fullQData(oldp+1,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_0),64);
    bufp->fullQData(oldp+3,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_1),64);
    bufp->fullQData(oldp+5,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_2),64);
    bufp->fullQData(oldp+7,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_3),64);
    bufp->fullQData(oldp+9,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_4),64);
    bufp->fullQData(oldp+11,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_5),64);
    bufp->fullQData(oldp+13,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_6),64);
    bufp->fullQData(oldp+15,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_7),64);
    bufp->fullQData(oldp+17,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_8),64);
    bufp->fullQData(oldp+19,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_9),64);
    bufp->fullQData(oldp+21,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_10),64);
    bufp->fullQData(oldp+23,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_11),64);
    bufp->fullQData(oldp+25,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_12),64);
    bufp->fullQData(oldp+27,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_13),64);
    bufp->fullQData(oldp+29,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_14),64);
    bufp->fullQData(oldp+31,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_15),64);
    bufp->fullQData(oldp+33,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_16),64);
    bufp->fullQData(oldp+35,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_17),64);
    bufp->fullQData(oldp+37,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_18),64);
    bufp->fullQData(oldp+39,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_19),64);
    bufp->fullQData(oldp+41,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_20),64);
    bufp->fullQData(oldp+43,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_21),64);
    bufp->fullQData(oldp+45,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_22),64);
    bufp->fullQData(oldp+47,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_23),64);
    bufp->fullQData(oldp+49,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_24),64);
    bufp->fullQData(oldp+51,(((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta_io_state_o_0 
                               ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_1) 
                                  & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_2)) 
                              ^ ((0x17U == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
                                  ? 0x8000000080008008ULL
                                  : ((0x16U == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
                                      ? 0x80000001ULL
                                      : ((0x15U == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
                                          ? 0x8000000000008080ULL
                                          : vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__iota__DOT___GEN_20))))),64);
    bufp->fullQData(oldp+53,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_1 
                              ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_2) 
                                 & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_3))),64);
    bufp->fullQData(oldp+55,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_2 
                              ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_3) 
                                 & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_4))),64);
    bufp->fullQData(oldp+57,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_3 
                              ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_4) 
                                 & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta_io_state_o_0))),64);
    bufp->fullQData(oldp+59,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_4 
                              ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta_io_state_o_0) 
                                 & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_1))),64);
    bufp->fullQData(oldp+61,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_5 
                              ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_6) 
                                 & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_7))),64);
    bufp->fullQData(oldp+63,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_6 
                              ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_7) 
                                 & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_8))),64);
    bufp->fullQData(oldp+65,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_7 
                              ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_8) 
                                 & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_9))),64);
    bufp->fullQData(oldp+67,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_8 
                              ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_9) 
                                 & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_5))),64);
    bufp->fullQData(oldp+69,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_9 
                              ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_5) 
                                 & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_6))),64);
    bufp->fullQData(oldp+71,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_10 
                              ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_11) 
                                 & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_12))),64);
    bufp->fullQData(oldp+73,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_11 
                              ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_12) 
                                 & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_13))),64);
    bufp->fullQData(oldp+75,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_12 
                              ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_13) 
                                 & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_14))),64);
    bufp->fullQData(oldp+77,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_13 
                              ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_14) 
                                 & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_10))),64);
    bufp->fullQData(oldp+79,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_14 
                              ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_10) 
                                 & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_11))),64);
    bufp->fullQData(oldp+81,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_15 
                              ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_16) 
                                 & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_17))),64);
    bufp->fullQData(oldp+83,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_16 
                              ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_17) 
                                 & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_18))),64);
    bufp->fullQData(oldp+85,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_17 
                              ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_18) 
                                 & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_19))),64);
    bufp->fullQData(oldp+87,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_18 
                              ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_19) 
                                 & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_15))),64);
    bufp->fullQData(oldp+89,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_19 
                              ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_15) 
                                 & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_16))),64);
    bufp->fullQData(oldp+91,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_20 
                              ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_21) 
                                 & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_22))),64);
    bufp->fullQData(oldp+93,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_21 
                              ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_22) 
                                 & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_23))),64);
    bufp->fullQData(oldp+95,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_22 
                              ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_23) 
                                 & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_24))),64);
    bufp->fullQData(oldp+97,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_23 
                              ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_24) 
                                 & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_20))),64);
    bufp->fullQData(oldp+99,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_24 
                              ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_20) 
                                 & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_21))),64);
    bufp->fullCData(oldp+101,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round),5);
    bufp->fullBit(oldp+102,(vlSelf->Sha3Accel__DOT__ctrl__DOT__encryptReady));
    bufp->fullBit(oldp+103,(vlSelf->Sha3Accel__DOT__ctrl__DOT__messageReady));
    bufp->fullCData(oldp+104,(vlSelf->Sha3Accel__DOT__ctrl__DOT__round),5);
    bufp->fullBit(oldp+105,(vlSelf->Sha3Accel__DOT__ctrl__DOT__roundsDone));
    bufp->fullQData(oldp+106,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta_io_state_o_0),64);
    bufp->fullQData(oldp+108,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_1 
                               ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_1)),64);
    bufp->fullQData(oldp+110,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_2 
                               ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_2)),64);
    bufp->fullQData(oldp+112,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_3 
                               ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_3)),64);
    bufp->fullQData(oldp+114,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_4 
                               ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_4)),64);
    bufp->fullQData(oldp+116,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_5 
                               ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp)),64);
    bufp->fullQData(oldp+118,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_6 
                               ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_1)),64);
    bufp->fullQData(oldp+120,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_7 
                               ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_2)),64);
    bufp->fullQData(oldp+122,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_8 
                               ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_3)),64);
    bufp->fullQData(oldp+124,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_9 
                               ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_4)),64);
    bufp->fullQData(oldp+126,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_10 
                               ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp)),64);
    bufp->fullQData(oldp+128,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_11 
                               ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_1)),64);
    bufp->fullQData(oldp+130,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_12 
                               ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_2)),64);
    bufp->fullQData(oldp+132,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_13 
                               ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_3)),64);
    bufp->fullQData(oldp+134,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_14 
                               ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_4)),64);
    bufp->fullQData(oldp+136,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_15 
                               ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp)),64);
    bufp->fullQData(oldp+138,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_16 
                               ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_1)),64);
    bufp->fullQData(oldp+140,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_17 
                               ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_2)),64);
    bufp->fullQData(oldp+142,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_18 
                               ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_3)),64);
    bufp->fullQData(oldp+144,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_19 
                               ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_4)),64);
    bufp->fullQData(oldp+146,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_20 
                               ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp)),64);
    bufp->fullQData(oldp+148,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_21 
                               ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_1)),64);
    bufp->fullQData(oldp+150,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_22 
                               ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_2)),64);
    bufp->fullQData(oldp+152,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_23 
                               ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_3)),64);
    bufp->fullQData(oldp+154,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_24 
                               ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_4)),64);
    bufp->fullQData(oldp+156,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_1),64);
    bufp->fullQData(oldp+158,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_2),64);
    bufp->fullQData(oldp+160,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_3),64);
    bufp->fullQData(oldp+162,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_4),64);
    bufp->fullQData(oldp+164,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_5),64);
    bufp->fullQData(oldp+166,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_6),64);
    bufp->fullQData(oldp+168,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_7),64);
    bufp->fullQData(oldp+170,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_8),64);
    bufp->fullQData(oldp+172,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_9),64);
    bufp->fullQData(oldp+174,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_10),64);
    bufp->fullQData(oldp+176,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_11),64);
    bufp->fullQData(oldp+178,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_12),64);
    bufp->fullQData(oldp+180,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_13),64);
    bufp->fullQData(oldp+182,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_14),64);
    bufp->fullQData(oldp+184,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_15),64);
    bufp->fullQData(oldp+186,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_16),64);
    bufp->fullQData(oldp+188,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_17),64);
    bufp->fullQData(oldp+190,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_18),64);
    bufp->fullQData(oldp+192,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_19),64);
    bufp->fullQData(oldp+194,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_20),64);
    bufp->fullQData(oldp+196,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_21),64);
    bufp->fullQData(oldp+198,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_22),64);
    bufp->fullQData(oldp+200,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_23),64);
    bufp->fullQData(oldp+202,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_24),64);
    bufp->fullQData(oldp+204,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta_io_state_o_0 
                               ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_1) 
                                  & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_2))),64);
    bufp->fullQData(oldp+206,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_0),64);
    bufp->fullQData(oldp+208,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_1),64);
    bufp->fullQData(oldp+210,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_2),64);
    bufp->fullQData(oldp+212,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_3),64);
    bufp->fullQData(oldp+214,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_4),64);
    VL_EXTEND_WI(65,1, __Vtemp_hb1ac96fb__0, (1U & (IData)(
                                                           (vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_1 
                                                            >> 0x3fU))));
    bufp->fullQData(oldp+216,(((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_1 
                                << 1U) | (((QData)((IData)(
                                                           __Vtemp_hb1ac96fb__0[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            __Vtemp_hb1ac96fb__0[0U]))))),64);
    bufp->fullQData(oldp+218,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp),64);
    VL_EXTEND_WI(65,1, __Vtemp_hf269d6c7__0, (1U & (IData)(
                                                           (vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_2 
                                                            >> 0x3fU))));
    bufp->fullQData(oldp+220,(((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_2 
                                << 1U) | (((QData)((IData)(
                                                           __Vtemp_hf269d6c7__0[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            __Vtemp_hf269d6c7__0[0U]))))),64);
    bufp->fullQData(oldp+222,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_1),64);
    VL_EXTEND_WI(65,1, __Vtemp_h7b6161fe__0, (1U & (IData)(
                                                           (vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_3 
                                                            >> 0x3fU))));
    bufp->fullQData(oldp+224,(((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_3 
                                << 1U) | (((QData)((IData)(
                                                           __Vtemp_h7b6161fe__0[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            __Vtemp_h7b6161fe__0[0U]))))),64);
    bufp->fullQData(oldp+226,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_2),64);
    VL_EXTEND_WI(65,1, __Vtemp_h63f35153__0, (1U & (IData)(
                                                           (vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_4 
                                                            >> 0x3fU))));
    bufp->fullQData(oldp+228,(((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_4 
                                << 1U) | (((QData)((IData)(
                                                           __Vtemp_h63f35153__0[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            __Vtemp_h63f35153__0[0U]))))),64);
    bufp->fullQData(oldp+230,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_3),64);
    VL_EXTEND_WI(65,1, __Vtemp_ha2ad4748__0, (1U & (IData)(
                                                           (vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_0 
                                                            >> 0x3fU))));
    bufp->fullQData(oldp+232,(((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_0 
                                << 1U) | (((QData)((IData)(
                                                           __Vtemp_ha2ad4748__0[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            __Vtemp_ha2ad4748__0[0U]))))),64);
    bufp->fullQData(oldp+234,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_4),64);
    bufp->fullBit(oldp+236,(vlSelf->clock));
    bufp->fullBit(oldp+237,(vlSelf->reset));
    bufp->fullBit(oldp+238,(vlSelf->io_message_ready));
    bufp->fullBit(oldp+239,(vlSelf->io_message_valid));
    bufp->fullQData(oldp+240,(vlSelf->io_message_bits_0),64);
    bufp->fullQData(oldp+242,(vlSelf->io_message_bits_1),64);
    bufp->fullQData(oldp+244,(vlSelf->io_message_bits_2),64);
    bufp->fullQData(oldp+246,(vlSelf->io_message_bits_3),64);
    bufp->fullQData(oldp+248,(vlSelf->io_message_bits_4),64);
    bufp->fullQData(oldp+250,(vlSelf->io_message_bits_5),64);
    bufp->fullQData(oldp+252,(vlSelf->io_message_bits_6),64);
    bufp->fullQData(oldp+254,(vlSelf->io_message_bits_7),64);
    bufp->fullQData(oldp+256,(vlSelf->io_message_bits_8),64);
    bufp->fullQData(oldp+258,(vlSelf->io_message_bits_9),64);
    bufp->fullQData(oldp+260,(vlSelf->io_message_bits_10),64);
    bufp->fullQData(oldp+262,(vlSelf->io_message_bits_11),64);
    bufp->fullQData(oldp+264,(vlSelf->io_message_bits_12),64);
    bufp->fullQData(oldp+266,(vlSelf->io_message_bits_13),64);
    bufp->fullQData(oldp+268,(vlSelf->io_message_bits_14),64);
    bufp->fullQData(oldp+270,(vlSelf->io_message_bits_15),64);
    bufp->fullQData(oldp+272,(vlSelf->io_message_bits_16),64);
    bufp->fullBit(oldp+274,(vlSelf->io_hash_ready));
    bufp->fullBit(oldp+275,(vlSelf->io_hash_valid));
    bufp->fullQData(oldp+276,(vlSelf->io_hash_bits_0),64);
    bufp->fullQData(oldp+278,(vlSelf->io_hash_bits_1),64);
    bufp->fullQData(oldp+280,(vlSelf->io_hash_bits_2),64);
    bufp->fullQData(oldp+282,(vlSelf->io_hash_bits_3),64);
    bufp->fullBit(oldp+284,((((IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__roundsDone) 
                              & (IData)(vlSelf->io_hash_ready)) 
                             | (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__messageReady))));
    bufp->fullBit(oldp+285,(((IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__roundsDone) 
                             & (IData)(vlSelf->io_hash_ready))));
}
