// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VThetaModule.h for the primary calling header

#include "verilated.h"

#include "VThetaModule___024root.h"

VL_INLINE_OPT void VThetaModule___024root___combo__TOP__0(VThetaModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VThetaModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThetaModule___024root___combo__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h69a02cb0__0;
    VlWide<3>/*95:0*/ __Vtemp_h69a02cb0__1;
    VlWide<3>/*95:0*/ __Vtemp_h69a02cb0__2;
    VlWide<3>/*95:0*/ __Vtemp_h69a02cb0__3;
    VlWide<3>/*95:0*/ __Vtemp_h69a02cb0__4;
    VlWide<3>/*95:0*/ __Vtemp_h369e2c90__0;
    VlWide<3>/*95:0*/ __Vtemp_hab6726e6__0;
    VlWide<3>/*95:0*/ __Vtemp_h369e2c90__1;
    VlWide<3>/*95:0*/ __Vtemp_hab6726e6__1;
    VlWide<3>/*95:0*/ __Vtemp_h369e2c90__2;
    VlWide<3>/*95:0*/ __Vtemp_hab6726e6__2;
    VlWide<3>/*95:0*/ __Vtemp_h369e2c90__3;
    VlWide<3>/*95:0*/ __Vtemp_hab6726e6__3;
    VlWide<3>/*95:0*/ __Vtemp_h369e2c90__4;
    VlWide<3>/*95:0*/ __Vtemp_hab6726e6__4;
    VlWide<3>/*95:0*/ __Vtemp_h6abb196b__0;
    VlWide<3>/*95:0*/ __Vtemp_hdc8e7ffe__0;
    VlWide<3>/*95:0*/ __Vtemp_h6abb196b__1;
    VlWide<3>/*95:0*/ __Vtemp_hdc8e7ffe__1;
    VlWide<3>/*95:0*/ __Vtemp_h6abb196b__2;
    VlWide<3>/*95:0*/ __Vtemp_hdc8e7ffe__2;
    VlWide<3>/*95:0*/ __Vtemp_h6abb196b__3;
    VlWide<3>/*95:0*/ __Vtemp_hdc8e7ffe__3;
    VlWide<3>/*95:0*/ __Vtemp_h6abb196b__4;
    VlWide<3>/*95:0*/ __Vtemp_hdc8e7ffe__4;
    // Body
    vlSelf->ThetaModule__DOT__intermediate_states_0 
        = ((((vlSelf->io_state_i_0 ^ vlSelf->io_state_i_5) 
             ^ vlSelf->io_state_i_10) ^ vlSelf->io_state_i_15) 
           ^ vlSelf->io_state_i_20);
    vlSelf->ThetaModule__DOT__intermediate_states_1 
        = ((((vlSelf->io_state_i_1 ^ vlSelf->io_state_i_6) 
             ^ vlSelf->io_state_i_11) ^ vlSelf->io_state_i_16) 
           ^ vlSelf->io_state_i_21);
    vlSelf->ThetaModule__DOT__intermediate_states_2 
        = ((((vlSelf->io_state_i_2 ^ vlSelf->io_state_i_7) 
             ^ vlSelf->io_state_i_12) ^ vlSelf->io_state_i_17) 
           ^ vlSelf->io_state_i_22);
    vlSelf->ThetaModule__DOT__intermediate_states_3 
        = ((((vlSelf->io_state_i_3 ^ vlSelf->io_state_i_8) 
             ^ vlSelf->io_state_i_13) ^ vlSelf->io_state_i_18) 
           ^ vlSelf->io_state_i_23);
    vlSelf->ThetaModule__DOT__intermediate_states_4 
        = ((((vlSelf->io_state_i_4 ^ vlSelf->io_state_i_9) 
             ^ vlSelf->io_state_i_14) ^ vlSelf->io_state_i_19) 
           ^ vlSelf->io_state_i_24);
    VL_EXTEND_WI(65,1, __Vtemp_h69a02cb0__0, (1U & (IData)(
                                                           (vlSelf->ThetaModule__DOT__intermediate_states_2 
                                                            >> 0x3fU))));
    vlSelf->io_state_o_1 = (((vlSelf->io_state_i_1 
                              ^ vlSelf->ThetaModule__DOT__intermediate_states_0) 
                             ^ (vlSelf->ThetaModule__DOT__intermediate_states_2 
                                << 1U)) | (((QData)((IData)(
                                                            __Vtemp_h69a02cb0__0[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             __Vtemp_h69a02cb0__0[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp_h69a02cb0__1, (1U & (IData)(
                                                           (vlSelf->ThetaModule__DOT__intermediate_states_2 
                                                            >> 0x3fU))));
    vlSelf->io_state_o_6 = (((vlSelf->io_state_i_6 
                              ^ vlSelf->ThetaModule__DOT__intermediate_states_0) 
                             ^ (vlSelf->ThetaModule__DOT__intermediate_states_2 
                                << 1U)) | (((QData)((IData)(
                                                            __Vtemp_h69a02cb0__1[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             __Vtemp_h69a02cb0__1[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp_h69a02cb0__2, (1U & (IData)(
                                                           (vlSelf->ThetaModule__DOT__intermediate_states_2 
                                                            >> 0x3fU))));
    vlSelf->io_state_o_11 = (((vlSelf->io_state_i_11 
                               ^ vlSelf->ThetaModule__DOT__intermediate_states_0) 
                              ^ (vlSelf->ThetaModule__DOT__intermediate_states_2 
                                 << 1U)) | (((QData)((IData)(
                                                             __Vtemp_h69a02cb0__2[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              __Vtemp_h69a02cb0__2[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp_h69a02cb0__3, (1U & (IData)(
                                                           (vlSelf->ThetaModule__DOT__intermediate_states_2 
                                                            >> 0x3fU))));
    vlSelf->io_state_o_16 = (((vlSelf->io_state_i_16 
                               ^ vlSelf->ThetaModule__DOT__intermediate_states_0) 
                              ^ (vlSelf->ThetaModule__DOT__intermediate_states_2 
                                 << 1U)) | (((QData)((IData)(
                                                             __Vtemp_h69a02cb0__3[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              __Vtemp_h69a02cb0__3[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp_h69a02cb0__4, (1U & (IData)(
                                                           (vlSelf->ThetaModule__DOT__intermediate_states_2 
                                                            >> 0x3fU))));
    vlSelf->io_state_o_21 = (((vlSelf->io_state_i_21 
                               ^ vlSelf->ThetaModule__DOT__intermediate_states_0) 
                              ^ (vlSelf->ThetaModule__DOT__intermediate_states_2 
                                 << 1U)) | (((QData)((IData)(
                                                             __Vtemp_h69a02cb0__4[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              __Vtemp_h69a02cb0__4[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp_h369e2c90__0, (1U & (IData)(
                                                           (vlSelf->ThetaModule__DOT__intermediate_states_3 
                                                            >> 0x3fU))));
    vlSelf->io_state_o_2 = (((vlSelf->io_state_i_2 
                              ^ vlSelf->ThetaModule__DOT__intermediate_states_1) 
                             ^ (vlSelf->ThetaModule__DOT__intermediate_states_3 
                                << 1U)) | (((QData)((IData)(
                                                            __Vtemp_h369e2c90__0[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             __Vtemp_h369e2c90__0[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp_hab6726e6__0, (1U & (IData)(
                                                           (vlSelf->ThetaModule__DOT__intermediate_states_0 
                                                            >> 0x3fU))));
    vlSelf->io_state_o_4 = (((vlSelf->io_state_i_4 
                              ^ vlSelf->ThetaModule__DOT__intermediate_states_3) 
                             ^ (vlSelf->ThetaModule__DOT__intermediate_states_0 
                                << 1U)) | (((QData)((IData)(
                                                            __Vtemp_hab6726e6__0[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             __Vtemp_hab6726e6__0[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp_h369e2c90__1, (1U & (IData)(
                                                           (vlSelf->ThetaModule__DOT__intermediate_states_3 
                                                            >> 0x3fU))));
    vlSelf->io_state_o_7 = (((vlSelf->io_state_i_7 
                              ^ vlSelf->ThetaModule__DOT__intermediate_states_1) 
                             ^ (vlSelf->ThetaModule__DOT__intermediate_states_3 
                                << 1U)) | (((QData)((IData)(
                                                            __Vtemp_h369e2c90__1[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             __Vtemp_h369e2c90__1[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp_hab6726e6__1, (1U & (IData)(
                                                           (vlSelf->ThetaModule__DOT__intermediate_states_0 
                                                            >> 0x3fU))));
    vlSelf->io_state_o_9 = (((vlSelf->io_state_i_9 
                              ^ vlSelf->ThetaModule__DOT__intermediate_states_3) 
                             ^ (vlSelf->ThetaModule__DOT__intermediate_states_0 
                                << 1U)) | (((QData)((IData)(
                                                            __Vtemp_hab6726e6__1[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             __Vtemp_hab6726e6__1[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp_h369e2c90__2, (1U & (IData)(
                                                           (vlSelf->ThetaModule__DOT__intermediate_states_3 
                                                            >> 0x3fU))));
    vlSelf->io_state_o_12 = (((vlSelf->io_state_i_12 
                               ^ vlSelf->ThetaModule__DOT__intermediate_states_1) 
                              ^ (vlSelf->ThetaModule__DOT__intermediate_states_3 
                                 << 1U)) | (((QData)((IData)(
                                                             __Vtemp_h369e2c90__2[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              __Vtemp_h369e2c90__2[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp_hab6726e6__2, (1U & (IData)(
                                                           (vlSelf->ThetaModule__DOT__intermediate_states_0 
                                                            >> 0x3fU))));
    vlSelf->io_state_o_14 = (((vlSelf->io_state_i_14 
                               ^ vlSelf->ThetaModule__DOT__intermediate_states_3) 
                              ^ (vlSelf->ThetaModule__DOT__intermediate_states_0 
                                 << 1U)) | (((QData)((IData)(
                                                             __Vtemp_hab6726e6__2[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              __Vtemp_hab6726e6__2[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp_h369e2c90__3, (1U & (IData)(
                                                           (vlSelf->ThetaModule__DOT__intermediate_states_3 
                                                            >> 0x3fU))));
    vlSelf->io_state_o_17 = (((vlSelf->io_state_i_17 
                               ^ vlSelf->ThetaModule__DOT__intermediate_states_1) 
                              ^ (vlSelf->ThetaModule__DOT__intermediate_states_3 
                                 << 1U)) | (((QData)((IData)(
                                                             __Vtemp_h369e2c90__3[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              __Vtemp_h369e2c90__3[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp_hab6726e6__3, (1U & (IData)(
                                                           (vlSelf->ThetaModule__DOT__intermediate_states_0 
                                                            >> 0x3fU))));
    vlSelf->io_state_o_19 = (((vlSelf->io_state_i_19 
                               ^ vlSelf->ThetaModule__DOT__intermediate_states_3) 
                              ^ (vlSelf->ThetaModule__DOT__intermediate_states_0 
                                 << 1U)) | (((QData)((IData)(
                                                             __Vtemp_hab6726e6__3[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              __Vtemp_hab6726e6__3[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp_h369e2c90__4, (1U & (IData)(
                                                           (vlSelf->ThetaModule__DOT__intermediate_states_3 
                                                            >> 0x3fU))));
    vlSelf->io_state_o_22 = (((vlSelf->io_state_i_22 
                               ^ vlSelf->ThetaModule__DOT__intermediate_states_1) 
                              ^ (vlSelf->ThetaModule__DOT__intermediate_states_3 
                                 << 1U)) | (((QData)((IData)(
                                                             __Vtemp_h369e2c90__4[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              __Vtemp_h369e2c90__4[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp_hab6726e6__4, (1U & (IData)(
                                                           (vlSelf->ThetaModule__DOT__intermediate_states_0 
                                                            >> 0x3fU))));
    vlSelf->io_state_o_24 = (((vlSelf->io_state_i_24 
                               ^ vlSelf->ThetaModule__DOT__intermediate_states_3) 
                              ^ (vlSelf->ThetaModule__DOT__intermediate_states_0 
                                 << 1U)) | (((QData)((IData)(
                                                             __Vtemp_hab6726e6__4[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              __Vtemp_hab6726e6__4[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp_h6abb196b__0, (1U & (IData)(
                                                           (vlSelf->ThetaModule__DOT__intermediate_states_1 
                                                            >> 0x3fU))));
    vlSelf->io_state_o_0 = (((vlSelf->io_state_i_0 
                              ^ vlSelf->ThetaModule__DOT__intermediate_states_4) 
                             ^ (vlSelf->ThetaModule__DOT__intermediate_states_1 
                                << 1U)) | (((QData)((IData)(
                                                            __Vtemp_h6abb196b__0[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             __Vtemp_h6abb196b__0[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp_hdc8e7ffe__0, (1U & (IData)(
                                                           (vlSelf->ThetaModule__DOT__intermediate_states_4 
                                                            >> 0x3fU))));
    vlSelf->io_state_o_3 = (((vlSelf->io_state_i_3 
                              ^ vlSelf->ThetaModule__DOT__intermediate_states_2) 
                             ^ (vlSelf->ThetaModule__DOT__intermediate_states_4 
                                << 1U)) | (((QData)((IData)(
                                                            __Vtemp_hdc8e7ffe__0[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             __Vtemp_hdc8e7ffe__0[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp_h6abb196b__1, (1U & (IData)(
                                                           (vlSelf->ThetaModule__DOT__intermediate_states_1 
                                                            >> 0x3fU))));
    vlSelf->io_state_o_5 = (((vlSelf->io_state_i_5 
                              ^ vlSelf->ThetaModule__DOT__intermediate_states_4) 
                             ^ (vlSelf->ThetaModule__DOT__intermediate_states_1 
                                << 1U)) | (((QData)((IData)(
                                                            __Vtemp_h6abb196b__1[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             __Vtemp_h6abb196b__1[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp_hdc8e7ffe__1, (1U & (IData)(
                                                           (vlSelf->ThetaModule__DOT__intermediate_states_4 
                                                            >> 0x3fU))));
    vlSelf->io_state_o_8 = (((vlSelf->io_state_i_8 
                              ^ vlSelf->ThetaModule__DOT__intermediate_states_2) 
                             ^ (vlSelf->ThetaModule__DOT__intermediate_states_4 
                                << 1U)) | (((QData)((IData)(
                                                            __Vtemp_hdc8e7ffe__1[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             __Vtemp_hdc8e7ffe__1[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp_h6abb196b__2, (1U & (IData)(
                                                           (vlSelf->ThetaModule__DOT__intermediate_states_1 
                                                            >> 0x3fU))));
    vlSelf->io_state_o_10 = (((vlSelf->io_state_i_10 
                               ^ vlSelf->ThetaModule__DOT__intermediate_states_4) 
                              ^ (vlSelf->ThetaModule__DOT__intermediate_states_1 
                                 << 1U)) | (((QData)((IData)(
                                                             __Vtemp_h6abb196b__2[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              __Vtemp_h6abb196b__2[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp_hdc8e7ffe__2, (1U & (IData)(
                                                           (vlSelf->ThetaModule__DOT__intermediate_states_4 
                                                            >> 0x3fU))));
    vlSelf->io_state_o_13 = (((vlSelf->io_state_i_13 
                               ^ vlSelf->ThetaModule__DOT__intermediate_states_2) 
                              ^ (vlSelf->ThetaModule__DOT__intermediate_states_4 
                                 << 1U)) | (((QData)((IData)(
                                                             __Vtemp_hdc8e7ffe__2[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              __Vtemp_hdc8e7ffe__2[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp_h6abb196b__3, (1U & (IData)(
                                                           (vlSelf->ThetaModule__DOT__intermediate_states_1 
                                                            >> 0x3fU))));
    vlSelf->io_state_o_15 = (((vlSelf->io_state_i_15 
                               ^ vlSelf->ThetaModule__DOT__intermediate_states_4) 
                              ^ (vlSelf->ThetaModule__DOT__intermediate_states_1 
                                 << 1U)) | (((QData)((IData)(
                                                             __Vtemp_h6abb196b__3[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              __Vtemp_h6abb196b__3[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp_hdc8e7ffe__3, (1U & (IData)(
                                                           (vlSelf->ThetaModule__DOT__intermediate_states_4 
                                                            >> 0x3fU))));
    vlSelf->io_state_o_18 = (((vlSelf->io_state_i_18 
                               ^ vlSelf->ThetaModule__DOT__intermediate_states_2) 
                              ^ (vlSelf->ThetaModule__DOT__intermediate_states_4 
                                 << 1U)) | (((QData)((IData)(
                                                             __Vtemp_hdc8e7ffe__3[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              __Vtemp_hdc8e7ffe__3[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp_h6abb196b__4, (1U & (IData)(
                                                           (vlSelf->ThetaModule__DOT__intermediate_states_1 
                                                            >> 0x3fU))));
    vlSelf->io_state_o_20 = (((vlSelf->io_state_i_20 
                               ^ vlSelf->ThetaModule__DOT__intermediate_states_4) 
                              ^ (vlSelf->ThetaModule__DOT__intermediate_states_1 
                                 << 1U)) | (((QData)((IData)(
                                                             __Vtemp_h6abb196b__4[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              __Vtemp_h6abb196b__4[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp_hdc8e7ffe__4, (1U & (IData)(
                                                           (vlSelf->ThetaModule__DOT__intermediate_states_4 
                                                            >> 0x3fU))));
    vlSelf->io_state_o_23 = (((vlSelf->io_state_i_23 
                               ^ vlSelf->ThetaModule__DOT__intermediate_states_2) 
                              ^ (vlSelf->ThetaModule__DOT__intermediate_states_4 
                                 << 1U)) | (((QData)((IData)(
                                                             __Vtemp_hdc8e7ffe__4[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              __Vtemp_hdc8e7ffe__4[0U]))));
}

void VThetaModule___024root___eval(VThetaModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VThetaModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThetaModule___024root___eval\n"); );
    // Body
    VThetaModule___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
}

#ifdef VL_DEBUG
void VThetaModule___024root___eval_debug_assertions(VThetaModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VThetaModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThetaModule___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
