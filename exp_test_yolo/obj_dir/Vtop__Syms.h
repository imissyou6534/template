// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop_dequant_cell.h"
#include "Vtop_w_buffer_unit.h"
#include "Vtop_conv_unit.h"
#include "Vtop_compare_line_unit.h"
#include "Vtop_activationFuncDataCell.h"
#include "Vtop_linebuf_unit_extend.h"
#include "Vtop_conv_win_3_3.h"
#include "Vtop_FP32_Adder.h"

// SYMS CLASS (contains all model state)
class Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop_conv_unit                 TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_0;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_1;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_2;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_3;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_4;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_5;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_6;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_7;
    Vtop_conv_unit                 TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__conv_33_0;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__conv_33_1;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__conv_33_2;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__conv_33_3;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__conv_33_4;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__conv_33_5;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__conv_33_6;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__conv_33_7;
    Vtop_conv_unit                 TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__conv_33_0;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__conv_33_1;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__conv_33_2;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__conv_33_3;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__conv_33_4;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__conv_33_5;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__conv_33_6;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__conv_33_7;
    Vtop_conv_unit                 TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__conv_33_0;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__conv_33_1;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__conv_33_2;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__conv_33_3;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__conv_33_4;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__conv_33_5;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__conv_33_6;
    Vtop_conv_win_3_3              TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__conv_33_7;
    Vtop_linebuf_unit_extend       TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0__DOT__line_0;
    Vtop_linebuf_unit_extend       TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0__DOT__line_1;
    Vtop_linebuf_unit_extend       TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1__DOT__line_0;
    Vtop_linebuf_unit_extend       TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1__DOT__line_1;
    Vtop_linebuf_unit_extend       TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2__DOT__line_0;
    Vtop_linebuf_unit_extend       TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2__DOT__line_1;
    Vtop_linebuf_unit_extend       TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3__DOT__line_0;
    Vtop_linebuf_unit_extend       TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3__DOT__line_1;
    Vtop_linebuf_unit_extend       TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4__DOT__line_0;
    Vtop_linebuf_unit_extend       TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4__DOT__line_1;
    Vtop_linebuf_unit_extend       TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5__DOT__line_0;
    Vtop_linebuf_unit_extend       TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5__DOT__line_1;
    Vtop_linebuf_unit_extend       TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6__DOT__line_0;
    Vtop_linebuf_unit_extend       TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6__DOT__line_1;
    Vtop_linebuf_unit_extend       TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7__DOT__line_0;
    Vtop_linebuf_unit_extend       TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7__DOT__line_1;
    Vtop_compare_line_unit         TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_0;
    Vtop_compare_line_unit         TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_1;
    Vtop_compare_line_unit         TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_2;
    Vtop_compare_line_unit         TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_3;
    Vtop_compare_line_unit         TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_4;
    Vtop_compare_line_unit         TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_5;
    Vtop_compare_line_unit         TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_6;
    Vtop_compare_line_unit         TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_7;
    Vtop_w_buffer_unit             TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_0;
    Vtop_w_buffer_unit             TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_1;
    Vtop_w_buffer_unit             TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_2;
    Vtop_w_buffer_unit             TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_3;
    Vtop_w_buffer_unit             TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_4;
    Vtop_w_buffer_unit             TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_5;
    Vtop_w_buffer_unit             TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_6;
    Vtop_w_buffer_unit             TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_7;
    Vtop_activationFuncDataCell    TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__axx_bx_c_adder;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__io_o_data_adder;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__x_b_and_c_adder;
    Vtop_activationFuncDataCell    TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__axx_bx_c_adder;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__io_o_data_adder;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__x_b_and_c_adder;
    Vtop_activationFuncDataCell    TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__axx_bx_c_adder;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__io_o_data_adder;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__x_b_and_c_adder;
    Vtop_activationFuncDataCell    TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder;
    Vtop_activationFuncDataCell    TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder;
    Vtop_activationFuncDataCell    TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder;
    Vtop_activationFuncDataCell    TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder;
    Vtop_activationFuncDataCell    TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_0_adder;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_1_adder;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_2_adder;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_3_adder;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_4_adder;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_5_adder;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_6_adder;
    Vtop_FP32_Adder                TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_7_adder;
    Vtop_dequant_cell              TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0;
    Vtop_dequant_cell              TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1;
    Vtop_dequant_cell              TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2;
    Vtop_dequant_cell              TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3;
    Vtop_dequant_cell              TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4;
    Vtop_dequant_cell              TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5;
    Vtop_dequant_cell              TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6;
    Vtop_dequant_cell              TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7;
    Vtop_dequant_cell              TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_0;
    Vtop_dequant_cell              TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_1;
    Vtop_dequant_cell              TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_2;
    Vtop_dequant_cell              TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_3;
    Vtop_dequant_cell              TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_4;
    Vtop_dequant_cell              TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_5;
    Vtop_dequant_cell              TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_6;
    Vtop_dequant_cell              TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_7;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
