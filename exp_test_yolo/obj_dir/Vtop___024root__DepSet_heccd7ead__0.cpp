// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__u_Accel_all__DOT__dma_ddr2accel__DOT__clr 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->top__DOT__u_Accel_all__DOT__dma_ddr2accel__DOT__dma_rbusy_downedge));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__clr_pool 
        = ((IData)(vlSelf->reset) | ((0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__state)) 
                                     | (3U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__state))));
    vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT___T_1 
        = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit_io_yolo_layer_finish) 
           | (IData)(vlSelf->reset));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__rst 
        = (1U & (((~ (IData)(vlSelf->top__DOT__u_Accel_all__DOT__weightbuf_waddr_clear_REG)) 
                  & (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0 
                     >> 9U)) | (IData)(vlSelf->reset)));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bias_buf__DOT__rst 
        = (1U & (((~ (IData)(vlSelf->top__DOT__u_Accel_all__DOT__biasbuf_waddr_clear_REG)) 
                  & (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0 
                     >> 9U)) | (IData)(vlSelf->reset)));
    if (vlSelf->reset) {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2860 = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2863 = 0U;
    } else if ((0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2860 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2863 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred;
    } else if ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2860 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2863 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred;
    } else if ((2U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2860 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2863 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred;
    } else if ((3U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2860 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2863 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred;
    } else if ((4U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2860 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2863 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred;
    } else if ((5U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2860 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2863 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred;
    } else if ((6U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2860 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2863 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred;
    } else if ((7U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2860 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2863 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred;
    } else {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2860 
            = ((8U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                : ((9U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                    : ((0xaU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                        : ((0xbU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                            : ((0xcU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                : ((0xdU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                    : vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1294))))));
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2863 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1515;
    }
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*1:0*/ __Vdly__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__state;
    __Vdly__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__state = 0;
    CData/*0:0*/ __Vdly__top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bn_add_working;
    __Vdly__top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bn_add_working = 0;
    CData/*0:0*/ __Vdly__top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__current_is_singal_or_double;
    __Vdly__top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__current_is_singal_or_double = 0;
    // Body
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__ofm__DOT__TPRAM_WRAP__DOT__tpram_QA 
        = vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__ofm__DOT__TPRAM_WRAP__DOT__tpram__DOT__mem
        [(0xfffU & (IData)(((IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_work)
                             ? (QData)((IData)((0xfffU 
                                                & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__ofm_base_read_addr) 
                                                   + (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__ofm_offset_read_addr)))))
                             : ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bottleneck_work)
                                 ? (QData)((IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__ofm_read_addr))
                                 : (QData)((IData)(
                                                   (0xfffU 
                                                    & ((0x10000U 
                                                        & vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_8)
                                                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__io_ofm_read_addr_r_1)
                                                        : 
                                                       (vlSelf->top__DOT__u_Accel_all__DOT__dma_accel2ddr__DOT__addr 
                                                        + (IData)(vlSelf->top__DOT__u_Accel_all__DOT___addr_start_T_1))))))))))];
    if (vlSelf->reset) {
        vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_0 = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_1 = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_2 = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_3 = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__dequant_extra_scala = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__dequant_extra_zero_point = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__dequant_extra_scala_temp = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__dequant_extra_zero_point_temp = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__dma_accel2ddr__DOT__addr = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__ofm_base_read_addr = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__io_ofm_read_addr_r_1 = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__col_cnt = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__row_cnt = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__ifm_read_addr_singal = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__ifm_read_addr_double = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__ofm_read_addr = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__pool_cnt = 0U;
        __Vdly__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__state = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__io_ofm_read_addr_r = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_8 = 0U;
    } else {
        if (vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT___cfg_T) {
            if ((0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__alu_act_param_select_io_act_op))) {
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_0 = 0U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_1 = 0U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_2 = 0U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_3 = 0U;
            } else if ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__alu_act_param_select_io_act_op))) {
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_0 = 0U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_1 = 0xbc23b9f9U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_2 = 0x3e490809U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_3 = 0xbc23b9f9U;
            } else if ((2U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__alu_act_param_select_io_act_op))) {
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_0 = 0xbce448c5U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_1 = 0xbd3f460cU;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_2 = 0xbc718b08U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_3 = 0xba64a034U;
            } else {
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_0 = 0U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_1 = 0U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_2 = 0U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_3 = 0U;
            }
        }
        if (vlSelf->conv_finish) {
            vlSelf->top__DOT__u_Accel_all__DOT__dequant_extra_scala 
                = vlSelf->top__DOT__u_Accel_all__DOT__dequant_extra_scala_temp;
            vlSelf->top__DOT__u_Accel_all__DOT__dequant_extra_zero_point 
                = vlSelf->top__DOT__u_Accel_all__DOT__dequant_extra_zero_point_temp;
            vlSelf->top__DOT__u_Accel_all__DOT__dequant_extra_scala_temp 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9;
            vlSelf->top__DOT__u_Accel_all__DOT__dequant_extra_zero_point_temp 
                = (0xffU & (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_2 
                            >> 8U));
        }
        if (vlSelf->top__DOT__u_Accel_all__DOT__dma_accel2ddr__DOT__last) {
            vlSelf->top__DOT__u_Accel_all__DOT__dma_accel2ddr__DOT__addr = 0U;
        } else if (vlSelf->top__DOT__u_Accel_all__DOT__dma_accel2ddr__DOT__addr_en) {
            vlSelf->top__DOT__u_Accel_all__DOT__dma_accel2ddr__DOT__addr 
                = vlSelf->top__DOT__u_Accel_all__DOT__dma_accel2ddr__DOT___addr_T_1;
        }
        vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__ofm_base_read_addr 
            = (0x7ffU & ((IData)(0x190U) * (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__pool_cnt)));
        if ((0x10000U & vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_8)) {
            vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__io_ofm_read_addr_r_1 
                = vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__io_ofm_read_addr_r;
            vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__io_ofm_read_addr_r 
                = (0xfffU & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__anchor_cnt_reg) 
                             >> 1U));
        }
        if (vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bn_add_working) {
            vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__col_cnt 
                = (((IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__col_cnt) 
                    == (0x3ffU & (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_8 
                                  - (IData)(1U)))) ? 0U
                    : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT___col_cnt_T_4));
            if (vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT___col_cnt_T_2) {
                vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__row_cnt 
                    = vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT___row_cnt_T_4;
            }
            if (vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT___current_is_singal_or_double_T_3) {
                vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__ifm_read_addr_singal 
                    = vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT___ifm_read_addr_singal_T_1;
            }
            if (vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__current_is_singal_or_double) {
                vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__ifm_read_addr_double 
                    = vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT___ifm_read_addr_double_T_1;
            }
            vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__ofm_read_addr 
                = vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT___ofm_read_addr_T_1;
        } else {
            vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__col_cnt = 0U;
            vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__row_cnt = 0U;
            vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__ifm_read_addr_singal = 0U;
            vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__ifm_read_addr_double = 0U;
            vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__ofm_read_addr = 0U;
        }
        if ((0U != (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__state))) {
            if ((1U != (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__state))) {
                if ((3U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__state))) {
                    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__pool_cnt 
                        = vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT___GEN_2;
                }
            }
        }
        __Vdly__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__state 
            = ((0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__state))
                ? ((1U & ((~ (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__pool_enable_upedge_REG)) 
                          & (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0 
                             >> 5U))) ? 1U : 0U) : 
               ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__state))
                 ? ((((IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__row_cnt) 
                      == (0x3ffU & ((IData)(4U) + (
                                                   (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0 
                                                    >> 0x18U) 
                                                   - (IData)(1U))))) 
                     & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__last_data_of_row))
                     ? 3U : 1U) : ((3U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__state))
                                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT___GEN_3)
                                    : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT___GEN_5))));
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_8 
            = ((0x300000U & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cin) 
                             << 0x11U)) | (((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cnt_detect_cls) 
                                            << 0x12U) 
                                           | ((0x20000U 
                                               & ((~ 
                                                   ((~ (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_ready)) 
                                                    & (1U 
                                                       == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___iter_ifm_post_t_T_1)))) 
                                                  << 0x11U)) 
                                              | (((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___skip_act_T_3) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt) 
                                                     << 0xaU) 
                                                    | (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_col))))));
    }
    if (vlSelf->__Vdlyvset__top__DOT__u_Accel_all__DOT__accel_top__DOT__ofm__DOT__TPRAM_WRAP__DOT__tpram__DOT__mem__v0) {
        vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__ofm__DOT__TPRAM_WRAP__DOT__tpram__DOT__mem[vlSelf->__Vdlyvdim0__top__DOT__u_Accel_all__DOT__accel_top__DOT__ofm__DOT__TPRAM_WRAP__DOT__tpram__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__top__DOT__u_Accel_all__DOT__accel_top__DOT__ofm__DOT__TPRAM_WRAP__DOT__tpram__DOT__mem__v0;
    }
    vlSelf->dma_wdata = vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__ofm__DOT__TPRAM_WRAP__DOT__tpram_QA;
    if (vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__clr_pool) {
        vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__ofm_offset_read_addr = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__row_cnt = 0U;
    } else {
        if (((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__state)) 
             & (~ (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__zero_enable_wire)))) {
            vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__ofm_offset_read_addr 
                = vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT___ofm_offset_read_addr_T_1;
        }
        if ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__state))) {
            if (vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__last_data_of_row) {
                vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__row_cnt 
                    = vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT___row_cnt_T_1;
            }
        }
    }
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_work 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((~ (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__pool_enable_upedge_REG)) 
                                                & (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0 
                                                   >> 5U)) 
                                               | (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT___pool_work_T_4))));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bottleneck_work 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((~ (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bottleneck_work_REG)) 
                                                & (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0 
                                                   >> 0x13U)) 
                                               | (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT___bottleneck_work_T_4))));
    __Vdly__top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bn_add_working 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bn_finish)) 
                                               & (((~ (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bottleneck_work_REG)) 
                                                   & (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0 
                                                      >> 0x13U)) 
                                                  | (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bn_add_working)))));
    __Vdly__top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__current_is_singal_or_double 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bn_add_working) 
                                         & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT___current_is_singal_or_double_T_4)));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__ofm_en_write_r 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bn_add_working));
    vlSelf->top__DOT__u_Accel_all__DOT__dma_accel2ddr__DOT__addr_en 
        = ((3U < (IData)(vlSelf->top__DOT__u_Accel_all__DOT__dma_accel2ddr__DOT__addr_cnt)) 
           & (0x104U > (IData)(vlSelf->top__DOT__u_Accel_all__DOT__dma_accel2ddr__DOT__addr_cnt)));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bn_add_working 
        = __Vdly__top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bn_add_working;
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__current_is_singal_or_double 
        = __Vdly__top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__current_is_singal_or_double;
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT___ofm_offset_read_addr_T_1 
        = (0xfffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__ofm_offset_read_addr)));
    vlSelf->top__DOT__u_Accel_all__DOT__dma_accel2ddr__DOT___addr_T_1 
        = (0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__u_Accel_all__DOT__dma_accel2ddr__DOT__addr));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT___ofm_read_addr_T_1 
        = (0xfffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__ofm_read_addr)));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT___row_cnt_T_4 
        = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__row_cnt)));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT___col_cnt_T_4 
        = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__col_cnt)));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT___ifm_read_addr_singal_T_1 
        = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__ifm_read_addr_singal)));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT___ifm_read_addr_double_T_1 
        = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__ifm_read_addr_double)));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT___current_is_singal_or_double_T_3 
        = (1U & (~ (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__current_is_singal_or_double)));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__ifm_read_addr 
        = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__current_is_singal_or_double)
            ? (0x800U | (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__ifm_read_addr_double))
            : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__ifm_read_addr_singal));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bottleneck_work_REG 
        = (1U & ((~ (IData)(vlSelf->reset)) & (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0 
                                               >> 0x13U)));
    vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__anchor_cnt_reg 
        = vlSelf->__Vdly__top__DOT__u_Accel_all__DOT__yolo__DOT__anchor_cnt_reg;
    if ((2U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__pool_cnt))) {
        vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT___GEN_2 = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT___GEN_3 = 2U;
    } else {
        vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT___GEN_2 
            = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__pool_cnt)));
        vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT___GEN_3 = 1U;
    }
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__pool_enable_upedge_REG 
        = (1U & ((~ (IData)(vlSelf->reset)) & (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0 
                                               >> 5U)));
    vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT___anchor_cnt_reg_T_5 
        = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__anchor_cnt_reg)));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__state 
        = __Vdly__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__state;
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cnt_detect_cls 
        = vlSelf->__Vdly__top__DOT__u_Accel_all__DOT__control__DOT__cnt_detect_cls;
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT___row_cnt_T_1 
        = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__row_cnt)));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT___GEN_5 
        = ((2U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__state))
            ? ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__write_last_data)
                ? 0U : 2U) : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__state));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__clr_pool 
        = ((IData)(vlSelf->reset) | ((0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__state)) 
                                     | (3U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__state))));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl_io_pool_finish 
        = ((2U != (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__state)) 
           & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__io_pool_finish_REG));
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___cnt_detect_cls_T_4 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cnt_detect_cls)));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__last_data_of_row 
        = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__col_cnt) 
           == (0x3ffU & ((IData)(4U) + (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_8 
                                        - (IData)(1U)))));
    vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT___ofm_after_cmp_data_0_T 
        = ((vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_8 
            >> 0x10U) & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__ofm_write_en_after_r_3));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT___col_cnt_T_2 
        = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__col_cnt) 
           == (0x3ffU & (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_8 
                         - (IData)(1U))));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT___pool_work_T_4 
        = ((~ ((~ (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_work_REG_1)) 
               & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl_io_pool_finish))) 
           & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_work));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT___current_is_singal_or_double_T_4 
        = (1U & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT___col_cnt_T_2)
                  ? (~ (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__current_is_singal_or_double))
                  : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__current_is_singal_or_double)));
    vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__anchor_number 
        = ((0U == (3U & (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_8 
                         >> 0x12U))) ? 0x1900U : ((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_8 
                                                       >> 0x12U)))
                                                   ? 0x640U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_8 
                                                        >> 0x12U)))
                                                    ? 0x190U
                                                    : 0U)));
    vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT___yolo_cls_finish_T_2 
        = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__io_ofm_write_addr_after_REG) 
           == (0x1fffU & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__anchor_number) 
                          - (IData)(1U))));
    vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__yolo_cls_finish 
        = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__io_ofm_write_en_after_REG) 
           & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT___yolo_cls_finish_T_2));
    vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit_io_yolo_layer_finish 
        = ((0U == (3U & (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_8 
                         >> 0x12U))) ? ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__io_ofm_write_en_after_REG) 
                                        & ((0xe5fU 
                                            == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__io_ofm_write_addr_after_REG)) 
                                           | (IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT___yolo_cls_finish_T_2)))
            : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__yolo_cls_finish));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__sigmoid_en 
        = (IData)((0x910000U == (0xf10000U & vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_8)));
    if (vlSelf->reset) {
        vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_0 = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_1 = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_2 = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_3 = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_4 = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_0 = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_1 = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_2 = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_3 = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_4 = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__cmp2__DOT__max_data = 0U;
    } else {
        if (vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT___cfg_T) {
            if ((0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__alu_act_param_select_io_act_op))) {
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_0 = 0U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_1 = 0U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_2 = 0U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_3 = 0U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_4 = 0U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_0 = 0U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_1 = 0U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_2 = 0U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_3 = 0U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_4 = 0U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop = 0U;
            } else if ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__alu_act_param_select_io_act_op))) {
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_0 = 0U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_1 = 0xbeebfcc8U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_2 = 0x3c9f42f6U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_3 = 0xbeebfcc8U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_4 = 0U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_0 = 0U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_1 = 0xbe0aaa59U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_2 = 0x3f000000U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_3 = 0x3f91554bU;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_4 = 0x3f800000U;
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop = 0U;
            } else {
                if ((2U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__alu_act_param_select_io_act_op))) {
                    vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_0 = 0x3eff9198U;
                    vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_1 = 0x3ef9f7f8U;
                    vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_2 = 0x3f2c00daU;
                    vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_3 = 0x3f731851U;
                    vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_4 = 0x3f800000U;
                    vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_0 = 0x3e855f24U;
                    vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_1 = 0x3e94471dU;
                    vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_2 = 0x3e0c5859U;
                    vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_3 = 0x3c583b73U;
                    vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop = 2U;
                } else {
                    vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_0 = 0U;
                    vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_1 = 0U;
                    vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_2 = 0U;
                    vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_3 = 0U;
                    vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_4 = 0U;
                    vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_0 = 0U;
                    vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_1 = 0U;
                    vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_2 = 0U;
                    vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_3 = 0U;
                    vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop = 0U;
                }
                vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_4 = 0U;
            }
            vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en 
                = vlSelf->top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc_io_cfg_act_en;
        }
        vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__cmp2__DOT__max_data 
            = vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp2_data_0;
    }
    if (vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT___T_1) {
        vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp2_data_0 = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp1_data_0 = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp1_data_1 = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp0_data_0 = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp0_data_1 = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp0_data_2 = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp0_data_3 = 0U;
    } else {
        vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp2_data_0 
            = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__select2_0)
                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp1_data_0)
                : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp1_data_1));
        vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp1_data_0 
            = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__select1_0)
                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp0_data_0)
                : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp0_data_1));
        vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp1_data_1 
            = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__select1_1)
                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp0_data_2)
                : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp0_data_3));
        vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp0_data_0 
            = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__select0_0)
                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__conv_data_0)
                : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__conv_data_1));
        vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp0_data_1 
            = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__select0_1)
                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__conv_data_2)
                : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__conv_data_3));
        vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp0_data_2 
            = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__select0_2)
                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__conv_data_4)
                : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__conv_data_5));
        vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp0_data_3 
            = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__select0_3)
                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__conv_data_6)
                : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__conv_data_7));
    }
    vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__select2_0 
        = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp1_data_0) 
           > (IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp1_data_1));
    vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT___T_1 
        = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit_io_yolo_layer_finish) 
           | (IData)(vlSelf->reset));
    vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__select1_0 
        = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp0_data_0) 
           > (IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp0_data_1));
    vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__select1_1 
        = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp0_data_2) 
           > (IData)(vlSelf->top__DOT__u_Accel_all__DOT__yolo__DOT__unit__DOT__temp0_data_3));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    // Init
    CData/*0:0*/ top__DOT__u_Accel_all__DOT__control__DOT___fm_div_output_T;
    top__DOT__u_Accel_all__DOT__control__DOT___fm_div_output_T = 0;
    IData/*19:0*/ top__DOT__u_Accel_all__DOT__control__DOT___reg_t_5_T_6;
    top__DOT__u_Accel_all__DOT__control__DOT___reg_t_5_T_6 = 0;
    CData/*0:0*/ top__DOT__u_Accel_all__DOT__control__DOT___T_13;
    top__DOT__u_Accel_all__DOT__control__DOT___T_13 = 0;
    IData/*31:0*/ top__DOT__u_Accel_all__DOT__control__DOT___ifm_addr_fmbase_T;
    top__DOT__u_Accel_all__DOT__control__DOT___ifm_addr_fmbase_T = 0;
    IData/*31:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_22;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_22 = 0;
    IData/*31:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_45;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_45 = 0;
    IData/*31:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_46;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_46 = 0;
    SData/*9:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_47;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_47 = 0;
    IData/*31:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_48;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_48 = 0;
    CData/*0:0*/ top__DOT__u_Accel_all__DOT__control__DOT___T_26;
    top__DOT__u_Accel_all__DOT__control__DOT___T_26 = 0;
    IData/*31:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_51;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_51 = 0;
    IData/*31:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_55;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_55 = 0;
    IData/*31:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_62;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_62 = 0;
    CData/*0:0*/ top__DOT__u_Accel_all__DOT__control__DOT___T_39;
    top__DOT__u_Accel_all__DOT__control__DOT___T_39 = 0;
    CData/*0:0*/ top__DOT__u_Accel_all__DOT__control__DOT___T_58;
    top__DOT__u_Accel_all__DOT__control__DOT___T_58 = 0;
    IData/*31:0*/ top__DOT__u_Accel_all__DOT__control__DOT___ofm_addr_fmbase_T;
    top__DOT__u_Accel_all__DOT__control__DOT___ofm_addr_fmbase_T = 0;
    IData/*31:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_84;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_84 = 0;
    IData/*18:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_85;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_85 = 0;
    CData/*0:0*/ top__DOT__u_Accel_all__DOT__control__DOT___T_67;
    top__DOT__u_Accel_all__DOT__control__DOT___T_67 = 0;
    CData/*0:0*/ top__DOT__u_Accel_all__DOT__control__DOT___bottleneck_transfer_T_1;
    top__DOT__u_Accel_all__DOT__control__DOT___bottleneck_transfer_T_1 = 0;
    CData/*0:0*/ top__DOT__u_Accel_all__DOT__control__DOT___T_71;
    top__DOT__u_Accel_all__DOT__control__DOT___T_71 = 0;
    SData/*12:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_92;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_92 = 0;
    SData/*12:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_93;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_93 = 0;
    SData/*12:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_95;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_95 = 0;
    SData/*12:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_96;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_96 = 0;
    IData/*31:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_131;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_131 = 0;
    IData/*21:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_132;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_132 = 0;
    SData/*9:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_148;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_148 = 0;
    IData/*25:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_150;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_150 = 0;
    CData/*2:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_151;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_151 = 0;
    CData/*0:0*/ top__DOT__u_Accel_all__DOT__control__DOT___wgt_ddr_read_en_T_6;
    top__DOT__u_Accel_all__DOT__control__DOT___wgt_ddr_read_en_T_6 = 0;
    CData/*5:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_480;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_480 = 0;
    IData/*25:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_686;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_686 = 0;
    IData/*31:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_724;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_724 = 0;
    CData/*0:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_768;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_768 = 0;
    IData/*31:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_795;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_795 = 0;
    CData/*2:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_797;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_797 = 0;
    IData/*31:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_825;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_825 = 0;
    SData/*9:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_882;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_882 = 0;
    IData/*31:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_923;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_923 = 0;
    CData/*0:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_953;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_953 = 0;
    IData/*31:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_955;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_955 = 0;
    IData/*31:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_956;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_956 = 0;
    CData/*5:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_987;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_987 = 0;
    SData/*12:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_1053;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_1053 = 0;
    SData/*12:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_1055;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_1055 = 0;
    SData/*12:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_1056;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_1056 = 0;
    CData/*0:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_1089;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_1089 = 0;
    SData/*12:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121 = 0;
    SData/*12:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122 = 0;
    SData/*12:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123 = 0;
    CData/*1:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_1144;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_1144 = 0;
    IData/*31:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_1393;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_1393 = 0;
    IData/*31:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_1433;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_1433 = 0;
    SData/*15:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_1448;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_1448 = 0;
    CData/*0:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_1545;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_1545 = 0;
    CData/*5:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_1554;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_1554 = 0;
    CData/*2:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_1584;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_1584 = 0;
    IData/*31:0*/ top__DOT__u_Accel_all__DOT__control__DOT___GEN_1600;
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_1600 = 0;
    // Body
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___ifm_ddr_base_addr_temp_c2f_one_T_5 
        = (0x7ffffffffULL & ((QData)((IData)((7U & 
                                              ((IData)(1U) 
                                               + (0xfU 
                                                  & (((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__conv_cnt_in_c2f) 
                                                      - (IData)(1U)) 
                                                     >> 1U)))))) 
                             * (QData)((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___c2f_size_half_T_21))));
    if ((0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_layer))) {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_size = 0x64000U;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___current_layer_repeats_T_21 = 1U;
    } else {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_size 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___fm_size_T_20;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___current_layer_repeats_T_21 
            = ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_layer))
                ? 1U : ((2U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_layer))
                         ? 1U : ((3U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_layer))
                                  ? 1U : ((4U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_layer))
                                           ? 2U : (
                                                   (5U 
                                                    == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_layer))
                                                    ? 1U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_layer))
                                                     ? 2U
                                                     : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___current_layer_repeats_T_14)))))));
    }
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___fm_div_col_T 
        = (0xffffU & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_div) 
                      * (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_col)));
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___ifm_send_len_T_1 
        = (0xffffU & ((0x3fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_res))) 
                      * (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_col)));
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___ifm_send_len_T_5 
        = (0xffffU & ((0x3fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_div))) 
                      * (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_col)));
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___ifm_ddr_base_addr_temp_T 
        = ((2U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code))
            ? ((0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cnt_in_sppf))
                ? 0x207d0000U : 0x20c80000U) : 0x20af0000U);
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___base_T_2 
        = (0x7fU & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__base) 
                    + ((4U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code))
                        ? 3U : ((3U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code))
                                 ? 3U : ((2U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code))
                                          ? 2U : (7U 
                                                  & ((1U 
                                                      == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code))
                                                      ? 
                                                     ((IData)(2U) 
                                                      + 
                                                      (((1U 
                                                         == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__c2f_cnt))
                                                         ? 6U
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__c2f_cnt))
                                                          ? 6U
                                                          : 3U)) 
                                                       << 1U))
                                                      : 
                                                     (0U 
                                                      == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code)))))))));
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_en 
        = ((2U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code)) 
           & (0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cnt_in_sppf)));
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___skip_act_T_1 
        = ((3U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code)) 
           & (2U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cnt_in_detect_box)));
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___upsample_en_T_1 
        = ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code)) 
           & (0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__conv_cnt_in_c2f)));
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___skip_act_T_3 
        = ((4U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code)) 
           & (2U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cnt_in_detect_cls)));
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT____VdfgTmp_hb55b1a29__0 
        = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre) 
           == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_div_cnt));
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___iter_div_pre_t_T_1 
        = (0x1fffU & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_div_cnt) 
                      - (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre)));
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___iter_div_post_t_T_1 
        = (0x1fffU & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_div_cnt) 
                      - (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post)));
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_batch_is_exactly_divided_by_WEIGHT_LEN 
        = (((3U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code)) 
            & (0U != (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cnt_in_detect_box))) 
           | ((~ ((4U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code)) 
                  & (0U != (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cnt_in_detect_cls)))) 
              & ((0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_layer)) 
                 | ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_layer)) 
                    | ((2U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_layer)) 
                       | ((3U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_layer)) 
                          | ((4U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_layer)) 
                             | ((5U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_layer)) 
                                | ((6U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_layer)) 
                                   | (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___current_layer_repeats_T_14))))))))));
    top__DOT__u_Accel_all__DOT__control__DOT___ifm_addr_fmbase_T 
        = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre) 
           * vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_size);
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__upsample_en 
        = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___upsample_en_T_1) 
           & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre) 
              >= ((0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_layer))
                   ? 1U : ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_layer))
                            ? 2U : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___upsample_start_batch_T_19)))));
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__skip_act 
        = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___skip_act_T_1) 
           | (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___skip_act_T_3));
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_96 
        = (0x1fffU & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre) 
                      + (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT____VdfgTmp_hb55b1a29__0)));
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_95 
        = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT____VdfgTmp_hb55b1a29__0)
            ? 0U : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre));
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_22 
        = ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___iter_div_pre_t_T_1))
            ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_row_fm_res_t1xfm_col
            : ((0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre))
                ? 0U : (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_prexfm_div_col 
                        - (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_col))));
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___bottleneck_en_T_5 
        = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__conv_cnt_in_c2f) 
           != (0x1fU & (((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___current_layer_repeats_T_21) 
                         << 3U) - (IData)(1U))));
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__p_is_1 
        = ((0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code)) 
           | (((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code)) 
               & ((0U < (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__conv_cnt_in_c2f)) 
                  & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__conv_cnt_in_c2f) 
                     < (0x1fU & (((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___current_layer_repeats_T_21) 
                                  << 3U) - (IData)(1U)))))) 
              | (((3U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code)) 
                  & (2U > (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cnt_in_detect_box))) 
                 | ((4U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code)) 
                    & (2U > (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cnt_in_detect_cls))))));
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___conv_cnt_in_c2f_T_3 
        = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__conv_cnt_in_c2f) 
           == (0x1fU & (((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___current_layer_repeats_T_21) 
                         << 3U) - (IData)(1U))));
    if ((0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code))) {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_col_output 
            = (0x3ffU & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_col) 
                         >> 1U));
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_size_output 
            = (0x7ffffU & (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_size 
                           >> 2U));
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__layer_finish 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__conv_finish;
    } else {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_col_output 
            = (0x3ffU & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_col));
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_size_output 
            = (0x7ffffU & vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_size);
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__layer_finish 
            = ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code))
                ? ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___conv_cnt_in_c2f_T_3) 
                   & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__conv_finish))
                : ((2U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code))
                    ? ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cnt_in_sppf)) 
                       & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__conv_finish))
                    : ((3U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code))
                        ? ((2U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cnt_in_detect_box)) 
                           & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__conv_finish))
                        : ((4U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code)) 
                           & ((2U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cnt_in_detect_cls)) 
                              & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__conv_finish))))));
    }
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bottleneck_finish_r_9 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bottleneck_finish_r_8));
    top__DOT__u_Accel_all__DOT__control__DOT___ofm_addr_fmbase_T 
        = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post) 
           * vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_size_output);
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_55 
        = (((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__upsample_en) 
            & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__skip_act))
            ? (0x30000U | vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static)
            : ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__upsample_en)
                ? (0x10000U | vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static)
                : ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__skip_act)
                    ? (0x20000U | vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static)
                    : vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static)));
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_84 
        = ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___iter_div_post_t_T_1))
            ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_row_res_outputxfm_col_output
            : vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_postxfm_col_output);
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___ifm_ddr_base_addr_temp_c2f_T_4 
        = ((0U != (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__conv_cnt_in_c2f)) 
           & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___bottleneck_en_T_5));
    top__DOT__u_Accel_all__DOT__control__DOT___fm_div_output_T 
        = ((0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code)) 
           & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__p_is_1));
    if ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code))) {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cout 
            = (0x3ffU & (((0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__conv_cnt_in_c2f)) 
                          | (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___conv_cnt_in_c2f_T_3))
                          ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___current_layer_cout_T_21)
                          : ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___current_layer_cout_T_21) 
                             >> 1U)));
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cin 
            = (0x1fffU & ((0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__conv_cnt_in_c2f))
                           ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___current_layer_cin_T_21)
                           : ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___conv_cnt_in_c2f_T_3)
                               ? ((7U & ((IData)(2U) 
                                         + (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___current_layer_repeats_T_21))) 
                                  * (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT____VdfgTmp_h0c4e533f__0))
                               : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT____VdfgTmp_h0c4e533f__0))));
    } else if ((2U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code))) {
        if ((0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cnt_in_sppf))) {
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cout 
                = (0x3ffU & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___current_layer_cin_T_21) 
                             >> 1U));
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cin 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___current_layer_cin_T_21;
        } else {
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cout 
                = (0x3ffU & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___current_layer_cout_T_21));
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cin 
                = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___current_layer_cin_T_21) 
                   << 1U);
        }
    } else if ((3U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code))) {
        if ((3U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code))) {
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cout 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___current_layer_cout_T_21;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cin = 0x40U;
        } else {
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cout = 0x40U;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cin 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___current_layer_cin_T_21;
        }
    } else if ((4U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code))) {
        if ((4U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code))) {
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cout 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___current_layer_cout_T_21;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cin = 0x50U;
        } else {
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cout = 0x50U;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cin 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___current_layer_cin_T_21;
        }
    } else {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cout 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___current_layer_cout_T_21;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cin 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___current_layer_cin_T_21;
    }
    if ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_div_cnt))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_131 = 0U;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_45 = 0U;
    } else {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_131 
            = top__DOT__u_Accel_all__DOT__control__DOT___GEN_84;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_45 
            = ((0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code))
                ? ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__p_is_1)
                    ? top__DOT__u_Accel_all__DOT__control__DOT___GEN_22
                    : vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset)
                : ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__p_is_1)
                    ? top__DOT__u_Accel_all__DOT__control__DOT___GEN_22
                    : ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___iter_div_pre_t_T_1))
                        ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_row_fm_resxfm_col
                        : vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_prexfm_div_col)));
    }
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_ddr_base_addr_temp_c2f 
        = (((~ (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__conv_cnt_in_c2f)) 
            & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___ifm_ddr_base_addr_temp_c2f_T_4))
            ? 0x20af0000U : ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___conv_cnt_in_c2f_T_3)
                              ? 0x20960000U : ((IData)(0x20960000U) 
                                               + (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___ifm_ddr_base_addr_temp_c2f_one_T_5))));
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_151 
        = (7U & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__p_is_1)
                  ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                  : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post)));
    if ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_div_cnt))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_46 
            = (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_size 
               << 3U);
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_47 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_col;
    } else if ((0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code))) {
        if (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__p_is_1) {
            if ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___iter_div_pre_t_T_1))) {
                top__DOT__u_Accel_all__DOT__control__DOT___GEN_46 
                    = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___ifm_send_len_T_1) 
                       << 3U);
                top__DOT__u_Accel_all__DOT__control__DOT___GEN_47 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_res)));
            } else if ((0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre))) {
                top__DOT__u_Accel_all__DOT__control__DOT___GEN_46 
                    = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___fm_div_col_T) 
                       << 3U);
                top__DOT__u_Accel_all__DOT__control__DOT___GEN_47 
                    = (0x3fU & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_div));
            } else {
                top__DOT__u_Accel_all__DOT__control__DOT___GEN_46 
                    = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___ifm_send_len_T_5) 
                       << 3U);
                top__DOT__u_Accel_all__DOT__control__DOT___GEN_47 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_div)));
            }
        } else {
            top__DOT__u_Accel_all__DOT__control__DOT___GEN_46 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len;
            top__DOT__u_Accel_all__DOT__control__DOT___GEN_47 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred;
        }
    } else if (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__p_is_1) {
        if ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___iter_div_pre_t_T_1))) {
            top__DOT__u_Accel_all__DOT__control__DOT___GEN_46 
                = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___ifm_send_len_T_1) 
                   << 3U);
            top__DOT__u_Accel_all__DOT__control__DOT___GEN_47 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_res)));
        } else if ((0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre))) {
            top__DOT__u_Accel_all__DOT__control__DOT___GEN_46 
                = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___ifm_send_len_T_5) 
                   << 3U);
            top__DOT__u_Accel_all__DOT__control__DOT___GEN_47 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_div)));
        } else {
            top__DOT__u_Accel_all__DOT__control__DOT___GEN_46 
                = (0x7fff8U & (((0x3fU & ((IData)(2U) 
                                          + (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_div))) 
                                * (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_col)) 
                               << 3U));
            top__DOT__u_Accel_all__DOT__control__DOT___GEN_47 
                = (0x3fU & ((IData)(2U) + (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_div)));
        }
    } else if ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___iter_div_pre_t_T_1))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_46 
            = (0x7fff8U & (((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_res) 
                            * (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_col)) 
                           << 3U));
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_47 
            = (0x3fU & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_res));
    } else {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_46 
            = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___fm_div_col_T) 
               << 3U);
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_47 
            = (0x3fU & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_div));
    }
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_882 
        = ((0x1aU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
            : ((0x1bU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                : ((0x1cU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                    : ((0x1dU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                        : ((0x1eU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                            : ((0x1fU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                                : ((0x20U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                                    : ((0x21U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                                        : ((0x22U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                                            : ((0x23U 
                                                == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                                                : (
                                                   (0x24U 
                                                    == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                                                    : 
                                                   ((0x25U 
                                                     == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                     ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                                                     : 
                                                    ((0x26U 
                                                      == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                      ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                                                      : 
                                                     ((0x27U 
                                                       == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                       ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                                                       : 
                                                      ((0x28U 
                                                        == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                                                        : 
                                                       ((0x29U 
                                                         == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                         ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                                                         : 
                                                        ((0x2aU 
                                                          == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                          ? (IData)(top__DOT__u_Accel_all__DOT__control__DOT___GEN_47)
                                                          : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred))))))))))))))))));
    if (top__DOT__u_Accel_all__DOT__control__DOT___fm_div_output_T) {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_div_output 
            = (0x3fU & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_div) 
                        >> 1U));
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_res_output 
            = (0x3fU & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_res) 
                        >> 1U));
    } else {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_div_output 
            = (0x3fU & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_div));
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_res_output 
            = (0x3fU & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_res));
    }
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_85 
        = ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___iter_div_post_t_T_1))
            ? (0x7fff8U & (((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_res_output) 
                            * (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_col_output)) 
                           << 3U)) : (0x7fff8U & (((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_div_output) 
                                                   * (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_col_output)) 
                                                  << 3U)));
    if ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_div_cnt))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_48 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_62 
            = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__p_is_1)
                ? (0xe000U | (((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred) 
                               << 0x18U) | (0xff1fffU 
                                            & vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static)))
                : vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___reg_static_T_14);
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_132 
            = (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_size_output 
               << 3U);
    } else {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_48 
            = ((0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code))
                ? ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__p_is_1)
                    ? (0x40000U | ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_layer_sel) 
                                   << 0xaU)) : vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static)
                : ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_layer_sel) 
                   << 0xaU));
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_62 
            = ((0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post))
                ? ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__p_is_1)
                    ? (0xa000U | (((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred) 
                                   << 0x18U) | (0xff1fffU 
                                                & vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static)))
                    : vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___reg_static_T_14)
                : ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___iter_div_post_t_T_1))
                    ? ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__p_is_1)
                        ? (0xc000U | (((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred) 
                                       << 0x18U) | 
                                      (0xff1fffU & vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static)))
                        : vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___reg_static_T_14)
                    : ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__p_is_1)
                        ? (0x8000U | (((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred) 
                                       << 0x18U) | 
                                      (0xff1fffU & vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static)))
                        : vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___reg_static_T_14)));
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_132 
            = top__DOT__u_Accel_all__DOT__control__DOT___GEN_85;
    }
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post_t 
        = (0x1fffU & ((3U & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cout) 
                             >> 3U)) - (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post)));
    top__DOT__u_Accel_all__DOT__control__DOT___bottleneck_transfer_T_1 
        = ((((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__c2f_cnt)) 
             | ((2U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__c2f_cnt)) 
                | ((3U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__c2f_cnt)) 
                   | (0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__c2f_cnt))))) 
            & ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__current_model_code)) 
               & ((0U != (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__conv_cnt_in_c2f)) 
                  & ((~ (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__conv_cnt_in_c2f)) 
                     & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___bottleneck_en_T_5))))) 
           & (1U == (0x1fffU & ((3U & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cin) 
                                       >> 3U)) - (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre)))));
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___weight_len_limit_T 
        = (0x3ffffffU & ((3U & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cin) 
                                >> 3U)) * (3U & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cout) 
                                                 >> 3U))));
    top__DOT__u_Accel_all__DOT__control__DOT___T_26 
        = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post) 
           == (0x1fffU & ((3U & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cin) 
                                 >> 3U)) - (IData)(1U))));
    top__DOT__u_Accel_all__DOT__control__DOT___T_71 
        = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre) 
           == (3U & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cin) 
                     >> 3U)));
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___iter_ifm_post_t_T_1 
        = (0x1fffU & ((3U & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cin) 
                             >> 3U)) - (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post)));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bottleneck_finish_r_8 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bottleneck_finish_r_7));
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_797 
        = ((0x1cU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
            : ((0x1dU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                : ((0x1eU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                    ? (IData)(top__DOT__u_Accel_all__DOT__control__DOT___GEN_151)
                    : ((0x1fU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                        : ((0x20U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                            : ((0x21U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                : ((0x22U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                    : ((0x23U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                        : ((0x24U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                            : ((0x25U 
                                                == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                                : (
                                                   (0x26U 
                                                    == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                                    : 
                                                   ((0x27U 
                                                     == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                     ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                                     : 
                                                    ((0x28U 
                                                      == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                      ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                                      : 
                                                     ((0x29U 
                                                       == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                       ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                                       : 
                                                      ((0x2aU 
                                                        == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                                        : 
                                                       ((0x2bU 
                                                         == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                         ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                                         : 
                                                        ((0x2cU 
                                                          == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                          ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                                          : 
                                                         ((0x2dU 
                                                           == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                           ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                                           : 
                                                          ((0x2eU 
                                                            == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                                            : 
                                                           ((0x2fU 
                                                             == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                             ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                                             : 
                                                            ((0x30U 
                                                              == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                              ? (IData)(top__DOT__u_Accel_all__DOT__control__DOT___GEN_151)
                                                              : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel))))))))))))))))))))));
    top__DOT__u_Accel_all__DOT__control__DOT___T_67 
        = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en) 
           & ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___iter_div_post_t_T_1)) 
              & (1U != (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post_t))));
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_1089 
        = ((0x13U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer)
            : ((0x14U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer)
                : ((0x15U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                    ? (IData)(top__DOT__u_Accel_all__DOT__control__DOT___bottleneck_transfer_T_1)
                    : ((0x16U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer)
                        : ((0x17U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer)
                            : ((0x18U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer)
                                : ((0x19U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer)
                                    : ((0x1aU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer)
                                        : ((0x1bU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer)
                                            : ((0x1cU 
                                                == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer)
                                                : (
                                                   (0x1dU 
                                                    == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer)
                                                    : 
                                                   ((0x1eU 
                                                     == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                     ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer)
                                                     : 
                                                    ((0x1fU 
                                                      == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                      ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer)
                                                      : 
                                                     ((0x20U 
                                                       == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                       ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer)
                                                       : 
                                                      ((0x21U 
                                                        == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer)
                                                        : 
                                                       ((0x22U 
                                                         == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                         ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer)
                                                         : 
                                                        ((0x23U 
                                                          == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                          ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer)
                                                          : 
                                                         ((0x24U 
                                                           == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                           ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer)
                                                           : 
                                                          ((0x25U 
                                                            == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer)
                                                            : 
                                                           ((0x26U 
                                                             == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                             ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer)
                                                             : 
                                                            ((0x27U 
                                                              == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                              ? (IData)(top__DOT__u_Accel_all__DOT__control__DOT___bottleneck_transfer_T_1)
                                                              : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer))))))))))))))))))))));
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_150 
        = (0x3ffffffU & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__p_is_1)
                          ? ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_batch_is_exactly_divided_by_WEIGHT_LEN)
                              ? (((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post) 
                                  * (3U & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cin) 
                                           >> 3U))) 
                                 + (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post))
                              : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post))
                          : (0x3ffU & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post) 
                                       >> 3U))));
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_686 
        = ((0x20U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
            : ((0x21U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                : ((0x22U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                    : ((0x23U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                        : ((0x24U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                            : ((0x25U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                : ((0x26U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                    : ((0x27U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                        : ((0x28U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                            : ((0x29U 
                                                == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                                : (
                                                   (0x2aU 
                                                    == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                                    : 
                                                   ((0x2bU 
                                                     == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                     ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                                     : 
                                                    ((0x2cU 
                                                      == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                      ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                                      : 
                                                     ((0x2dU 
                                                       == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                       ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                                       : 
                                                      ((0x2eU 
                                                        == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                                        : 
                                                       ((0x2fU 
                                                         == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                         ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                                         : 
                                                        ((0x30U 
                                                          == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                          ? top__DOT__u_Accel_all__DOT__control__DOT___GEN_150
                                                          : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t))))))))))))))))));
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___weight_len_T 
        = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_batch_is_exactly_divided_by_WEIGHT_LEN)
            ? ((0x80U >= vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___weight_len_limit_T)
                ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___weight_len_limit_T
                : 0x80U) : (3U & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cin) 
                                  >> 3U)));
    if (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__p_is_1) {
        top__DOT__u_Accel_all__DOT__control__DOT___wgt_ddr_read_en_T_6 
            = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read) 
               == (0xffU & (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___weight_len_T 
                            - (IData)(1U))));
        top__DOT__u_Accel_all__DOT__control__DOT___reg_t_5_T_6 
            = (0xfffffU & ((IData)(0x240U) * (0xffU 
                                              & vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___weight_len_T)));
    } else {
        top__DOT__u_Accel_all__DOT__control__DOT___wgt_ddr_read_en_T_6 
            = top__DOT__u_Accel_all__DOT__control__DOT___T_26;
        top__DOT__u_Accel_all__DOT__control__DOT___reg_t_5_T_6 = 0x40U;
    }
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_51 
        = ((0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post))
            ? ((1U == (3U & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cin) 
                             >> 3U))) ? (0xc0U | vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static)
                : (0x40U | vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static))
            : ((IData)(top__DOT__u_Accel_all__DOT__control__DOT___T_26)
                ? (0x80U | vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static)
                : vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static));
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_93 
        = (0x1fffU & ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre) 
                      + (IData)(top__DOT__u_Accel_all__DOT__control__DOT___T_71)));
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_92 
        = ((IData)(top__DOT__u_Accel_all__DOT__control__DOT___T_71)
            ? 0U : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre));
    top__DOT__u_Accel_all__DOT__control__DOT___T_58 
        = ((~ (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__first_ofm_recv_stop)) 
           & ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___iter_ifm_post_t_T_1)) 
              & ((~ (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_ready)) 
                 & ((~ (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___skip_act_T_3)) 
                    | ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___skip_act_T_3) 
                       & (1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___iter_div_post_t_T_1)))))));
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_1144 
        = (3U & ((0x12U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                  ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt)
                  : ((0x13U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                      ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt)
                      : ((0x14U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                          ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt)
                          : ((0x15U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                              ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt)
                              : ((0x16U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                  ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt)
                                  : ((0x17U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                      ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt)
                                      : ((0x18U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                          ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt)
                                          : ((0x19U 
                                              == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                              ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt)
                                              : ((0x1aU 
                                                  == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt)
                                                  : 
                                                 ((0x1bU 
                                                   == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt)
                                                   : 
                                                  ((0x1cU 
                                                    == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt)
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                     ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt)
                                                     : 
                                                    ((0x1eU 
                                                      == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                      ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt)
                                                      : 
                                                     ((0x1fU 
                                                       == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                       ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt)
                                                       : 
                                                      ((0x20U 
                                                        == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt)
                                                        : 
                                                       ((0x21U 
                                                         == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                         ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt)
                                                         : 
                                                        ((0x22U 
                                                          == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                          ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt)
                                                          : 
                                                         ((0x23U 
                                                           == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                           ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt)
                                                           : 
                                                          ((0x24U 
                                                            == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt)
                                                            : 
                                                           ((0x25U 
                                                             == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                             ? 
                                                            ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ap_done_up)
                                                              ? 
                                                             ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt) 
                                                              + (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_en))
                                                              : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt))
                                                             : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt))))))))))))))))))))));
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_1056 
        = ((0x14U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre)
            : ((0x15U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre)
                : ((0x16U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                    ? (IData)(top__DOT__u_Accel_all__DOT__control__DOT___GEN_96)
                    : ((0x17U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre)
                        : ((0x18U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre)
                            : ((0x19U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre)
                                : ((0x1aU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre)
                                    : ((0x1bU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre)
                                        : ((0x1cU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre)
                                            : ((0x1dU 
                                                == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre)
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre)
                                                    : 
                                                   ((0x1fU 
                                                     == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                     ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre)
                                                     : 
                                                    ((0x20U 
                                                      == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                      ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre)
                                                      : 
                                                     ((0x21U 
                                                       == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                       ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre)
                                                       : 
                                                      ((0x22U 
                                                        == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre)
                                                        : 
                                                       ((0x23U 
                                                         == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                         ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre)
                                                         : 
                                                        ((0x24U 
                                                          == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                          ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre)
                                                          : 
                                                         ((0x25U 
                                                           == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                           ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre)
                                                           : 
                                                          ((0x26U 
                                                            == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre)
                                                            : 
                                                           ((0x27U 
                                                             == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                             ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre)
                                                             : 
                                                            ((0x28U 
                                                              == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                              ? (IData)(top__DOT__u_Accel_all__DOT__control__DOT___GEN_96)
                                                              : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre))))))))))))))))))))));
    if ((0x17U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_955 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_956 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
    } else if ((0x18U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_955 
            = top__DOT__u_Accel_all__DOT__control__DOT___ifm_addr_fmbase_T;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_956 
            = top__DOT__u_Accel_all__DOT__control__DOT___GEN_45;
    } else if ((0x19U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_955 
            = top__DOT__u_Accel_all__DOT__control__DOT___ofm_addr_fmbase_T;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_956 
            = top__DOT__u_Accel_all__DOT__control__DOT___GEN_131;
    } else if ((0x1aU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_955 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_956 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
    } else if ((0x1bU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_955 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_956 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
    } else if ((0x1cU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_955 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_956 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
    } else if ((0x1dU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_955 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_956 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
    } else if ((0x1eU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_955 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_956 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
    } else if ((0x1fU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_955 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_956 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
    } else if ((0x20U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_955 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_956 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
    } else if ((0x21U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_955 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_956 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
    } else if ((0x22U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_955 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_956 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
    } else if ((0x23U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_955 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_956 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
    } else if ((0x24U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_955 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_956 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
    } else if ((0x25U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_955 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_956 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
    } else if ((0x26U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_955 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_956 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
    } else if ((0x27U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_955 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_956 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
    } else if ((0x28U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_955 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_956 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
    } else if ((0x29U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_955 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_956 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
    } else if ((0x2aU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_955 
            = top__DOT__u_Accel_all__DOT__control__DOT___ifm_addr_fmbase_T;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_956 
            = top__DOT__u_Accel_all__DOT__control__DOT___GEN_45;
    } else if ((0x2bU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_955 
            = top__DOT__u_Accel_all__DOT__control__DOT___ofm_addr_fmbase_T;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_956 
            = top__DOT__u_Accel_all__DOT__control__DOT___GEN_131;
    } else {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_955 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_956 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
    }
    top__DOT__u_Accel_all__DOT__control__DOT___T_13 
        = ((1U != (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post_t)) 
           | ((1U != (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___iter_div_post_t_T_1)) 
              | (1U != (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___iter_ifm_post_t_T_1))));
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_953 
        = ((0x17U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
            ? (IData)(top__DOT__u_Accel_all__DOT__control__DOT___T_13)
            : ((0x18U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable)
                : ((0x19U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state)) 
                   | ((0x1aU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                       ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable)
                       : ((0x1bU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                           ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable)
                           : ((0x1cU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                               ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable)
                               : ((0x1dU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                   ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable)
                                   : ((0x1eU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                       ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable)
                                       : ((0x1fU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                           ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable)
                                           : ((0x20U 
                                               == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                               ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable)
                                               : ((0x21U 
                                                   == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable)
                                                   : 
                                                  ((0x22U 
                                                    == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable)
                                                    : 
                                                   ((0x23U 
                                                     == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                     ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable)
                                                     : 
                                                    ((0x24U 
                                                      == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                      ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable)
                                                      : 
                                                     ((0x25U 
                                                       == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                       ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable)
                                                       : 
                                                      ((0x26U 
                                                        == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable)
                                                        : 
                                                       ((0x27U 
                                                         == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                         ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable)
                                                         : 
                                                        ((0x28U 
                                                          == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                          ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable)
                                                          : 
                                                         ((0x29U 
                                                           == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                           ? (IData)(top__DOT__u_Accel_all__DOT__control__DOT___T_13)
                                                           : 
                                                          ((0x2aU 
                                                            == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable)
                                                            : 
                                                           ((0x2bU 
                                                             == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state)) 
                                                            | (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable))))))))))))))))))))));
    top__DOT__u_Accel_all__DOT__control__DOT___T_39 
        = ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post_t)) 
           & ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___iter_div_post_t_T_1)) 
              & (1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___iter_ifm_post_t_T_1))));
    if ((0x14U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1055 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1053 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_91;
    } else if ((0x15U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1055 
            = top__DOT__u_Accel_all__DOT__control__DOT___GEN_93;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1053 
            = top__DOT__u_Accel_all__DOT__control__DOT___GEN_92;
    } else if ((0x16U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1055 
            = top__DOT__u_Accel_all__DOT__control__DOT___GEN_95;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1053 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
    } else if ((0x17U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1055 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1053 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
    } else if ((0x18U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1055 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1053 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
    } else if ((0x19U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1055 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1053 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
    } else if ((0x1aU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1055 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1053 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
    } else if ((0x1bU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1055 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1053 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
    } else if ((0x1cU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1055 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1053 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
    } else if ((0x1dU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1055 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1053 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
    } else if ((0x1eU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1055 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1053 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
    } else if ((0x1fU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1055 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1053 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
    } else if ((0x20U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1055 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1053 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
    } else if ((0x21U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1055 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1053 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
    } else if ((0x22U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1055 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1053 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
    } else if ((0x23U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1055 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1053 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
    } else if ((0x24U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1055 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1053 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
    } else if ((0x25U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1055 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1053 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
    } else if ((0x26U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1055 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1053 
            = ((IData)(top__DOT__u_Accel_all__DOT__control__DOT___T_39)
                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre)
                : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_91));
    } else if ((0x27U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1055 
            = top__DOT__u_Accel_all__DOT__control__DOT___GEN_93;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1053 
            = top__DOT__u_Accel_all__DOT__control__DOT___GEN_92;
    } else {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1055 
            = ((0x28U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                ? (IData)(top__DOT__u_Accel_all__DOT__control__DOT___GEN_95)
                : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre));
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1053 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
    }
    if ((0x12U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
    } else if ((0x13U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
    } else if ((0x14U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre;
    } else if ((0x15U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
    } else if ((0x16U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
    } else if ((0x17U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
    } else if ((0x18U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
    } else if ((0x19U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
    } else if ((0x1aU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
    } else if ((0x1bU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
    } else if ((0x1cU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
    } else if ((0x1dU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
    } else if ((0x1eU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
    } else if ((0x1fU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
    } else if ((0x20U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
    } else if ((0x21U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
    } else if ((0x22U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
    } else if ((0x23U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
    } else if ((0x24U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
    } else if ((0x25U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
    } else if ((0x26U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        if (top__DOT__u_Accel_all__DOT__control__DOT___T_39) {
            top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
            top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
            top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
        } else {
            top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
            top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
            top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre;
        }
    } else {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
    }
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1294 
        = ((0xeU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
            : ((0xfU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                : ((0x10U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                    : ((0x11U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                        : ((0x12U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                            : ((0x13U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                : ((0x14U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                    : ((0x15U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                        : ((0x16U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                            : ((0x17U 
                                                == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                                : (
                                                   (0x18U 
                                                    == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                     ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                      ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                       ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                                       : 
                                                      ((0x1cU 
                                                        == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                                        : 
                                                       ((0x1dU 
                                                         == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                         ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                                         : 
                                                        ((0x1eU 
                                                          == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                          ? top__DOT__u_Accel_all__DOT__control__DOT___GEN_150
                                                          : 
                                                         ((0x1fU 
                                                           == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                           ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                                           : top__DOT__u_Accel_all__DOT__control__DOT___GEN_686))))))))))))))))));
    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1515 
        = ((8U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
            ? (IData)(top__DOT__u_Accel_all__DOT__control__DOT___GEN_47)
            : ((9U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                : ((0xaU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                    : ((0xbU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                        : ((0xcU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                            : ((0xdU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                                : ((0xeU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                                    : ((0xfU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                                        : ((0x10U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                                            : ((0x11U 
                                                == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                                                : (
                                                   (0x12U 
                                                    == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                     ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                                                     : 
                                                    ((0x14U 
                                                      == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                      ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                                                      : 
                                                     ((0x15U 
                                                       == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                       ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                                                       : 
                                                      ((0x16U 
                                                        == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                         ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                          ? (IData)(top__DOT__u_Accel_all__DOT__control__DOT___GEN_47)
                                                          : 
                                                         ((0x19U 
                                                           == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                           ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred)
                                                           : (IData)(top__DOT__u_Accel_all__DOT__control__DOT___GEN_882)))))))))))))))))));
    if (vlSelf->reset) {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2863 = 0U;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2860 = 0U;
    } else if ((0U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2863 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2860 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t;
    } else if ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2863 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2860 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t;
    } else if ((2U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2863 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2860 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t;
    } else if ((3U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2863 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2860 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t;
    } else if ((4U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2863 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2860 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t;
    } else if ((5U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2863 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2860 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t;
    } else if ((6U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2863 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2860 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t;
    } else if ((7U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2863 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__the_number_of_row_transferred;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2860 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t;
    } else {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2863 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1515;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_2860 
            = ((8U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                : ((9U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                    : ((0xaU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                        : ((0xbU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                            : ((0xcU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                : ((0xdU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read_t)
                                    : vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1294))))));
    }
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_825 
        = ((0x1bU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
            ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_52
            : ((0x1cU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                ? top__DOT__u_Accel_all__DOT__control__DOT___GEN_55
                : ((0x1dU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                    ? top__DOT__u_Accel_all__DOT__control__DOT___GEN_62
                    : ((0x1eU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                        ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                        : ((0x1fU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                            ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                            : ((0x20U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                                : ((0x21U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                    ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                                    : ((0x22U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                        ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                                        : ((0x23U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                            ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                                            : ((0x24U 
                                                == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                                                : (
                                                   (0x25U 
                                                    == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                    ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                                                    : 
                                                   ((0x26U 
                                                     == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                     ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                      ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                                                      : 
                                                     ((0x28U 
                                                       == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                       ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                                                       : 
                                                      ((0x29U 
                                                        == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                        ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                                                        : 
                                                       ((0x2aU 
                                                         == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                         ? top__DOT__u_Accel_all__DOT__control__DOT___GEN_48
                                                         : 
                                                        ((0x2bU 
                                                          == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                          ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                           ? top__DOT__u_Accel_all__DOT__control__DOT___GEN_51
                                                           : 
                                                          ((0x2dU 
                                                            == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                            ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_52
                                                            : 
                                                           ((0x2eU 
                                                             == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                             ? top__DOT__u_Accel_all__DOT__control__DOT___GEN_55
                                                             : 
                                                            ((0x2fU 
                                                              == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                              ? top__DOT__u_Accel_all__DOT__control__DOT___GEN_62
                                                              : vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static)))))))))))))))))))));
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_148 
        = ((IData)(top__DOT__u_Accel_all__DOT__control__DOT___T_39)
            ? 0x210U : ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___T_44)
                         ? 0x201U : 0x211U));
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_795 
        = ((0x1cU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
            ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task
            : ((0x1dU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                ? (IData)(top__DOT__u_Accel_all__DOT__control__DOT___GEN_148)
                : ((0x1eU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                    ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task
                    : ((0x1fU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                        ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task
                        : ((0x20U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                            ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task
                            : ((0x21U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task
                                : ((0x22U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                    ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task
                                    : ((0x23U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                        ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task
                                        : ((0x24U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                            ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task
                                            : ((0x25U 
                                                == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task
                                                : (
                                                   (0x26U 
                                                    == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                    ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task
                                                    : 
                                                   ((0x27U 
                                                     == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                     ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task
                                                     : 
                                                    ((0x28U 
                                                      == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                      ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task
                                                      : 
                                                     ((0x29U 
                                                       == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                       ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task
                                                       : 
                                                      ((0x2aU 
                                                        == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                        ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task
                                                        : 
                                                       ((0x2bU 
                                                         == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                         ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task
                                                         : 
                                                        ((0x2cU 
                                                          == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                          ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task
                                                          : 
                                                         ((0x2dU 
                                                           == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                           ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task
                                                           : 
                                                          ((0x2eU 
                                                            == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                            ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task
                                                            : 
                                                           ((0x2fU 
                                                             == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                             ? (IData)(top__DOT__u_Accel_all__DOT__control__DOT___GEN_148)
                                                             : vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task))))))))))))))))))));
    if ((0xaU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1448 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1433 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task;
    } else if ((0xbU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1448 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1433 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task;
    } else if ((0xcU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1448 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1433 
            = ((IData)(top__DOT__u_Accel_all__DOT__control__DOT___T_39)
                ? ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_ready)
                    ? 0x80200U : 0x210U) : ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___T_44)
                                             ? 0x201U
                                             : ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_ready)
                                                 ? 0x80201U
                                                 : 0x211U)));
    } else if ((0xdU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1448 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1433 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task;
    } else if ((0xeU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1448 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1433 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task;
    } else if ((0xfU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1448 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1433 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task;
    } else if ((0x10U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1448 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1433 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task;
    } else if ((0x11U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1448 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1433 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task;
    } else if ((0x12U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1448 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1433 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task;
    } else if ((0x13U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1448 
            = ((IData)(top__DOT__u_Accel_all__DOT__control__DOT___T_67)
                ? 0U : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read));
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1433 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task;
    } else if ((0x14U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1448 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1433 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task;
    } else if ((0x15U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1448 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1433 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task;
    } else if ((0x16U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1448 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1433 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task;
    } else if ((0x17U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1448 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1433 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task;
    } else if ((0x18U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1448 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1433 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task;
    } else if ((0x19U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1448 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1433 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task;
    } else if ((0x1aU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1448 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1433 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task;
    } else if ((0x1bU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1448 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read;
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1433 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task;
    } else {
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1448 
            = ((0x1cU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read)
                : ((0x1dU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read)
                    : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_732)));
        top__DOT__u_Accel_all__DOT__control__DOT___GEN_1433 
            = top__DOT__u_Accel_all__DOT__control__DOT___GEN_795;
    }
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_480 
        = ((0x26U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
            ? ((IData)(top__DOT__u_Accel_all__DOT__control__DOT___T_39)
                ? 0x36U : ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer)
                            ? 0x2bU : 0x27U)) : ((0x27U 
                                                  == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                  ? 
                                                 ((IData)(top__DOT__u_Accel_all__DOT__control__DOT___T_71)
                                                   ? 0x28U
                                                   : 0x29U)
                                                  : 
                                                 ((0x28U 
                                                   == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                   ? 0x29U
                                                   : 
                                                  ((0x29U 
                                                    == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                    ? 
                                                   ((IData)(top__DOT__u_Accel_all__DOT__control__DOT___T_13)
                                                     ? 0x2aU
                                                     : 0x2cU)
                                                    : 
                                                   ((0x2aU 
                                                     == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                     ? 0x2cU
                                                     : 
                                                    ((0x2bU 
                                                      == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                      ? 0x2cU
                                                      : 
                                                     ((0x2cU 
                                                       == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                       ? 0x2dU
                                                       : 
                                                      ((0x2dU 
                                                        == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                        ? 0x2eU
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                         ? 0x2fU
                                                         : 
                                                        ((0x2fU 
                                                          == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                          ? 0x30U
                                                          : 
                                                         ((0x30U 
                                                           == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                           ? 0x31U
                                                           : 
                                                          ((0x31U 
                                                            == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                            ? 0x32U
                                                            : 
                                                           ((0x32U 
                                                             == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                             ? 
                                                            ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_send_task_enable)
                                                              ? 0x33U
                                                              : 0xdU)
                                                             : 
                                                            ((0x33U 
                                                              == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                              ? 0x34U
                                                              : 
                                                             ((0x34U 
                                                               == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                               ? 
                                                              ((5U 
                                                                == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cnt_t))
                                                                ? 0x35U
                                                                : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                               : 
                                                              ((0x35U 
                                                                == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                                ? 
                                                               ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ap_done_up)
                                                                 ? 0xdU
                                                                 : 0x35U)
                                                                : 
                                                               ((0x36U 
                                                                 == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                                 ? 0U
                                                                 : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))))))))))))))))));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bottleneck_finish_r_7 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bottleneck_finish_r_6));
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_923 
        = ((0x18U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
            ? top__DOT__u_Accel_all__DOT__control__DOT___GEN_46
            : ((0x19U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                ? top__DOT__u_Accel_all__DOT__control__DOT___GEN_132
                : ((0x1aU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                    ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len
                    : ((0x1bU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                        ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len
                        : ((0x1cU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                            ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len
                            : ((0x1dU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len
                                : ((0x1eU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                    ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len
                                    : ((0x1fU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                        ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len
                                        : ((0x20U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                            ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len
                                            : ((0x21U 
                                                == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len
                                                : (
                                                   (0x22U 
                                                    == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                    ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len
                                                    : 
                                                   ((0x23U 
                                                     == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                     ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len
                                                     : 
                                                    ((0x24U 
                                                      == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                      ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len
                                                      : 
                                                     ((0x25U 
                                                       == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                       ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len
                                                       : 
                                                      ((0x26U 
                                                        == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                        ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len
                                                        : 
                                                       ((0x27U 
                                                         == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                         ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len
                                                         : 
                                                        ((0x28U 
                                                          == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                          ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len
                                                          : 
                                                         ((0x29U 
                                                           == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                           ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len
                                                           : 
                                                          ((0x2aU 
                                                            == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                            ? top__DOT__u_Accel_all__DOT__control__DOT___GEN_46
                                                            : 
                                                           ((0x2bU 
                                                             == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                             ? top__DOT__u_Accel_all__DOT__control__DOT___GEN_132
                                                             : vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len))))))))))))))))))));
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_768 
        = ((0x1dU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
            : ((0x1eU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                : ((0x1fU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                    ? (IData)(top__DOT__u_Accel_all__DOT__control__DOT___wgt_ddr_read_en_T_6)
                    : ((0x20U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                        : ((0x21U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                            : ((0x22U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                : ((0x23U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                    : ((0x24U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                        : ((0x25U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                            : ((0x26U 
                                                == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                                : (
                                                   (0x27U 
                                                    == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                     ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                                     : 
                                                    ((0x29U 
                                                      == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                      ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                                      : 
                                                     ((0x2aU 
                                                       == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                       ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                                       : 
                                                      ((0x2bU 
                                                        == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                                        : 
                                                       ((0x2cU 
                                                         == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                         ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                          ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                                          : 
                                                         ((0x2eU 
                                                           == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                           ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                                           : 
                                                          ((0x2fU 
                                                            == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                                            : 
                                                           ((0x30U 
                                                             == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                             ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                                             : 
                                                            ((0x31U 
                                                              == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                              ? (IData)(top__DOT__u_Accel_all__DOT__control__DOT___wgt_ddr_read_en_T_6)
                                                              : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en))))))))))))))))))))));
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_1545 
        = ((8U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
            : ((9U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                : ((0xaU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                    : ((0xbU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                        : ((0xcU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                            : ((0xdU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                : ((0xeU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                    : ((0xfU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                        : ((0x10U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                            : ((0x11U 
                                                == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                                : (
                                                   (0x12U 
                                                    == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                     ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                                     : 
                                                    ((0x14U 
                                                      == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                      ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                                      : 
                                                     ((0x15U 
                                                       == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                       ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                                       : 
                                                      ((0x16U 
                                                        == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                         ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                          ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                                          : 
                                                         ((0x19U 
                                                           == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                           ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                                           : 
                                                          ((0x1aU 
                                                            == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                                            : 
                                                           ((0x1bU 
                                                             == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                             ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                                             : 
                                                            ((0x1cU 
                                                              == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                              ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en)
                                                              : (IData)(top__DOT__u_Accel_all__DOT__control__DOT___GEN_768))))))))))))))))))))));
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_724 
        = ((0x1fU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
            ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
            : ((0x20U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                : ((0x21U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                    ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                    : ((0x22U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                        ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                        : ((0x23U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                            ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                            : ((0x24U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                : ((0x25U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                    ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                    : ((0x26U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                        ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                        : ((0x27U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                            ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                            : ((0x28U 
                                                == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                                : (
                                                   (0x29U 
                                                    == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                    ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                                    : 
                                                   ((0x2aU 
                                                     == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                     ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                                     : 
                                                    ((0x2bU 
                                                      == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                      ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                                      : 
                                                     ((0x2cU 
                                                       == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                       ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                                       : 
                                                      ((0x2dU 
                                                        == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                        ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                         ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                                         : 
                                                        ((0x2fU 
                                                          == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                          ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                                          : 
                                                         ((0x30U 
                                                           == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                           ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                                           : 
                                                          ((0x31U 
                                                            == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                            ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                                            : 
                                                           ((0x32U 
                                                             == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                             ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                                             : 
                                                            ((0x33U 
                                                              == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                              ? top__DOT__u_Accel_all__DOT__control__DOT___reg_t_5_T_6
                                                              : vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5)))))))))))))))))))));
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_1600 
        = ((6U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
            ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
            : ((7U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                : ((8U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                    ? top__DOT__u_Accel_all__DOT__control__DOT___GEN_48
                    : ((9U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                        ? top__DOT__u_Accel_all__DOT__control__DOT___GEN_51
                        : ((0xaU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                            ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_52
                            : ((0xbU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                ? top__DOT__u_Accel_all__DOT__control__DOT___GEN_55
                                : ((0xcU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                    ? top__DOT__u_Accel_all__DOT__control__DOT___GEN_62
                                    : ((0xdU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                        ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                                        : ((0xeU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                            ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                                            : ((0xfU 
                                                == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                                                : (
                                                   (0x10U 
                                                    == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                    ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                                                    : 
                                                   ((0x11U 
                                                     == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                     ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                      ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                                                      : 
                                                     ((0x13U 
                                                       == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                       ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                                                       : 
                                                      ((0x14U 
                                                        == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                        ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                                                        : 
                                                       ((0x15U 
                                                         == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                         ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                                                         : 
                                                        ((0x16U 
                                                          == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                          ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                           ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                                                           : 
                                                          ((0x18U 
                                                            == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                            ? top__DOT__u_Accel_all__DOT__control__DOT___GEN_48
                                                            : 
                                                           ((0x19U 
                                                             == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                             ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static
                                                             : 
                                                            ((0x1aU 
                                                              == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                              ? top__DOT__u_Accel_all__DOT__control__DOT___GEN_51
                                                              : top__DOT__u_Accel_all__DOT__control__DOT___GEN_825)))))))))))))))))))));
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_1584 
        = ((7U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
            : ((8U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                : ((9U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                    : ((0xaU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                        : ((0xbU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                            : ((0xcU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                : ((0xdU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                    : ((0xeU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                        : ((0xfU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                            : ((0x10U 
                                                == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                                : (
                                                   (0x11U 
                                                    == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                                    : 
                                                   ((0x12U 
                                                     == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                     ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                                     : 
                                                    ((0x13U 
                                                      == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                      ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                       ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                                       : 
                                                      ((0x15U 
                                                        == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                        ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                                        : 
                                                       ((0x16U 
                                                         == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                         ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                                         : 
                                                        ((0x17U 
                                                          == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                          ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                                          : 
                                                         ((0x18U 
                                                           == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                           ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                                           : 
                                                          ((0x19U 
                                                            == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                            ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                                            : 
                                                           ((0x1aU 
                                                             == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                             ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                                             : 
                                                            ((0x1bU 
                                                              == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                              ? (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel)
                                                              : (IData)(top__DOT__u_Accel_all__DOT__control__DOT___GEN_797))))))))))))))))))))));
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_987 
        = ((0x16U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
            ? 0x17U : ((0x17U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                        ? ((IData)(top__DOT__u_Accel_all__DOT__control__DOT___T_13)
                            ? 0x18U : 0x1aU) : ((0x18U 
                                                 == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                 ? 0x1aU
                                                 : 
                                                ((0x19U 
                                                  == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                  ? 0x1aU
                                                  : 
                                                 ((0x1aU 
                                                   == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                   ? 0x1bU
                                                   : 
                                                  ((0x1bU 
                                                    == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                    ? 0x1cU
                                                    : 
                                                   ((0x1cU 
                                                     == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                     ? 0x1dU
                                                     : 
                                                    ((0x1dU 
                                                      == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                      ? 0x1eU
                                                      : 
                                                     ((0x1eU 
                                                       == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                       ? 0x1fU
                                                       : 
                                                      ((0x1fU 
                                                        == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                        ? 0x20U
                                                        : 
                                                       ((0x20U 
                                                         == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                         ? 
                                                        ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_task_enable)
                                                          ? 
                                                         ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_en)
                                                           ? 0x21U
                                                           : 0x23U)
                                                          : 0x32U)
                                                         : 
                                                        ((0x21U 
                                                          == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                          ? 0x22U
                                                          : 
                                                         ((0x22U 
                                                           == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                           ? 
                                                          ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl_io_pool_finish)
                                                            ? 0x23U
                                                            : 0x22U)
                                                           : 
                                                          ((0x23U 
                                                            == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                            ? 0x24U
                                                            : 
                                                           ((0x24U 
                                                             == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                             ? 
                                                            ((5U 
                                                              == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cnt_t))
                                                              ? 0x25U
                                                              : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                             : 
                                                            ((0x25U 
                                                              == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                              ? 
                                                             ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ap_done_up)
                                                               ? 
                                                              ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_en)
                                                                ? 0x23U
                                                                : 0x26U)
                                                               : 0x25U)
                                                              : (IData)(top__DOT__u_Accel_all__DOT__control__DOT___GEN_480)))))))))))))))));
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_1554 
        = ((7U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
            ? ((IData)(top__DOT__u_Accel_all__DOT__control__DOT___T_13)
                ? 8U : 9U) : ((8U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                               ? 9U : ((9U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                        ? 0xaU : ((0xaU 
                                                   == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                   ? 0xbU
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                    ? 0xcU
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                     ? 0xdU
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                      ? 0xeU
                                                      : 
                                                     ((0xeU 
                                                       == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                       ? 
                                                      ((5U 
                                                        == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cnt_t))
                                                        ? 0xfU
                                                        : (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                       : 
                                                      ((0xfU 
                                                        == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                        ? 
                                                       ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ap_done_up)
                                                         ? 0x10U
                                                         : 0xfU)
                                                        : 
                                                       ((0x10U 
                                                         == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                         ? 
                                                        ((IData)(top__DOT__u_Accel_all__DOT__control__DOT___T_58)
                                                          ? 0x11U
                                                          : 0x13U)
                                                         : 
                                                        ((0x11U 
                                                          == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                          ? 
                                                         ((1U 
                                                           == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_div_cnt))
                                                           ? 0x13U
                                                           : 0x12U)
                                                          : 
                                                         ((0x12U 
                                                           == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                           ? 0x13U
                                                           : 
                                                          ((0x13U 
                                                            == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                            ? 
                                                           ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_task_enable)
                                                             ? 0x20U
                                                             : 0x14U)
                                                            : 
                                                           ((0x14U 
                                                             == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                             ? 
                                                            ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer)
                                                              ? 0x19U
                                                              : 0x15U)
                                                             : 
                                                            ((0x15U 
                                                              == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                              ? 
                                                             ((IData)(top__DOT__u_Accel_all__DOT__control__DOT___T_71)
                                                               ? 0x16U
                                                               : 0x17U)
                                                              : (IData)(top__DOT__u_Accel_all__DOT__control__DOT___GEN_987))))))))))))))));
    top__DOT__u_Accel_all__DOT__control__DOT___GEN_1393 
        = ((0xbU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
            ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
            : ((0xcU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                : ((0xdU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable)
                        ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len
                        : vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5)
                    : ((0xeU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                        ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                        : ((0xfU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                            ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                            : ((0x10U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                : ((0x11U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                    ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                    : ((0x12U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                        ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                        : ((0x13U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                            ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                            : ((0x14U 
                                                == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                                : (
                                                   (0x15U 
                                                    == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                    ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                                    : 
                                                   ((0x16U 
                                                     == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                     ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                                     : 
                                                    ((0x17U 
                                                      == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                      ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                                      : 
                                                     ((0x18U 
                                                       == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                       ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                                       : 
                                                      ((0x19U 
                                                        == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                        ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                                        : 
                                                       ((0x1aU 
                                                         == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                         ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                                         : 
                                                        ((0x1bU 
                                                          == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                          ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                                          : 
                                                         ((0x1cU 
                                                           == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                           ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                                           : 
                                                          ((0x1dU 
                                                            == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                            ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                                            : 
                                                           ((0x1eU 
                                                             == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                             ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5
                                                             : top__DOT__u_Accel_all__DOT__control__DOT___GEN_724))))))))))))))))))));
    if ((3U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1768 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__yolo_finish;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1765 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1748 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_offset;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1731 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_2;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1747 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_fmbase;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1758 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1735 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1736 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1760 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1749 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_len;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1750 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_send_task_enable;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1743 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1745 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_task_enable;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1746 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__first_ofm_recv_stop;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1752 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1751 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_send;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1757 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1734 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1753 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1754 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1755 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1756 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1737 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1739 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1762 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1727 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1741 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1725 
            = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ap_done_up)
                ? 4U : 3U);
    } else if ((4U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1768 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__yolo_finish;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1765 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1748 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_offset;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1731 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_2;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1747 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_fmbase;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1758 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1735 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1736 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1760 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1749 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_len;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1750 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_send_task_enable;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1743 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1745 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_task_enable;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1746 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__first_ofm_recv_stop;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1752 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1751 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_send;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1757 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1734 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1753 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1754 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1755 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1756 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1737 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1739 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1762 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1727 
            = top__DOT__u_Accel_all__DOT__control__DOT___reg_t_5_T_6;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1741 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1725 = 5U;
    } else if ((5U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1768 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__yolo_finish;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1765 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1748 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_offset;
        if ((5U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__cnt_t))) {
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1731 
                = (((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__p_is_1) 
                    << 0x18U) | (((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__zp_act) 
                                  << 0x10U) | (((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__zp_out) 
                                                << 8U) 
                                               | (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__zp_in))));
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1725 = 6U;
        } else {
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1731 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_2;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1725 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state;
        }
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1747 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_fmbase;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1758 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1735 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1736 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1760 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1749 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_len;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1750 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_send_task_enable;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1743 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1745 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_task_enable;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1746 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__first_ofm_recv_stop;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1752 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1751 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_send;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1757 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1734 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1753 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1754 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1755 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1756 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1737 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1739 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_static;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1762 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1727 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1741 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task;
    } else {
        if ((6U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1768 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__yolo_finish;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1765 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1748 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_offset;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1747 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_fmbase;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1758 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1735 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1736 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1760 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__weight_sel;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1749 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_len;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1750 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_send_task_enable;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1743 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1745 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_task_enable;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1746 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__first_ofm_recv_stop;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1752 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1751 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_send;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1757 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1734 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1753 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1754 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1755 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1756 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1737 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1762 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1727 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1741 
                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1725 
                = ((IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ap_done_up)
                    ? 7U : 6U);
        } else {
            if ((7U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1768 
                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__yolo_finish;
                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1765 
                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt;
                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1748 
                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_offset;
                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1747 
                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_fmbase;
                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1758 
                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre;
                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1735 
                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1736 
                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1749 
                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_len;
                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1750 
                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_send_task_enable;
                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1743 
                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer;
                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1745 
                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_task_enable;
                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1746 
                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__first_ofm_recv_stop;
                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1752 
                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read;
                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1751 
                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_send;
                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1757 
                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1734 
                    = top__DOT__u_Accel_all__DOT__control__DOT___T_13;
                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1753 
                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1754 
                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1755 
                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1756 
                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1737 
                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len;
                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1762 
                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_ddr_read_en;
                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1727 
                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5;
                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1741 
                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task;
            } else {
                if ((8U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1768 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__yolo_finish;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1765 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1748 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_offset;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1747 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_fmbase;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1758 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1735 
                        = top__DOT__u_Accel_all__DOT__control__DOT___ifm_addr_fmbase_T;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1736 
                        = top__DOT__u_Accel_all__DOT__control__DOT___GEN_45;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1749 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_len;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1750 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_send_task_enable;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1743 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1745 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_task_enable;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1746 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__first_ofm_recv_stop;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1752 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1751 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_send;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1757 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1734 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1753 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1754 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1755 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1756 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1737 
                        = top__DOT__u_Accel_all__DOT__control__DOT___GEN_46;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1727 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1741 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task;
                } else if ((9U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1768 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__yolo_finish;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1765 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1748 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_offset;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1747 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_fmbase;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1758 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1735 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1736 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1749 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_len;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1750 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_send_task_enable;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1743 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1745 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_task_enable;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1746 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__first_ofm_recv_stop;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1752 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_read;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1751 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_send;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1757 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1734 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1753 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1754 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1755 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1756 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1737 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1727 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1741 
                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_task;
                } else {
                    if ((0xaU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1768 
                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__yolo_finish;
                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1765 
                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt;
                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1748 
                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_offset;
                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1747 
                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_fmbase;
                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1758 
                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre;
                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1735 
                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1736 
                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1749 
                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_len;
                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1750 
                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_send_task_enable;
                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1743 
                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer;
                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1745 
                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_task_enable;
                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1746 
                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__first_ofm_recv_stop;
                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1751 
                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_send;
                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1757 
                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1734 
                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable;
                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1753 
                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1754 
                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1755 
                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1756 
                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1737 
                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len;
                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1727 
                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_5;
                    } else {
                        if ((0xbU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1768 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__yolo_finish;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1765 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1748 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_offset;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1747 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_fmbase;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1758 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1735 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1736 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1749 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_len;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1750 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_send_task_enable;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1743 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1745 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_task_enable;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1746 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__first_ofm_recv_stop;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1751 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_send;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1757 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1734 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1753 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1754 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1755 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1756 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1737 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len;
                        } else if ((0xcU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1768 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__yolo_finish;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1765 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1748 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_offset;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1747 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_fmbase;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1758 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1735 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1736 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1749 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_len;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1750 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_send_task_enable;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1743 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1745 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_task_enable;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1746 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__first_ofm_recv_stop;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1751 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_send;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1757 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1734 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1753 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1754 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1755 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1756 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1737 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len;
                        } else if ((0xdU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1768 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__yolo_finish;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1765 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1748 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_offset;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1747 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_fmbase;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1758 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1735 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1736 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1749 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_len;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1750 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_send_task_enable;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1743 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1745 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_task_enable;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1746 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__first_ofm_recv_stop;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1751 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_send;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1757 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1734 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1753 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1754 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1755 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1756 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1737 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len;
                        } else {
                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1768 
                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1305;
                            if ((0xeU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1765 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1748 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_offset;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1747 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_fmbase;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1758 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1735 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1736 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1749 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_len;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1750 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_send_task_enable;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1743 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1745 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_task_enable;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1746 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__first_ofm_recv_stop;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1751 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_send;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1757 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1734 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1753 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1754 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1755 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1756 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1737 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len;
                            } else if ((0xfU == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1765 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1748 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_offset;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1747 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_fmbase;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1758 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1735 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1736 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1749 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_len;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1750 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_send_task_enable;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1743 
                                    = ((~ (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ap_done_up)) 
                                       & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer));
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1745 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_task_enable;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1746 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__first_ofm_recv_stop;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1751 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_send;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1757 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1734 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1753 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1754 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1755 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1756 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1737 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len;
                            } else if ((0x10U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1765 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1748 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_offset;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1747 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_fmbase;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1758 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1735 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1736 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1749 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_len;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1750 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_send_task_enable;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1743 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1745 
                                    = top__DOT__u_Accel_all__DOT__control__DOT___T_58;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1746 
                                    = ((IData)(top__DOT__u_Accel_all__DOT__control__DOT___T_58) 
                                       & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__first_ofm_recv_stop));
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1751 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_send;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1757 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1734 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1753 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1754 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1755 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1756 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1737 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len;
                            } else {
                                if ((0x11U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
                                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1765 
                                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__pool_cnt;
                                    if ((1U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_div_cnt))) {
                                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1748 = 0U;
                                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1749 
                                            = (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__fm_size_output 
                                               << 3U);
                                    } else {
                                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1748 
                                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_offset;
                                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1749 
                                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_len;
                                    }
                                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1747 
                                        = top__DOT__u_Accel_all__DOT__control__DOT___ofm_addr_fmbase_T;
                                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1758 
                                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre;
                                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1735 
                                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
                                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1736 
                                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
                                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1750 
                                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_send_task_enable;
                                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1743 
                                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer;
                                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1751 
                                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_send;
                                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1757 
                                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
                                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1734 
                                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable;
                                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1753 
                                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_post;
                                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1754 
                                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_post;
                                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1755 
                                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_post;
                                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1756 
                                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
                                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1737 
                                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len;
                                } else {
                                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1765 
                                        = top__DOT__u_Accel_all__DOT__control__DOT___GEN_1144;
                                    if ((0x12U == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
                                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1748 
                                            = top__DOT__u_Accel_all__DOT__control__DOT___GEN_84;
                                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1758 
                                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre;
                                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1735 
                                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
                                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1736 
                                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
                                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1749 
                                            = top__DOT__u_Accel_all__DOT__control__DOT___GEN_85;
                                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1750 
                                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_send_task_enable;
                                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1743 
                                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__bottleneck_transfer;
                                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1751 
                                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_send;
                                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1757 
                                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
                                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1734 
                                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable;
                                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1756 
                                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
                                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1737 
                                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len;
                                    } else {
                                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1748 
                                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_offset;
                                        if ((0x13U 
                                             == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
                                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1758 
                                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ofm_pre;
                                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1735 
                                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
                                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1736 
                                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
                                            if (top__DOT__u_Accel_all__DOT__control__DOT___T_67) {
                                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1750 = 1U;
                                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1751 
                                                    = 
                                                    (vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_send 
                                                     + top__DOT__u_Accel_all__DOT__control__DOT___reg_t_5_T_6);
                                            } else {
                                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1750 = 0U;
                                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1751 
                                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_send;
                                            }
                                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1757 
                                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_div_pre;
                                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1734 
                                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable;
                                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1756 
                                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__iter_ifm_pre;
                                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1737 
                                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len;
                                        } else {
                                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1758 
                                                = top__DOT__u_Accel_all__DOT__control__DOT___GEN_1056;
                                            if ((0x14U 
                                                 == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
                                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1735 
                                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
                                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1736 
                                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
                                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1734 
                                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable;
                                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1737 
                                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len;
                                            } else if (
                                                       (0x15U 
                                                        == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
                                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1735 
                                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
                                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1736 
                                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
                                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1734 
                                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable;
                                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1737 
                                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len;
                                            } else if (
                                                       (0x16U 
                                                        == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))) {
                                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1735 
                                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_fmbase;
                                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1736 
                                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_addr_offset;
                                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1734 
                                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_task_enable;
                                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1737 
                                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len;
                                            } else {
                                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1735 
                                                    = top__DOT__u_Accel_all__DOT__control__DOT___GEN_955;
                                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1736 
                                                    = top__DOT__u_Accel_all__DOT__control__DOT___GEN_956;
                                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1734 
                                                    = top__DOT__u_Accel_all__DOT__control__DOT___GEN_953;
                                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1737 
                                                    = 
                                                    ((0x17U 
                                                      == (IData)(vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__state))
                                                      ? vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ifm_send_len
                                                      : top__DOT__u_Accel_all__DOT__control__DOT___GEN_923);
                                            }
                                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1750 
                                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_send_task_enable;
                                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1751 
                                                = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__wgt_addr_send;
                                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1757 
                                                = top__DOT__u_Accel_all__DOT__control__DOT___GEN_1055;
                                            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1756 
                                                = top__DOT__u_Accel_all__DOT__control__DOT___GEN_1053;
                                        }
                                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1749 
                                            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_len;
                                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1743 
                                            = top__DOT__u_Accel_all__DOT__control__DOT___GEN_1089;
                                    }
                                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1747 
                                        = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_addr_fmbase;
                                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1753 
                                        = top__DOT__u_Accel_all__DOT__control__DOT___GEN_1121;
                                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1754 
                                        = top__DOT__u_Accel_all__DOT__control__DOT___GEN_1122;
                                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1755 
                                        = top__DOT__u_Accel_all__DOT__control__DOT___GEN_1123;
                                }
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1745 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__ofm_recv_task_enable;
                                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1746 
                                    = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__first_ofm_recv_stop;
                            }
                        }
                        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1727 
                            = top__DOT__u_Accel_all__DOT__control__DOT___GEN_1393;
                    }
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1752 
                        = top__DOT__u_Accel_all__DOT__control__DOT___GEN_1448;
                    vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1741 
                        = top__DOT__u_Accel_all__DOT__control__DOT___GEN_1433;
                }
                vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1762 
                    = top__DOT__u_Accel_all__DOT__control__DOT___GEN_1545;
            }
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1760 
                = top__DOT__u_Accel_all__DOT__control__DOT___GEN_1584;
            vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1725 
                = top__DOT__u_Accel_all__DOT__control__DOT___GEN_1554;
        }
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1731 
            = vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_2;
        vlSelf->top__DOT__u_Accel_all__DOT__control__DOT___GEN_1739 
            = top__DOT__u_Accel_all__DOT__control__DOT___GEN_1600;
    }
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bottleneck_finish_r_6 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bottleneck_finish_r_5));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bottleneck_finish_r_5 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bottleneck_finish_r_4));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bottleneck_finish_r_4 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bottleneck_finish_r_3));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bottleneck_finish_r_3 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bottleneck_finish_r_2));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bottleneck_finish_r_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bottleneck_finish_r_1));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bottleneck_finish_r_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bottleneck_finish_r));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bottleneck_finish_r 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bn_finish_upedge_REG)) 
                                         & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bn_finish)));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bn_finish_upedge_REG 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bn_finish));
    vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__bn_finish 
        = (((IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT__row_cnt) 
            == (0x3ffU & ((vlSelf->top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0 
                           >> 0x18U) - (IData)(1U)))) 
           & (IData)(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bn_add__DOT___col_cnt_T_2));
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_nba(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("rtl/top.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("rtl/top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("rtl/top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->dma_rbusy & 0xfeU))) {
        Verilated::overWidthError("dma_rbusy");}
    if (VL_UNLIKELY((vlSelf->dma_rvalid & 0xfeU))) {
        Verilated::overWidthError("dma_rvalid");}
    if (VL_UNLIKELY((vlSelf->dma_wbusy & 0xfeU))) {
        Verilated::overWidthError("dma_wbusy");}
    if (VL_UNLIKELY((vlSelf->dma_wready & 0xfeU))) {
        Verilated::overWidthError("dma_wready");}
}
#endif  // VL_DEBUG
