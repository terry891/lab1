// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VRhoPiModule__Syms.h"
#include "VRhoPiModule.h"
#include "VRhoPiModule___024root.h"

// FUNCTIONS
VRhoPiModule__Syms::~VRhoPiModule__Syms()
{
}

VRhoPiModule__Syms::VRhoPiModule__Syms(VerilatedContext* contextp, const char* namep, VRhoPiModule* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
