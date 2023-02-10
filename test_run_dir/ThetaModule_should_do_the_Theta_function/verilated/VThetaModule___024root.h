// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VThetaModule.h for the primary calling header

#ifndef VERILATED_VTHETAMODULE___024ROOT_H_
#define VERILATED_VTHETAMODULE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class VThetaModule__Syms;

class VThetaModule___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN64(io_state_i_0,63,0);
    VL_IN64(io_state_i_1,63,0);
    VL_IN64(io_state_i_2,63,0);
    VL_IN64(io_state_i_3,63,0);
    VL_IN64(io_state_i_4,63,0);
    VL_IN64(io_state_i_5,63,0);
    VL_IN64(io_state_i_6,63,0);
    VL_IN64(io_state_i_7,63,0);
    VL_IN64(io_state_i_8,63,0);
    VL_IN64(io_state_i_9,63,0);
    VL_IN64(io_state_i_10,63,0);
    VL_IN64(io_state_i_11,63,0);
    VL_IN64(io_state_i_12,63,0);
    VL_IN64(io_state_i_13,63,0);
    VL_IN64(io_state_i_14,63,0);
    VL_IN64(io_state_i_15,63,0);
    VL_IN64(io_state_i_16,63,0);
    VL_IN64(io_state_i_17,63,0);
    VL_IN64(io_state_i_18,63,0);
    VL_IN64(io_state_i_19,63,0);
    VL_IN64(io_state_i_20,63,0);
    VL_IN64(io_state_i_21,63,0);
    VL_IN64(io_state_i_22,63,0);
    VL_IN64(io_state_i_23,63,0);
    VL_IN64(io_state_i_24,63,0);
    VL_OUT64(io_state_o_0,63,0);
    VL_OUT64(io_state_o_1,63,0);
    VL_OUT64(io_state_o_2,63,0);
    VL_OUT64(io_state_o_3,63,0);
    VL_OUT64(io_state_o_4,63,0);
    VL_OUT64(io_state_o_5,63,0);
    VL_OUT64(io_state_o_6,63,0);
    VL_OUT64(io_state_o_7,63,0);
    VL_OUT64(io_state_o_8,63,0);
    VL_OUT64(io_state_o_9,63,0);
    VL_OUT64(io_state_o_10,63,0);
    VL_OUT64(io_state_o_11,63,0);
    VL_OUT64(io_state_o_12,63,0);
    VL_OUT64(io_state_o_13,63,0);
    VL_OUT64(io_state_o_14,63,0);
    VL_OUT64(io_state_o_15,63,0);
    VL_OUT64(io_state_o_16,63,0);
    VL_OUT64(io_state_o_17,63,0);
    VL_OUT64(io_state_o_18,63,0);
    VL_OUT64(io_state_o_19,63,0);
    VL_OUT64(io_state_o_20,63,0);
    VL_OUT64(io_state_o_21,63,0);
    VL_OUT64(io_state_o_22,63,0);
    VL_OUT64(io_state_o_23,63,0);
    VL_OUT64(io_state_o_24,63,0);
    QData/*63:0*/ ThetaModule__DOT__intermediate_states_0;
    QData/*63:0*/ ThetaModule__DOT__intermediate_states_1;
    QData/*63:0*/ ThetaModule__DOT__intermediate_states_2;
    QData/*63:0*/ ThetaModule__DOT__intermediate_states_3;
    QData/*63:0*/ ThetaModule__DOT__intermediate_states_4;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VThetaModule__Syms* const vlSymsp;

    // CONSTRUCTORS
    VThetaModule___024root(VThetaModule__Syms* symsp, const char* name);
    ~VThetaModule___024root();
    VL_UNCOPYABLE(VThetaModule___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
