// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_H_
#define VERILATED_VTOP_H_  // guard

#include "verilated.h"

class Vtop__Syms;
class Vtop___024root;
class VerilatedFstC;
class Vtop_FP32_Adder;
class Vtop_w_buffer_unit;
class Vtop_linebuf_unit_extend;
class Vtop_conv_unit;
class Vtop_compare_line_unit;
class Vtop_dequant_cell;
class Vtop_activationFuncDataCell;


// This class is the main interface to the Verilated model
class Vtop VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtop__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_OUT8(&resize_load,0,0);
    VL_OUT8(&yolo_finish,0,0);
    VL_OUT8(&conv_finish,0,0);
    VL_OUT8(&dma_rareq,0,0);
    VL_IN8(&dma_rbusy,0,0);
    VL_IN8(&dma_rvalid,0,0);
    VL_OUT8(&dma_rready,0,0);
    VL_OUT8(&dma_wareq,0,0);
    VL_IN8(&dma_wbusy,0,0);
    VL_OUT8(&dma_wvalid,0,0);
    VL_IN8(&dma_wready,0,0);
    VL_OUT16(&dma_rsize,15,0);
    VL_OUT16(&dma_wsize,15,0);
    VL_OUT(&dma_raddr,31,0);
    VL_OUT(&dma_waddr,31,0);
    VL_IN64(&dma_rdata,63,0);
    VL_OUT64(&dma_wdata,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtop_FP32_Adder* const __PVT__top__DOT__u_Accel_all__DOT__bn_add_float_result_0_adder;
    Vtop_FP32_Adder* const __PVT__top__DOT__u_Accel_all__DOT__bn_add_float_result_1_adder;
    Vtop_FP32_Adder* const __PVT__top__DOT__u_Accel_all__DOT__bn_add_float_result_2_adder;
    Vtop_FP32_Adder* const __PVT__top__DOT__u_Accel_all__DOT__bn_add_float_result_3_adder;
    Vtop_FP32_Adder* const __PVT__top__DOT__u_Accel_all__DOT__bn_add_float_result_4_adder;
    Vtop_FP32_Adder* const __PVT__top__DOT__u_Accel_all__DOT__bn_add_float_result_5_adder;
    Vtop_FP32_Adder* const __PVT__top__DOT__u_Accel_all__DOT__bn_add_float_result_6_adder;
    Vtop_FP32_Adder* const __PVT__top__DOT__u_Accel_all__DOT__bn_add_float_result_7_adder;
    Vtop_w_buffer_unit* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_0;
    Vtop_w_buffer_unit* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_1;
    Vtop_w_buffer_unit* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_2;
    Vtop_w_buffer_unit* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_3;
    Vtop_w_buffer_unit* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_4;
    Vtop_w_buffer_unit* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_5;
    Vtop_w_buffer_unit* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_6;
    Vtop_w_buffer_unit* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_7;
    Vtop_linebuf_unit_extend* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0__DOT__line_0;
    Vtop_linebuf_unit_extend* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0__DOT__line_1;
    Vtop_linebuf_unit_extend* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1__DOT__line_0;
    Vtop_linebuf_unit_extend* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1__DOT__line_1;
    Vtop_linebuf_unit_extend* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2__DOT__line_0;
    Vtop_linebuf_unit_extend* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2__DOT__line_1;
    Vtop_linebuf_unit_extend* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3__DOT__line_0;
    Vtop_linebuf_unit_extend* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3__DOT__line_1;
    Vtop_linebuf_unit_extend* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4__DOT__line_0;
    Vtop_linebuf_unit_extend* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4__DOT__line_1;
    Vtop_linebuf_unit_extend* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5__DOT__line_0;
    Vtop_linebuf_unit_extend* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5__DOT__line_1;
    Vtop_linebuf_unit_extend* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6__DOT__line_0;
    Vtop_linebuf_unit_extend* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6__DOT__line_1;
    Vtop_linebuf_unit_extend* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7__DOT__line_0;
    Vtop_linebuf_unit_extend* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7__DOT__line_1;
    Vtop_conv_unit* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0;
    Vtop_conv_unit* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1;
    Vtop_conv_unit* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2;
    Vtop_conv_unit* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3;
    Vtop_compare_line_unit* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_0;
    Vtop_compare_line_unit* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_1;
    Vtop_compare_line_unit* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_2;
    Vtop_compare_line_unit* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_3;
    Vtop_compare_line_unit* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_4;
    Vtop_compare_line_unit* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_5;
    Vtop_compare_line_unit* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_6;
    Vtop_compare_line_unit* const __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_7;
    Vtop_dequant_cell* const __PVT__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0;
    Vtop_dequant_cell* const __PVT__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1;
    Vtop_dequant_cell* const __PVT__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2;
    Vtop_dequant_cell* const __PVT__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3;
    Vtop_dequant_cell* const __PVT__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4;
    Vtop_dequant_cell* const __PVT__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5;
    Vtop_dequant_cell* const __PVT__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6;
    Vtop_dequant_cell* const __PVT__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7;
    Vtop_dequant_cell* const __PVT__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_0;
    Vtop_dequant_cell* const __PVT__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_1;
    Vtop_dequant_cell* const __PVT__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_2;
    Vtop_dequant_cell* const __PVT__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_3;
    Vtop_dequant_cell* const __PVT__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_4;
    Vtop_dequant_cell* const __PVT__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_5;
    Vtop_dequant_cell* const __PVT__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_6;
    Vtop_dequant_cell* const __PVT__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_7;
    Vtop_activationFuncDataCell* const __PVT__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell;
    Vtop_activationFuncDataCell* const __PVT__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1;
    Vtop_activationFuncDataCell* const __PVT__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2;
    Vtop_activationFuncDataCell* const __PVT__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3;
    Vtop_activationFuncDataCell* const __PVT__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4;
    Vtop_activationFuncDataCell* const __PVT__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5;
    Vtop_activationFuncDataCell* const __PVT__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6;
    Vtop_activationFuncDataCell* const __PVT__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtop(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtop();
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed

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
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedFstC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
