// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTHETAMODULE_H_
#define VERILATED_VTHETAMODULE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class VThetaModule__Syms;
class VThetaModule___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class VThetaModule VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VThetaModule__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_IN64(&io_state_i_0,63,0);
    VL_IN64(&io_state_i_1,63,0);
    VL_IN64(&io_state_i_2,63,0);
    VL_IN64(&io_state_i_3,63,0);
    VL_IN64(&io_state_i_4,63,0);
    VL_IN64(&io_state_i_5,63,0);
    VL_IN64(&io_state_i_6,63,0);
    VL_IN64(&io_state_i_7,63,0);
    VL_IN64(&io_state_i_8,63,0);
    VL_IN64(&io_state_i_9,63,0);
    VL_IN64(&io_state_i_10,63,0);
    VL_IN64(&io_state_i_11,63,0);
    VL_IN64(&io_state_i_12,63,0);
    VL_IN64(&io_state_i_13,63,0);
    VL_IN64(&io_state_i_14,63,0);
    VL_IN64(&io_state_i_15,63,0);
    VL_IN64(&io_state_i_16,63,0);
    VL_IN64(&io_state_i_17,63,0);
    VL_IN64(&io_state_i_18,63,0);
    VL_IN64(&io_state_i_19,63,0);
    VL_IN64(&io_state_i_20,63,0);
    VL_IN64(&io_state_i_21,63,0);
    VL_IN64(&io_state_i_22,63,0);
    VL_IN64(&io_state_i_23,63,0);
    VL_IN64(&io_state_i_24,63,0);
    VL_OUT64(&io_state_o_0,63,0);
    VL_OUT64(&io_state_o_1,63,0);
    VL_OUT64(&io_state_o_2,63,0);
    VL_OUT64(&io_state_o_3,63,0);
    VL_OUT64(&io_state_o_4,63,0);
    VL_OUT64(&io_state_o_5,63,0);
    VL_OUT64(&io_state_o_6,63,0);
    VL_OUT64(&io_state_o_7,63,0);
    VL_OUT64(&io_state_o_8,63,0);
    VL_OUT64(&io_state_o_9,63,0);
    VL_OUT64(&io_state_o_10,63,0);
    VL_OUT64(&io_state_o_11,63,0);
    VL_OUT64(&io_state_o_12,63,0);
    VL_OUT64(&io_state_o_13,63,0);
    VL_OUT64(&io_state_o_14,63,0);
    VL_OUT64(&io_state_o_15,63,0);
    VL_OUT64(&io_state_o_16,63,0);
    VL_OUT64(&io_state_o_17,63,0);
    VL_OUT64(&io_state_o_18,63,0);
    VL_OUT64(&io_state_o_19,63,0);
    VL_OUT64(&io_state_o_20,63,0);
    VL_OUT64(&io_state_o_21,63,0);
    VL_OUT64(&io_state_o_22,63,0);
    VL_OUT64(&io_state_o_23,63,0);
    VL_OUT64(&io_state_o_24,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VThetaModule___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VThetaModule(VerilatedContext* contextp, const char* name = "TOP");
    explicit VThetaModule(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VThetaModule();
  private:
    VL_UNCOPYABLE(VThetaModule);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
