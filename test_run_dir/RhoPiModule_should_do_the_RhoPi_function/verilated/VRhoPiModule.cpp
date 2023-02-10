// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRhoPiModule.h"
#include "VRhoPiModule__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRhoPiModule::VRhoPiModule(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRhoPiModule__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_state_i_0{vlSymsp->TOP.io_state_i_0}
    , io_state_i_1{vlSymsp->TOP.io_state_i_1}
    , io_state_i_2{vlSymsp->TOP.io_state_i_2}
    , io_state_i_3{vlSymsp->TOP.io_state_i_3}
    , io_state_i_4{vlSymsp->TOP.io_state_i_4}
    , io_state_i_5{vlSymsp->TOP.io_state_i_5}
    , io_state_i_6{vlSymsp->TOP.io_state_i_6}
    , io_state_i_7{vlSymsp->TOP.io_state_i_7}
    , io_state_i_8{vlSymsp->TOP.io_state_i_8}
    , io_state_i_9{vlSymsp->TOP.io_state_i_9}
    , io_state_i_10{vlSymsp->TOP.io_state_i_10}
    , io_state_i_11{vlSymsp->TOP.io_state_i_11}
    , io_state_i_12{vlSymsp->TOP.io_state_i_12}
    , io_state_i_13{vlSymsp->TOP.io_state_i_13}
    , io_state_i_14{vlSymsp->TOP.io_state_i_14}
    , io_state_i_15{vlSymsp->TOP.io_state_i_15}
    , io_state_i_16{vlSymsp->TOP.io_state_i_16}
    , io_state_i_17{vlSymsp->TOP.io_state_i_17}
    , io_state_i_18{vlSymsp->TOP.io_state_i_18}
    , io_state_i_19{vlSymsp->TOP.io_state_i_19}
    , io_state_i_20{vlSymsp->TOP.io_state_i_20}
    , io_state_i_21{vlSymsp->TOP.io_state_i_21}
    , io_state_i_22{vlSymsp->TOP.io_state_i_22}
    , io_state_i_23{vlSymsp->TOP.io_state_i_23}
    , io_state_i_24{vlSymsp->TOP.io_state_i_24}
    , io_state_o_0{vlSymsp->TOP.io_state_o_0}
    , io_state_o_1{vlSymsp->TOP.io_state_o_1}
    , io_state_o_2{vlSymsp->TOP.io_state_o_2}
    , io_state_o_3{vlSymsp->TOP.io_state_o_3}
    , io_state_o_4{vlSymsp->TOP.io_state_o_4}
    , io_state_o_5{vlSymsp->TOP.io_state_o_5}
    , io_state_o_6{vlSymsp->TOP.io_state_o_6}
    , io_state_o_7{vlSymsp->TOP.io_state_o_7}
    , io_state_o_8{vlSymsp->TOP.io_state_o_8}
    , io_state_o_9{vlSymsp->TOP.io_state_o_9}
    , io_state_o_10{vlSymsp->TOP.io_state_o_10}
    , io_state_o_11{vlSymsp->TOP.io_state_o_11}
    , io_state_o_12{vlSymsp->TOP.io_state_o_12}
    , io_state_o_13{vlSymsp->TOP.io_state_o_13}
    , io_state_o_14{vlSymsp->TOP.io_state_o_14}
    , io_state_o_15{vlSymsp->TOP.io_state_o_15}
    , io_state_o_16{vlSymsp->TOP.io_state_o_16}
    , io_state_o_17{vlSymsp->TOP.io_state_o_17}
    , io_state_o_18{vlSymsp->TOP.io_state_o_18}
    , io_state_o_19{vlSymsp->TOP.io_state_o_19}
    , io_state_o_20{vlSymsp->TOP.io_state_o_20}
    , io_state_o_21{vlSymsp->TOP.io_state_o_21}
    , io_state_o_22{vlSymsp->TOP.io_state_o_22}
    , io_state_o_23{vlSymsp->TOP.io_state_o_23}
    , io_state_o_24{vlSymsp->TOP.io_state_o_24}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VRhoPiModule::VRhoPiModule(const char* _vcname__)
    : VRhoPiModule(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRhoPiModule::~VRhoPiModule() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VRhoPiModule___024root___eval_initial(VRhoPiModule___024root* vlSelf);
void VRhoPiModule___024root___eval_settle(VRhoPiModule___024root* vlSelf);
void VRhoPiModule___024root___eval(VRhoPiModule___024root* vlSelf);
#ifdef VL_DEBUG
void VRhoPiModule___024root___eval_debug_assertions(VRhoPiModule___024root* vlSelf);
#endif  // VL_DEBUG
void VRhoPiModule___024root___final(VRhoPiModule___024root* vlSelf);

static void _eval_initial_loop(VRhoPiModule__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VRhoPiModule___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VRhoPiModule___024root___eval_settle(&(vlSymsp->TOP));
        VRhoPiModule___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VRhoPiModule::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRhoPiModule::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRhoPiModule___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VRhoPiModule___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VRhoPiModule::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VRhoPiModule::final() {
    VRhoPiModule___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRhoPiModule::hierName() const { return vlSymsp->name(); }
const char* VRhoPiModule::modelName() const { return "VRhoPiModule"; }
unsigned VRhoPiModule::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VRhoPiModule::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VRhoPiModule___024root__trace_init_top(VRhoPiModule___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRhoPiModule___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRhoPiModule___024root*>(voidSelf);
    VRhoPiModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VRhoPiModule___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VRhoPiModule___024root__trace_register(VRhoPiModule___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRhoPiModule::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VRhoPiModule::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRhoPiModule___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
