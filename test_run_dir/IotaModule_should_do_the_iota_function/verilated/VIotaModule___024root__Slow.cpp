// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIotaModule.h for the primary calling header

#include "verilated.h"

#include "VIotaModule__Syms.h"
#include "VIotaModule___024root.h"

void VIotaModule___024root___ctor_var_reset(VIotaModule___024root* vlSelf);

VIotaModule___024root::VIotaModule___024root(VIotaModule__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VIotaModule___024root___ctor_var_reset(this);
}

void VIotaModule___024root___configure_coverage(VIotaModule___024root* vlSelf, bool first);

void VIotaModule___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    VIotaModule___024root___configure_coverage(this, first);
}

VIotaModule___024root::~VIotaModule___024root() {
}

// Coverage
void VIotaModule___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
