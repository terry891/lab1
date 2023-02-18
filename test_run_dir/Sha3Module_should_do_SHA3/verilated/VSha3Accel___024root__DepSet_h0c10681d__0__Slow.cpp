// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSha3Accel.h for the primary calling header

#include "verilated.h"

#include "VSha3Accel___024root.h"

VL_ATTR_COLD void VSha3Accel___024root___settle__TOP__0(VSha3Accel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSha3Accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSha3Accel___024root___settle__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hf269d6c7__0;
    VlWide<3>/*95:0*/ __Vtemp_h7b6161fe__0;
    VlWide<3>/*95:0*/ __Vtemp_ha2ad4748__0;
    VlWide<3>/*95:0*/ __Vtemp_hb1ac96fb__0;
    VlWide<3>/*95:0*/ __Vtemp_h63f35153__0;
    // Body
    vlSelf->io_hash_bits_0 = vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_0;
    vlSelf->io_hash_bits_1 = vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_1;
    vlSelf->io_hash_bits_2 = vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_2;
    vlSelf->io_hash_bits_3 = vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_3;
    vlSelf->Sha3Accel__DOT__ctrl__DOT___round_T_1 = 
        (0x1fU & ((IData)(1U) + (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__round)));
    vlSelf->io_hash_valid = ((IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__roundsDone) 
                             & (IData)(vlSelf->io_hash_ready));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round 
        = (((~ (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__roundsDone)) 
            & (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__encryptReady))
            ? (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__round)
            : 0U);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_0 
        = ((((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_0 
              ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_5) 
             ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_10) 
            ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_15) 
           ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_20);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_1 
        = ((((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_1 
              ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_6) 
             ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_11) 
            ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_16) 
           ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_21);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_2 
        = ((((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_2 
              ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_7) 
             ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_12) 
            ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_17) 
           ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_22);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_3 
        = ((((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_3 
              ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_8) 
             ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_13) 
            ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_18) 
           ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_23);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_4 
        = ((((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_4 
              ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_9) 
             ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_14) 
            ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_19) 
           ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_24);
    vlSelf->Sha3Accel__DOT__ctrl__DOT___GEN_25 = ((~ 
                                                   ((IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__messageReady) 
                                                    & (IData)(vlSelf->io_message_valid))) 
                                                  & (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__messageReady));
    vlSelf->io_message_ready = (((IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__roundsDone) 
                                 & (IData)(vlSelf->io_hash_ready)) 
                                | (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__messageReady));
    vlSelf->Sha3Accel__DOT__ctrl__DOT___GEN_26 = (((IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__messageReady) 
                                                   & (IData)(vlSelf->io_message_valid)) 
                                                  | (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__encryptReady));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__iota__DOT___GEN_20 
        = ((0x14U == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
            ? 0x8000000080008081ULL : ((0x13U == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
                                        ? 0x800000008000000aULL
                                        : ((0x12U == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
                                            ? 0x800aULL
                                            : ((0x11U 
                                                == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
                                                ? 0x8000000000000080ULL
                                                : (
                                                   (0x10U 
                                                    == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
                                                    ? 0x8000000000008002ULL
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
                                                     ? 0x8000000000008003ULL
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
                                                      ? 0x8000000000008089ULL
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
                                                       ? 0x800000000000008bULL
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
                                                        ? 0x8000808bULL
                                                        : 
                                                       ((0xbU 
                                                         == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
                                                         ? 0x8000000aULL
                                                         : 
                                                        ((0xaU 
                                                          == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
                                                          ? 0x80008009ULL
                                                          : 
                                                         ((9U 
                                                           == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
                                                           ? 0x88ULL
                                                           : 
                                                          ((8U 
                                                            == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
                                                            ? 0x8aULL
                                                            : 
                                                           ((7U 
                                                             == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
                                                             ? 0x8000000000008009ULL
                                                             : 
                                                            ((6U 
                                                              == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
                                                              ? 0x8000000080008081ULL
                                                              : 
                                                             ((5U 
                                                               == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
                                                               ? 0x80000001ULL
                                                               : 
                                                              ((4U 
                                                                == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
                                                                ? 0x808bULL
                                                                : 
                                                               ((3U 
                                                                 == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
                                                                 ? 0x8000000080008000ULL
                                                                 : 
                                                                ((2U 
                                                                  == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
                                                                  ? 0x800000000000808aULL
                                                                  : 
                                                                 ((1U 
                                                                   == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
                                                                   ? 0x8082ULL
                                                                   : 1ULL))))))))))))))))))));
    VL_EXTEND_WI(65,1, __Vtemp_hf269d6c7__0, (1U & (IData)(
                                                           (vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_2 
                                                            >> 0x3fU))));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_1 
        = (vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_0 
           ^ ((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_2 
               << 1U) | (((QData)((IData)(__Vtemp_hf269d6c7__0[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      __Vtemp_hf269d6c7__0[0U])))));
    VL_EXTEND_WI(65,1, __Vtemp_h7b6161fe__0, (1U & (IData)(
                                                           (vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_3 
                                                            >> 0x3fU))));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_2 
        = (vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_1 
           ^ ((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_3 
               << 1U) | (((QData)((IData)(__Vtemp_h7b6161fe__0[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      __Vtemp_h7b6161fe__0[0U])))));
    VL_EXTEND_WI(65,1, __Vtemp_ha2ad4748__0, (1U & (IData)(
                                                           (vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_0 
                                                            >> 0x3fU))));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_4 
        = (vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_3 
           ^ ((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_0 
               << 1U) | (((QData)((IData)(__Vtemp_ha2ad4748__0[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      __Vtemp_ha2ad4748__0[0U])))));
    VL_EXTEND_WI(65,1, __Vtemp_hb1ac96fb__0, (1U & (IData)(
                                                           (vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_1 
                                                            >> 0x3fU))));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp 
        = (vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_4 
           ^ ((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_1 
               << 1U) | (((QData)((IData)(__Vtemp_hb1ac96fb__0[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      __Vtemp_hb1ac96fb__0[0U])))));
    VL_EXTEND_WI(65,1, __Vtemp_h63f35153__0, (1U & (IData)(
                                                           (vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_4 
                                                            >> 0x3fU))));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_3 
        = (vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_2 
           ^ ((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_4 
               << 1U) | (((QData)((IData)(__Vtemp_h63f35153__0[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      __Vtemp_h63f35153__0[0U])))));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_1 
        = (((QData)((IData)((0xfffffU & ((IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_6) 
                                         ^ (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_1))))) 
            << 0x2cU) | ((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_6 
                          ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_1) 
                         >> 0x14U));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_8 
        = (((QData)((IData)((0x7ffffU & ((IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_16) 
                                         ^ (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_1))))) 
            << 0x2dU) | ((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_16 
                          ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_1) 
                         >> 0x13U));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_10 
        = (((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_1 
             ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_1) 
            << 1U) | (QData)((IData)((1U & (IData)(
                                                   ((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_1 
                                                     ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_1) 
                                                    >> 0x3fU))))));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_17 
        = (((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_11 
             ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_1) 
            << 0xaU) | (QData)((IData)((0x3ffU & (IData)(
                                                         ((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_11 
                                                           ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_1) 
                                                          >> 0x36U))))));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_24 
        = (((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_21 
             ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_1) 
            << 2U) | (QData)((IData)((3U & (IData)(
                                                   ((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_21 
                                                     ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_1) 
                                                    >> 0x3eU))))));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_2 
        = (((QData)((IData)((0x1fffffU & ((IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_12) 
                                          ^ (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_2))))) 
            << 0x2bU) | ((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_12 
                          ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_2) 
                         >> 0x15U));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_9 
        = (((QData)((IData)((7U & ((IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_22) 
                                   ^ (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_2))))) 
            << 0x3dU) | ((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_22 
                          ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_2) 
                         >> 3U));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_11 
        = (((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_7 
             ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_2) 
            << 6U) | (QData)((IData)((0x3fU & (IData)(
                                                      ((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_7 
                                                        ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_2) 
                                                       >> 0x3aU))))));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_18 
        = (((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_17 
             ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_2) 
            << 0xfU) | (QData)((IData)((0x7fffU & (IData)(
                                                          ((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_17 
                                                            ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_2) 
                                                           >> 0x31U))))));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_20 
        = (((QData)((IData)((3U & ((IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_2) 
                                   ^ (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_2))))) 
            << 0x3eU) | ((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_2 
                          ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_2) 
                         >> 2U));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_4 
        = (((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_24 
             ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_4) 
            << 0xeU) | (QData)((IData)((0x3fffU & (IData)(
                                                          ((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_24 
                                                            ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_4) 
                                                           >> 0x32U))))));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_6 
        = (((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_9 
             ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_4) 
            << 0x14U) | (QData)((IData)((0xfffffU & (IData)(
                                                            ((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_9 
                                                              ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_4) 
                                                             >> 0x2cU))))));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_13 
        = (((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_19 
             ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_4) 
            << 8U) | (QData)((IData)((0xffU & (IData)(
                                                      ((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_19 
                                                        ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_4) 
                                                       >> 0x38U))))));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_15 
        = (((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_4 
             ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_4) 
            << 0x1bU) | (QData)((IData)((0x7ffffffU 
                                         & (IData)(
                                                   ((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_4 
                                                     ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_4) 
                                                    >> 0x25U))))));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_22 
        = (((QData)((IData)((0x1ffffffU & ((IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_14) 
                                           ^ (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_4))))) 
            << 0x27U) | ((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_14 
                          ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_4) 
                         >> 0x19U));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta_io_state_o_0 
        = (vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_0 
           ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_7 
        = (((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_10 
             ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp) 
            << 3U) | (QData)((IData)((7U & (IData)(
                                                   ((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_10 
                                                     ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp) 
                                                    >> 0x3dU))))));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_14 
        = (((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_20 
             ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp) 
            << 0x12U) | (QData)((IData)((0x3ffffU & (IData)(
                                                            ((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_20 
                                                              ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp) 
                                                             >> 0x2eU))))));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_16 
        = (((QData)((IData)((0xfffffffU & ((IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_5) 
                                           ^ (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp))))) 
            << 0x24U) | ((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_5 
                          ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp) 
                         >> 0x1cU));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_23 
        = (((QData)((IData)((0x7fffffU & ((IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_15) 
                                          ^ (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp))))) 
            << 0x29U) | ((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_15 
                          ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp) 
                         >> 0x17U));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_3 
        = (((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_18 
             ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_3) 
            << 0x15U) | (QData)((IData)((0x1fffffU 
                                         & (IData)(
                                                   ((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_18 
                                                     ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_3) 
                                                    >> 0x2bU))))));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_5 
        = (((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_3 
             ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_3) 
            << 0x1cU) | (QData)((IData)((0xfffffffU 
                                         & (IData)(
                                                   ((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_3 
                                                     ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_3) 
                                                    >> 0x24U))))));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_12 
        = (((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_13 
             ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_3) 
            << 0x19U) | (QData)((IData)((0x1ffffffU 
                                         & (IData)(
                                                   ((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_13 
                                                     ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_3) 
                                                    >> 0x27U))))));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_19 
        = (((QData)((IData)((0xffU & ((IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_23) 
                                      ^ (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_3))))) 
            << 0x38U) | ((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_23 
                          ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_3) 
                         >> 8U));
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_21 
        = (((QData)((IData)((0x1ffU & ((IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_8) 
                                       ^ (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_3))))) 
            << 0x37U) | ((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_8 
                          ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_3) 
                         >> 9U));
}

VL_ATTR_COLD void VSha3Accel___024root___eval_initial(VSha3Accel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSha3Accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSha3Accel___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VSha3Accel___024root___eval_settle(VSha3Accel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSha3Accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSha3Accel___024root___eval_settle\n"); );
    // Body
    VSha3Accel___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VSha3Accel___024root___final(VSha3Accel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSha3Accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSha3Accel___024root___final\n"); );
}

VL_ATTR_COLD void VSha3Accel___024root___ctor_var_reset(VSha3Accel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSha3Accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSha3Accel___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_message_ready = VL_RAND_RESET_I(1);
    vlSelf->io_message_valid = VL_RAND_RESET_I(1);
    vlSelf->io_message_bits_0 = VL_RAND_RESET_Q(64);
    vlSelf->io_message_bits_1 = VL_RAND_RESET_Q(64);
    vlSelf->io_message_bits_2 = VL_RAND_RESET_Q(64);
    vlSelf->io_message_bits_3 = VL_RAND_RESET_Q(64);
    vlSelf->io_message_bits_4 = VL_RAND_RESET_Q(64);
    vlSelf->io_message_bits_5 = VL_RAND_RESET_Q(64);
    vlSelf->io_message_bits_6 = VL_RAND_RESET_Q(64);
    vlSelf->io_message_bits_7 = VL_RAND_RESET_Q(64);
    vlSelf->io_message_bits_8 = VL_RAND_RESET_Q(64);
    vlSelf->io_message_bits_9 = VL_RAND_RESET_Q(64);
    vlSelf->io_message_bits_10 = VL_RAND_RESET_Q(64);
    vlSelf->io_message_bits_11 = VL_RAND_RESET_Q(64);
    vlSelf->io_message_bits_12 = VL_RAND_RESET_Q(64);
    vlSelf->io_message_bits_13 = VL_RAND_RESET_Q(64);
    vlSelf->io_message_bits_14 = VL_RAND_RESET_Q(64);
    vlSelf->io_message_bits_15 = VL_RAND_RESET_Q(64);
    vlSelf->io_message_bits_16 = VL_RAND_RESET_Q(64);
    vlSelf->io_hash_ready = VL_RAND_RESET_I(1);
    vlSelf->io_hash_valid = VL_RAND_RESET_I(1);
    vlSelf->io_hash_bits_0 = VL_RAND_RESET_Q(64);
    vlSelf->io_hash_bits_1 = VL_RAND_RESET_Q(64);
    vlSelf->io_hash_bits_2 = VL_RAND_RESET_Q(64);
    vlSelf->io_hash_bits_3 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round = VL_RAND_RESET_I(5);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__encryptReady = VL_RAND_RESET_I(1);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__messageReady = VL_RAND_RESET_I(1);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_0 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_1 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_2 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_3 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_4 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_5 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_6 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_7 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_8 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_9 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_10 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_11 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_12 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_13 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_14 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_15 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_16 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_17 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_18 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_19 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_20 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_21 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_22 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_23 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_24 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__round = VL_RAND_RESET_I(5);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__roundsDone = VL_RAND_RESET_I(1);
    vlSelf->Sha3Accel__DOT__ctrl__DOT___GEN_25 = VL_RAND_RESET_I(1);
    vlSelf->Sha3Accel__DOT__ctrl__DOT___GEN_26 = VL_RAND_RESET_I(1);
    vlSelf->Sha3Accel__DOT__ctrl__DOT___round_T_1 = VL_RAND_RESET_I(5);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta_io_state_o_0 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_1 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_2 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_3 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_4 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_5 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_6 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_7 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_8 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_9 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_10 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_11 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_12 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_13 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_14 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_15 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_16 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_17 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_18 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_19 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_20 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_21 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_22 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_23 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_24 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_0 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_1 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_2 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_3 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_4 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_1 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_2 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_3 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_4 = VL_RAND_RESET_Q(64);
    vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__iota__DOT___GEN_20 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}

VL_ATTR_COLD void VSha3Accel___024root___configure_coverage(VSha3Accel___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VSha3Accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSha3Accel___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
