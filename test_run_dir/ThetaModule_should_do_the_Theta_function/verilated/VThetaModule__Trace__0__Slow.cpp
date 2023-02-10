// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VThetaModule__Syms.h"


VL_ATTR_COLD void VThetaModule___024root__trace_init_sub__TOP__0(VThetaModule___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VThetaModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThetaModule___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+11,"clock", false,-1);
    tracep->declBit(c+12,"reset", false,-1);
    tracep->declQuad(c+13,"io_state_i_0", false,-1, 63,0);
    tracep->declQuad(c+15,"io_state_i_1", false,-1, 63,0);
    tracep->declQuad(c+17,"io_state_i_2", false,-1, 63,0);
    tracep->declQuad(c+19,"io_state_i_3", false,-1, 63,0);
    tracep->declQuad(c+21,"io_state_i_4", false,-1, 63,0);
    tracep->declQuad(c+23,"io_state_i_5", false,-1, 63,0);
    tracep->declQuad(c+25,"io_state_i_6", false,-1, 63,0);
    tracep->declQuad(c+27,"io_state_i_7", false,-1, 63,0);
    tracep->declQuad(c+29,"io_state_i_8", false,-1, 63,0);
    tracep->declQuad(c+31,"io_state_i_9", false,-1, 63,0);
    tracep->declQuad(c+33,"io_state_i_10", false,-1, 63,0);
    tracep->declQuad(c+35,"io_state_i_11", false,-1, 63,0);
    tracep->declQuad(c+37,"io_state_i_12", false,-1, 63,0);
    tracep->declQuad(c+39,"io_state_i_13", false,-1, 63,0);
    tracep->declQuad(c+41,"io_state_i_14", false,-1, 63,0);
    tracep->declQuad(c+43,"io_state_i_15", false,-1, 63,0);
    tracep->declQuad(c+45,"io_state_i_16", false,-1, 63,0);
    tracep->declQuad(c+47,"io_state_i_17", false,-1, 63,0);
    tracep->declQuad(c+49,"io_state_i_18", false,-1, 63,0);
    tracep->declQuad(c+51,"io_state_i_19", false,-1, 63,0);
    tracep->declQuad(c+53,"io_state_i_20", false,-1, 63,0);
    tracep->declQuad(c+55,"io_state_i_21", false,-1, 63,0);
    tracep->declQuad(c+57,"io_state_i_22", false,-1, 63,0);
    tracep->declQuad(c+59,"io_state_i_23", false,-1, 63,0);
    tracep->declQuad(c+61,"io_state_i_24", false,-1, 63,0);
    tracep->declQuad(c+63,"io_state_o_0", false,-1, 63,0);
    tracep->declQuad(c+65,"io_state_o_1", false,-1, 63,0);
    tracep->declQuad(c+67,"io_state_o_2", false,-1, 63,0);
    tracep->declQuad(c+69,"io_state_o_3", false,-1, 63,0);
    tracep->declQuad(c+71,"io_state_o_4", false,-1, 63,0);
    tracep->declQuad(c+73,"io_state_o_5", false,-1, 63,0);
    tracep->declQuad(c+75,"io_state_o_6", false,-1, 63,0);
    tracep->declQuad(c+77,"io_state_o_7", false,-1, 63,0);
    tracep->declQuad(c+79,"io_state_o_8", false,-1, 63,0);
    tracep->declQuad(c+81,"io_state_o_9", false,-1, 63,0);
    tracep->declQuad(c+83,"io_state_o_10", false,-1, 63,0);
    tracep->declQuad(c+85,"io_state_o_11", false,-1, 63,0);
    tracep->declQuad(c+87,"io_state_o_12", false,-1, 63,0);
    tracep->declQuad(c+89,"io_state_o_13", false,-1, 63,0);
    tracep->declQuad(c+91,"io_state_o_14", false,-1, 63,0);
    tracep->declQuad(c+93,"io_state_o_15", false,-1, 63,0);
    tracep->declQuad(c+95,"io_state_o_16", false,-1, 63,0);
    tracep->declQuad(c+97,"io_state_o_17", false,-1, 63,0);
    tracep->declQuad(c+99,"io_state_o_18", false,-1, 63,0);
    tracep->declQuad(c+101,"io_state_o_19", false,-1, 63,0);
    tracep->declQuad(c+103,"io_state_o_20", false,-1, 63,0);
    tracep->declQuad(c+105,"io_state_o_21", false,-1, 63,0);
    tracep->declQuad(c+107,"io_state_o_22", false,-1, 63,0);
    tracep->declQuad(c+109,"io_state_o_23", false,-1, 63,0);
    tracep->declQuad(c+111,"io_state_o_24", false,-1, 63,0);
    tracep->pushNamePrefix("ThetaModule ");
    tracep->declBit(c+11,"clock", false,-1);
    tracep->declBit(c+12,"reset", false,-1);
    tracep->declQuad(c+13,"io_state_i_0", false,-1, 63,0);
    tracep->declQuad(c+15,"io_state_i_1", false,-1, 63,0);
    tracep->declQuad(c+17,"io_state_i_2", false,-1, 63,0);
    tracep->declQuad(c+19,"io_state_i_3", false,-1, 63,0);
    tracep->declQuad(c+21,"io_state_i_4", false,-1, 63,0);
    tracep->declQuad(c+23,"io_state_i_5", false,-1, 63,0);
    tracep->declQuad(c+25,"io_state_i_6", false,-1, 63,0);
    tracep->declQuad(c+27,"io_state_i_7", false,-1, 63,0);
    tracep->declQuad(c+29,"io_state_i_8", false,-1, 63,0);
    tracep->declQuad(c+31,"io_state_i_9", false,-1, 63,0);
    tracep->declQuad(c+33,"io_state_i_10", false,-1, 63,0);
    tracep->declQuad(c+35,"io_state_i_11", false,-1, 63,0);
    tracep->declQuad(c+37,"io_state_i_12", false,-1, 63,0);
    tracep->declQuad(c+39,"io_state_i_13", false,-1, 63,0);
    tracep->declQuad(c+41,"io_state_i_14", false,-1, 63,0);
    tracep->declQuad(c+43,"io_state_i_15", false,-1, 63,0);
    tracep->declQuad(c+45,"io_state_i_16", false,-1, 63,0);
    tracep->declQuad(c+47,"io_state_i_17", false,-1, 63,0);
    tracep->declQuad(c+49,"io_state_i_18", false,-1, 63,0);
    tracep->declQuad(c+51,"io_state_i_19", false,-1, 63,0);
    tracep->declQuad(c+53,"io_state_i_20", false,-1, 63,0);
    tracep->declQuad(c+55,"io_state_i_21", false,-1, 63,0);
    tracep->declQuad(c+57,"io_state_i_22", false,-1, 63,0);
    tracep->declQuad(c+59,"io_state_i_23", false,-1, 63,0);
    tracep->declQuad(c+61,"io_state_i_24", false,-1, 63,0);
    tracep->declQuad(c+63,"io_state_o_0", false,-1, 63,0);
    tracep->declQuad(c+65,"io_state_o_1", false,-1, 63,0);
    tracep->declQuad(c+67,"io_state_o_2", false,-1, 63,0);
    tracep->declQuad(c+69,"io_state_o_3", false,-1, 63,0);
    tracep->declQuad(c+71,"io_state_o_4", false,-1, 63,0);
    tracep->declQuad(c+73,"io_state_o_5", false,-1, 63,0);
    tracep->declQuad(c+75,"io_state_o_6", false,-1, 63,0);
    tracep->declQuad(c+77,"io_state_o_7", false,-1, 63,0);
    tracep->declQuad(c+79,"io_state_o_8", false,-1, 63,0);
    tracep->declQuad(c+81,"io_state_o_9", false,-1, 63,0);
    tracep->declQuad(c+83,"io_state_o_10", false,-1, 63,0);
    tracep->declQuad(c+85,"io_state_o_11", false,-1, 63,0);
    tracep->declQuad(c+87,"io_state_o_12", false,-1, 63,0);
    tracep->declQuad(c+89,"io_state_o_13", false,-1, 63,0);
    tracep->declQuad(c+91,"io_state_o_14", false,-1, 63,0);
    tracep->declQuad(c+93,"io_state_o_15", false,-1, 63,0);
    tracep->declQuad(c+95,"io_state_o_16", false,-1, 63,0);
    tracep->declQuad(c+97,"io_state_o_17", false,-1, 63,0);
    tracep->declQuad(c+99,"io_state_o_18", false,-1, 63,0);
    tracep->declQuad(c+101,"io_state_o_19", false,-1, 63,0);
    tracep->declQuad(c+103,"io_state_o_20", false,-1, 63,0);
    tracep->declQuad(c+105,"io_state_o_21", false,-1, 63,0);
    tracep->declQuad(c+107,"io_state_o_22", false,-1, 63,0);
    tracep->declQuad(c+109,"io_state_o_23", false,-1, 63,0);
    tracep->declQuad(c+111,"io_state_o_24", false,-1, 63,0);
    tracep->declQuad(c+1,"intermediate_states_0", false,-1, 63,0);
    tracep->declQuad(c+3,"intermediate_states_1", false,-1, 63,0);
    tracep->declQuad(c+5,"intermediate_states_2", false,-1, 63,0);
    tracep->declQuad(c+7,"intermediate_states_3", false,-1, 63,0);
    tracep->declQuad(c+9,"intermediate_states_4", false,-1, 63,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VThetaModule___024root__trace_init_top(VThetaModule___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VThetaModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThetaModule___024root__trace_init_top\n"); );
    // Body
    VThetaModule___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VThetaModule___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VThetaModule___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VThetaModule___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VThetaModule___024root__trace_register(VThetaModule___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VThetaModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThetaModule___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VThetaModule___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VThetaModule___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VThetaModule___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VThetaModule___024root__trace_full_sub_0(VThetaModule___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VThetaModule___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThetaModule___024root__trace_full_top_0\n"); );
    // Init
    VThetaModule___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VThetaModule___024root*>(voidSelf);
    VThetaModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VThetaModule___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VThetaModule___024root__trace_full_sub_0(VThetaModule___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VThetaModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThetaModule___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1,(vlSelf->ThetaModule__DOT__intermediate_states_0),64);
    bufp->fullQData(oldp+3,(vlSelf->ThetaModule__DOT__intermediate_states_1),64);
    bufp->fullQData(oldp+5,(vlSelf->ThetaModule__DOT__intermediate_states_2),64);
    bufp->fullQData(oldp+7,(vlSelf->ThetaModule__DOT__intermediate_states_3),64);
    bufp->fullQData(oldp+9,(vlSelf->ThetaModule__DOT__intermediate_states_4),64);
    bufp->fullBit(oldp+11,(vlSelf->clock));
    bufp->fullBit(oldp+12,(vlSelf->reset));
    bufp->fullQData(oldp+13,(vlSelf->io_state_i_0),64);
    bufp->fullQData(oldp+15,(vlSelf->io_state_i_1),64);
    bufp->fullQData(oldp+17,(vlSelf->io_state_i_2),64);
    bufp->fullQData(oldp+19,(vlSelf->io_state_i_3),64);
    bufp->fullQData(oldp+21,(vlSelf->io_state_i_4),64);
    bufp->fullQData(oldp+23,(vlSelf->io_state_i_5),64);
    bufp->fullQData(oldp+25,(vlSelf->io_state_i_6),64);
    bufp->fullQData(oldp+27,(vlSelf->io_state_i_7),64);
    bufp->fullQData(oldp+29,(vlSelf->io_state_i_8),64);
    bufp->fullQData(oldp+31,(vlSelf->io_state_i_9),64);
    bufp->fullQData(oldp+33,(vlSelf->io_state_i_10),64);
    bufp->fullQData(oldp+35,(vlSelf->io_state_i_11),64);
    bufp->fullQData(oldp+37,(vlSelf->io_state_i_12),64);
    bufp->fullQData(oldp+39,(vlSelf->io_state_i_13),64);
    bufp->fullQData(oldp+41,(vlSelf->io_state_i_14),64);
    bufp->fullQData(oldp+43,(vlSelf->io_state_i_15),64);
    bufp->fullQData(oldp+45,(vlSelf->io_state_i_16),64);
    bufp->fullQData(oldp+47,(vlSelf->io_state_i_17),64);
    bufp->fullQData(oldp+49,(vlSelf->io_state_i_18),64);
    bufp->fullQData(oldp+51,(vlSelf->io_state_i_19),64);
    bufp->fullQData(oldp+53,(vlSelf->io_state_i_20),64);
    bufp->fullQData(oldp+55,(vlSelf->io_state_i_21),64);
    bufp->fullQData(oldp+57,(vlSelf->io_state_i_22),64);
    bufp->fullQData(oldp+59,(vlSelf->io_state_i_23),64);
    bufp->fullQData(oldp+61,(vlSelf->io_state_i_24),64);
    bufp->fullQData(oldp+63,(vlSelf->io_state_o_0),64);
    bufp->fullQData(oldp+65,(vlSelf->io_state_o_1),64);
    bufp->fullQData(oldp+67,(vlSelf->io_state_o_2),64);
    bufp->fullQData(oldp+69,(vlSelf->io_state_o_3),64);
    bufp->fullQData(oldp+71,(vlSelf->io_state_o_4),64);
    bufp->fullQData(oldp+73,(vlSelf->io_state_o_5),64);
    bufp->fullQData(oldp+75,(vlSelf->io_state_o_6),64);
    bufp->fullQData(oldp+77,(vlSelf->io_state_o_7),64);
    bufp->fullQData(oldp+79,(vlSelf->io_state_o_8),64);
    bufp->fullQData(oldp+81,(vlSelf->io_state_o_9),64);
    bufp->fullQData(oldp+83,(vlSelf->io_state_o_10),64);
    bufp->fullQData(oldp+85,(vlSelf->io_state_o_11),64);
    bufp->fullQData(oldp+87,(vlSelf->io_state_o_12),64);
    bufp->fullQData(oldp+89,(vlSelf->io_state_o_13),64);
    bufp->fullQData(oldp+91,(vlSelf->io_state_o_14),64);
    bufp->fullQData(oldp+93,(vlSelf->io_state_o_15),64);
    bufp->fullQData(oldp+95,(vlSelf->io_state_o_16),64);
    bufp->fullQData(oldp+97,(vlSelf->io_state_o_17),64);
    bufp->fullQData(oldp+99,(vlSelf->io_state_o_18),64);
    bufp->fullQData(oldp+101,(vlSelf->io_state_o_19),64);
    bufp->fullQData(oldp+103,(vlSelf->io_state_o_20),64);
    bufp->fullQData(oldp+105,(vlSelf->io_state_o_21),64);
    bufp->fullQData(oldp+107,(vlSelf->io_state_o_22),64);
    bufp->fullQData(oldp+109,(vlSelf->io_state_o_23),64);
    bufp->fullQData(oldp+111,(vlSelf->io_state_o_24),64);
}
