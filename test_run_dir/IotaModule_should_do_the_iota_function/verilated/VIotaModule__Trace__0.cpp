// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIotaModule__Syms.h"


void VIotaModule___024root__trace_chg_sub_0(VIotaModule___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VIotaModule___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIotaModule___024root__trace_chg_top_0\n"); );
    // Init
    VIotaModule___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIotaModule___024root*>(voidSelf);
    VIotaModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VIotaModule___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VIotaModule___024root__trace_chg_sub_0(VIotaModule___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VIotaModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIotaModule___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clock));
    bufp->chgBit(oldp+1,(vlSelf->reset));
    bufp->chgQData(oldp+2,(vlSelf->io_state_i_0),64);
    bufp->chgQData(oldp+4,(vlSelf->io_state_i_1),64);
    bufp->chgQData(oldp+6,(vlSelf->io_state_i_2),64);
    bufp->chgQData(oldp+8,(vlSelf->io_state_i_3),64);
    bufp->chgQData(oldp+10,(vlSelf->io_state_i_4),64);
    bufp->chgQData(oldp+12,(vlSelf->io_state_i_5),64);
    bufp->chgQData(oldp+14,(vlSelf->io_state_i_6),64);
    bufp->chgQData(oldp+16,(vlSelf->io_state_i_7),64);
    bufp->chgQData(oldp+18,(vlSelf->io_state_i_8),64);
    bufp->chgQData(oldp+20,(vlSelf->io_state_i_9),64);
    bufp->chgQData(oldp+22,(vlSelf->io_state_i_10),64);
    bufp->chgQData(oldp+24,(vlSelf->io_state_i_11),64);
    bufp->chgQData(oldp+26,(vlSelf->io_state_i_12),64);
    bufp->chgQData(oldp+28,(vlSelf->io_state_i_13),64);
    bufp->chgQData(oldp+30,(vlSelf->io_state_i_14),64);
    bufp->chgQData(oldp+32,(vlSelf->io_state_i_15),64);
    bufp->chgQData(oldp+34,(vlSelf->io_state_i_16),64);
    bufp->chgQData(oldp+36,(vlSelf->io_state_i_17),64);
    bufp->chgQData(oldp+38,(vlSelf->io_state_i_18),64);
    bufp->chgQData(oldp+40,(vlSelf->io_state_i_19),64);
    bufp->chgQData(oldp+42,(vlSelf->io_state_i_20),64);
    bufp->chgQData(oldp+44,(vlSelf->io_state_i_21),64);
    bufp->chgQData(oldp+46,(vlSelf->io_state_i_22),64);
    bufp->chgQData(oldp+48,(vlSelf->io_state_i_23),64);
    bufp->chgQData(oldp+50,(vlSelf->io_state_i_24),64);
    bufp->chgQData(oldp+52,(vlSelf->io_state_o_0),64);
    bufp->chgQData(oldp+54,(vlSelf->io_state_o_1),64);
    bufp->chgQData(oldp+56,(vlSelf->io_state_o_2),64);
    bufp->chgQData(oldp+58,(vlSelf->io_state_o_3),64);
    bufp->chgQData(oldp+60,(vlSelf->io_state_o_4),64);
    bufp->chgQData(oldp+62,(vlSelf->io_state_o_5),64);
    bufp->chgQData(oldp+64,(vlSelf->io_state_o_6),64);
    bufp->chgQData(oldp+66,(vlSelf->io_state_o_7),64);
    bufp->chgQData(oldp+68,(vlSelf->io_state_o_8),64);
    bufp->chgQData(oldp+70,(vlSelf->io_state_o_9),64);
    bufp->chgQData(oldp+72,(vlSelf->io_state_o_10),64);
    bufp->chgQData(oldp+74,(vlSelf->io_state_o_11),64);
    bufp->chgQData(oldp+76,(vlSelf->io_state_o_12),64);
    bufp->chgQData(oldp+78,(vlSelf->io_state_o_13),64);
    bufp->chgQData(oldp+80,(vlSelf->io_state_o_14),64);
    bufp->chgQData(oldp+82,(vlSelf->io_state_o_15),64);
    bufp->chgQData(oldp+84,(vlSelf->io_state_o_16),64);
    bufp->chgQData(oldp+86,(vlSelf->io_state_o_17),64);
    bufp->chgQData(oldp+88,(vlSelf->io_state_o_18),64);
    bufp->chgQData(oldp+90,(vlSelf->io_state_o_19),64);
    bufp->chgQData(oldp+92,(vlSelf->io_state_o_20),64);
    bufp->chgQData(oldp+94,(vlSelf->io_state_o_21),64);
    bufp->chgQData(oldp+96,(vlSelf->io_state_o_22),64);
    bufp->chgQData(oldp+98,(vlSelf->io_state_o_23),64);
    bufp->chgQData(oldp+100,(vlSelf->io_state_o_24),64);
    bufp->chgCData(oldp+102,(vlSelf->io_round),5);
}

void VIotaModule___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIotaModule___024root__trace_cleanup\n"); );
    // Init
    VIotaModule___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIotaModule___024root*>(voidSelf);
    VIotaModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
