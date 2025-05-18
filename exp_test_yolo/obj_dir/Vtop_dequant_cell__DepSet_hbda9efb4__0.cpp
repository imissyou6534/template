// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_dequant_cell.h"

VL_INLINE_OPT void Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0__0(Vtop_dequant_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0__0\n"); );
    // Body
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
        vlSelf->__PVT__fp32_data_muler__DOT__carry_r 
            = (1U & (IData)((vlSelf->__PVT__fp32_data_muler__DOT___zf_0_T_2 
                             >> 0x2fU)));
    }
}

VL_INLINE_OPT void Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0__1(Vtop_dequant_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0__1\n"); );
    // Init
    IData/*22:0*/ __PVT__convert_data_convert__DOT___GEN_22;
    __PVT__convert_data_convert__DOT___GEN_22 = 0;
    // Body
    if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
        vlSelf->__PVT__fp32_data_muler__DOT__io_z_r 
            = (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__out_z_r) 
                << 0x1fU) | ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__is_zero)
                              ? 0U : ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__ze_r) 
                                           - ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                               ? 0x7eU
                                               : 0x7fU)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                             ? ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 2U) 
                                                + (1U 
                                                   & (vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                      >> 1U)))
                                             : ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 1U) 
                                                + (1U 
                                                   & vlSelf->__PVT__fp32_data_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
        vlSelf->__PVT__fp32_data_muler__DOT__zf_1 = 
            (0x1ffffffU & (IData)((vlSelf->__PVT__fp32_data_muler__DOT___zf_0_T_2 
                                   >> 0x16U)));
        vlSelf->__PVT__fp32_data_muler__DOT__out_z_r 
            = ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_sign) 
               ^ (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9 
                  >> 0x1fU));
        vlSelf->__PVT__fp32_data_muler__DOT__is_zero 
            = ((0U == (IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp)) 
               | (0U == (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9 
                                  >> 0x17U))));
        vlSelf->__PVT__fp32_data_muler__DOT__ze_r = 
            (0xffU & ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp) 
                      + (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9 
                         >> 0x17U)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__carry = ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry_r) 
                                                  | (0x1ffffffU 
                                                     == vlSelf->__PVT__fp32_data_muler__DOT__zf_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__convert_data_convert__DOT__float_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_frac = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_uint = 0U;
        vlSelf->__PVT__sub_module__DOT__out = 0U;
    } else {
        if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
            vlSelf->__PVT__convert_data_convert__DOT__float_sign 
                = vlSelf->__PVT__convert_data_convert__DOT__i_sign;
            if ((0x40000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9dU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 7U));
            } else if ((0x20000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9cU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 6U));
            } else if ((0x10000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9bU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 5U));
            } else if ((0x8000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9aU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 4U));
            } else if ((0x4000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x99U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 3U));
            } else if ((0x2000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x98U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 2U));
            } else if ((0x1000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x97U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 1U));
            } else if ((0x800000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x96U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT__i_uint);
            } else if ((0x400000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x95U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffeU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 1U)));
            } else if ((0x200000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x94U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffcU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 2U)));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp 
                    = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x93U : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x92U : ((0x40000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x91U
                                                : (
                                                   (0x20000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x90U
                                                    : (IData)(vlSelf->__PVT__convert_data_convert__DOT___GEN_35)))));
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT___GEN_42);
            }
        }
        if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
            if ((vlSelf->__PVT__convert_data_convert_io_i_data 
                 >> 0x1fU)) {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 1U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & ((IData)(1U) + 
                                      (~ ((((0x80U 
                                             & (IData)(vlSelf->__PVT__sub_module__DOT__out))
                                             ? 0x7fffffU
                                             : 0U) 
                                           << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out)))));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & vlSelf->__PVT__convert_data_convert_io_i_data);
            }
        }
        vlSelf->__PVT__sub_module__DOT__out = (0xffU 
                                               & (((0x20000U 
                                                    & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__generate_ctrl_signal__DOT__ctrl_task_state_bn__DOT__running_state)
                                                     ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__ifm_buf_io_ifm_o_data_0
                                                     : 
                                                    ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__yolo__DOT__sigmoid_en)
                                                      ? (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__yolo__DOT__cmp2__DOT__max_data)
                                                      : 0U))
                                                    : (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__quant__DOT__quant_unit_0__DOT___io_quant_result_T)) 
                                                  - 
                                                  (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_2 
                                                   >> 8U)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_35 
        = ((0x10000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? 0x8fU : ((0x8000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x8eU : ((0x4000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x8dU : ((0x2000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x8cU
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x8bU
                                                    : 
                                                   ((0x800U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 0x8aU
                                                     : 
                                                    ((0x400U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 0x89U
                                                      : 
                                                     ((0x200U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 0x88U
                                                       : 
                                                      ((0x100U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 0x87U
                                                        : 
                                                       ((0x80U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 0x86U
                                                         : 
                                                        ((0x40U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 0x85U
                                                          : 
                                                         ((0x20U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 0x84U
                                                           : 
                                                          ((0x10U 
                                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                            ? 0x83U
                                                            : 
                                                           ((8U 
                                                             & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                             ? 0x82U
                                                             : 
                                                            ((4U 
                                                              & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                              ? 0x81U
                                                              : 
                                                             ((2U 
                                                               & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                               ? 0x80U
                                                               : 
                                                              ((1U 
                                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                                ? 0x7fU
                                                                : 0U)))))))))))))))));
    __PVT__convert_data_convert__DOT___GEN_22 = ((0x400U 
                                                  & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                  ? 
                                                 (0x7fe000U 
                                                  & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                     << 0xdU))
                                                  : 
                                                 ((0x200U 
                                                   & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                   ? 
                                                  (0x7fc000U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 0xeU))
                                                   : 
                                                  ((0x100U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7f8000U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 0xfU))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7f0000U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 0x10U))
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7e0000U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 0x11U))
                                                      : 
                                                     ((0x20U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7c0000U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0x12U))
                                                       : 
                                                      ((0x10U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x780000U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0x13U))
                                                        : 
                                                       ((8U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x700000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0x14U))
                                                         : 
                                                        ((4U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 
                                                         (0x600000U 
                                                          & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                             << 0x15U))
                                                          : 
                                                         ((2U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 
                                                          (0x400000U 
                                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                              << 0x16U))
                                                           : 0U))))))))));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_42 
        = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? (0x7ffff8U & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                            << 3U)) : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                        ? (0x7ffff0U 
                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                              << 4U))
                                        : ((0x40000U 
                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                            ? (0x7fffe0U 
                                               & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                  << 5U))
                                            : ((0x20000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? (0x7fffc0U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 6U))
                                                : (
                                                   (0x10000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7fff80U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 7U))
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7fff00U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 8U))
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7ffe00U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 9U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7ffc00U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0xaU))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x7ff800U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0xbU))
                                                        : 
                                                       ((0x800U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x7ff000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0xcU))
                                                         : __PVT__convert_data_convert__DOT___GEN_22))))))))));
    vlSelf->__PVT__convert_data_convert_io_i_data = 
        ((((0x80U & (IData)(vlSelf->__PVT__sub_module__DOT__out))
            ? 0xffffffU : 0U) << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out));
}

VL_INLINE_OPT void Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0__2(Vtop_dequant_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0__2\n"); );
    // Body
    vlSelf->__PVT__fp32_data_muler__DOT___zf_0_T_2 
        = (0xffffffffffffULL & ((0x800000ULL | (QData)((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_frac))) 
                                * (0x800000ULL | (QData)((IData)(
                                                                 (0x7fffffU 
                                                                  & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9))))));
}

VL_INLINE_OPT void Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1__1(Vtop_dequant_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1__1\n"); );
    // Init
    IData/*22:0*/ __PVT__convert_data_convert__DOT___GEN_22;
    __PVT__convert_data_convert__DOT___GEN_22 = 0;
    // Body
    if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
        vlSelf->__PVT__fp32_data_muler__DOT__io_z_r 
            = (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__out_z_r) 
                << 0x1fU) | ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__is_zero)
                              ? 0U : ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__ze_r) 
                                           - ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                               ? 0x7eU
                                               : 0x7fU)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                             ? ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 2U) 
                                                + (1U 
                                                   & (vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                      >> 1U)))
                                             : ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 1U) 
                                                + (1U 
                                                   & vlSelf->__PVT__fp32_data_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
        vlSelf->__PVT__fp32_data_muler__DOT__zf_1 = 
            (0x1ffffffU & (IData)((vlSelf->__PVT__fp32_data_muler__DOT___zf_0_T_2 
                                   >> 0x16U)));
        vlSelf->__PVT__fp32_data_muler__DOT__out_z_r 
            = ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_sign) 
               ^ (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9 
                  >> 0x1fU));
        vlSelf->__PVT__fp32_data_muler__DOT__is_zero 
            = ((0U == (IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp)) 
               | (0U == (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9 
                                  >> 0x17U))));
        vlSelf->__PVT__fp32_data_muler__DOT__ze_r = 
            (0xffU & ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp) 
                      + (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9 
                         >> 0x17U)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__carry = ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry_r) 
                                                  | (0x1ffffffU 
                                                     == vlSelf->__PVT__fp32_data_muler__DOT__zf_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__convert_data_convert__DOT__float_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_frac = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_uint = 0U;
        vlSelf->__PVT__sub_module__DOT__out = 0U;
    } else {
        if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
            vlSelf->__PVT__convert_data_convert__DOT__float_sign 
                = vlSelf->__PVT__convert_data_convert__DOT__i_sign;
            if ((0x40000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9dU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 7U));
            } else if ((0x20000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9cU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 6U));
            } else if ((0x10000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9bU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 5U));
            } else if ((0x8000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9aU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 4U));
            } else if ((0x4000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x99U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 3U));
            } else if ((0x2000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x98U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 2U));
            } else if ((0x1000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x97U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 1U));
            } else if ((0x800000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x96U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT__i_uint);
            } else if ((0x400000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x95U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffeU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 1U)));
            } else if ((0x200000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x94U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffcU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 2U)));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp 
                    = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x93U : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x92U : ((0x40000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x91U
                                                : (
                                                   (0x20000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x90U
                                                    : (IData)(vlSelf->__PVT__convert_data_convert__DOT___GEN_35)))));
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT___GEN_42);
            }
        }
        if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
            if ((vlSelf->__PVT__convert_data_convert_io_i_data 
                 >> 0x1fU)) {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 1U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & ((IData)(1U) + 
                                      (~ ((((0x80U 
                                             & (IData)(vlSelf->__PVT__sub_module__DOT__out))
                                             ? 0x7fffffU
                                             : 0U) 
                                           << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out)))));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & vlSelf->__PVT__convert_data_convert_io_i_data);
            }
        }
        vlSelf->__PVT__sub_module__DOT__out = (0xffU 
                                               & (((0x20000U 
                                                    & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__generate_ctrl_signal__DOT__ctrl_task_state_bn__DOT__running_state)
                                                     ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__ifm_buf_io_ifm_o_data_1
                                                     : 0U)
                                                    : (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__quant__DOT__quant_unit_1__DOT___io_quant_result_T)) 
                                                  - 
                                                  (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_2 
                                                   >> 8U)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_35 
        = ((0x10000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? 0x8fU : ((0x8000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x8eU : ((0x4000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x8dU : ((0x2000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x8cU
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x8bU
                                                    : 
                                                   ((0x800U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 0x8aU
                                                     : 
                                                    ((0x400U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 0x89U
                                                      : 
                                                     ((0x200U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 0x88U
                                                       : 
                                                      ((0x100U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 0x87U
                                                        : 
                                                       ((0x80U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 0x86U
                                                         : 
                                                        ((0x40U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 0x85U
                                                          : 
                                                         ((0x20U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 0x84U
                                                           : 
                                                          ((0x10U 
                                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                            ? 0x83U
                                                            : 
                                                           ((8U 
                                                             & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                             ? 0x82U
                                                             : 
                                                            ((4U 
                                                              & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                              ? 0x81U
                                                              : 
                                                             ((2U 
                                                               & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                               ? 0x80U
                                                               : 
                                                              ((1U 
                                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                                ? 0x7fU
                                                                : 0U)))))))))))))))));
    __PVT__convert_data_convert__DOT___GEN_22 = ((0x400U 
                                                  & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                  ? 
                                                 (0x7fe000U 
                                                  & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                     << 0xdU))
                                                  : 
                                                 ((0x200U 
                                                   & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                   ? 
                                                  (0x7fc000U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 0xeU))
                                                   : 
                                                  ((0x100U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7f8000U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 0xfU))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7f0000U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 0x10U))
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7e0000U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 0x11U))
                                                      : 
                                                     ((0x20U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7c0000U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0x12U))
                                                       : 
                                                      ((0x10U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x780000U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0x13U))
                                                        : 
                                                       ((8U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x700000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0x14U))
                                                         : 
                                                        ((4U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 
                                                         (0x600000U 
                                                          & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                             << 0x15U))
                                                          : 
                                                         ((2U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 
                                                          (0x400000U 
                                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                              << 0x16U))
                                                           : 0U))))))))));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_42 
        = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? (0x7ffff8U & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                            << 3U)) : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                        ? (0x7ffff0U 
                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                              << 4U))
                                        : ((0x40000U 
                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                            ? (0x7fffe0U 
                                               & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                  << 5U))
                                            : ((0x20000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? (0x7fffc0U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 6U))
                                                : (
                                                   (0x10000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7fff80U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 7U))
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7fff00U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 8U))
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7ffe00U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 9U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7ffc00U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0xaU))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x7ff800U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0xbU))
                                                        : 
                                                       ((0x800U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x7ff000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0xcU))
                                                         : __PVT__convert_data_convert__DOT___GEN_22))))))))));
    vlSelf->__PVT__convert_data_convert_io_i_data = 
        ((((0x80U & (IData)(vlSelf->__PVT__sub_module__DOT__out))
            ? 0xffffffU : 0U) << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out));
}

VL_INLINE_OPT void Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2__1(Vtop_dequant_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2__1\n"); );
    // Init
    IData/*22:0*/ __PVT__convert_data_convert__DOT___GEN_22;
    __PVT__convert_data_convert__DOT___GEN_22 = 0;
    // Body
    if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
        vlSelf->__PVT__fp32_data_muler__DOT__io_z_r 
            = (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__out_z_r) 
                << 0x1fU) | ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__is_zero)
                              ? 0U : ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__ze_r) 
                                           - ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                               ? 0x7eU
                                               : 0x7fU)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                             ? ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 2U) 
                                                + (1U 
                                                   & (vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                      >> 1U)))
                                             : ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 1U) 
                                                + (1U 
                                                   & vlSelf->__PVT__fp32_data_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
        vlSelf->__PVT__fp32_data_muler__DOT__zf_1 = 
            (0x1ffffffU & (IData)((vlSelf->__PVT__fp32_data_muler__DOT___zf_0_T_2 
                                   >> 0x16U)));
        vlSelf->__PVT__fp32_data_muler__DOT__out_z_r 
            = ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_sign) 
               ^ (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9 
                  >> 0x1fU));
        vlSelf->__PVT__fp32_data_muler__DOT__is_zero 
            = ((0U == (IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp)) 
               | (0U == (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9 
                                  >> 0x17U))));
        vlSelf->__PVT__fp32_data_muler__DOT__ze_r = 
            (0xffU & ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp) 
                      + (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9 
                         >> 0x17U)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__carry = ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry_r) 
                                                  | (0x1ffffffU 
                                                     == vlSelf->__PVT__fp32_data_muler__DOT__zf_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__convert_data_convert__DOT__float_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_frac = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_uint = 0U;
        vlSelf->__PVT__sub_module__DOT__out = 0U;
    } else {
        if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
            vlSelf->__PVT__convert_data_convert__DOT__float_sign 
                = vlSelf->__PVT__convert_data_convert__DOT__i_sign;
            if ((0x40000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9dU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 7U));
            } else if ((0x20000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9cU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 6U));
            } else if ((0x10000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9bU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 5U));
            } else if ((0x8000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9aU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 4U));
            } else if ((0x4000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x99U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 3U));
            } else if ((0x2000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x98U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 2U));
            } else if ((0x1000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x97U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 1U));
            } else if ((0x800000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x96U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT__i_uint);
            } else if ((0x400000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x95U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffeU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 1U)));
            } else if ((0x200000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x94U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffcU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 2U)));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp 
                    = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x93U : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x92U : ((0x40000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x91U
                                                : (
                                                   (0x20000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x90U
                                                    : (IData)(vlSelf->__PVT__convert_data_convert__DOT___GEN_35)))));
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT___GEN_42);
            }
        }
        if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
            if ((vlSelf->__PVT__convert_data_convert_io_i_data 
                 >> 0x1fU)) {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 1U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & ((IData)(1U) + 
                                      (~ ((((0x80U 
                                             & (IData)(vlSelf->__PVT__sub_module__DOT__out))
                                             ? 0x7fffffU
                                             : 0U) 
                                           << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out)))));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & vlSelf->__PVT__convert_data_convert_io_i_data);
            }
        }
        vlSelf->__PVT__sub_module__DOT__out = (0xffU 
                                               & (((0x20000U 
                                                    & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__generate_ctrl_signal__DOT__ctrl_task_state_bn__DOT__running_state)
                                                     ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__ifm_buf_io_ifm_o_data_2
                                                     : 0U)
                                                    : (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__quant__DOT__quant_unit_2__DOT___io_quant_result_T)) 
                                                  - 
                                                  (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_2 
                                                   >> 8U)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_35 
        = ((0x10000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? 0x8fU : ((0x8000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x8eU : ((0x4000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x8dU : ((0x2000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x8cU
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x8bU
                                                    : 
                                                   ((0x800U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 0x8aU
                                                     : 
                                                    ((0x400U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 0x89U
                                                      : 
                                                     ((0x200U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 0x88U
                                                       : 
                                                      ((0x100U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 0x87U
                                                        : 
                                                       ((0x80U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 0x86U
                                                         : 
                                                        ((0x40U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 0x85U
                                                          : 
                                                         ((0x20U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 0x84U
                                                           : 
                                                          ((0x10U 
                                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                            ? 0x83U
                                                            : 
                                                           ((8U 
                                                             & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                             ? 0x82U
                                                             : 
                                                            ((4U 
                                                              & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                              ? 0x81U
                                                              : 
                                                             ((2U 
                                                               & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                               ? 0x80U
                                                               : 
                                                              ((1U 
                                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                                ? 0x7fU
                                                                : 0U)))))))))))))))));
    __PVT__convert_data_convert__DOT___GEN_22 = ((0x400U 
                                                  & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                  ? 
                                                 (0x7fe000U 
                                                  & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                     << 0xdU))
                                                  : 
                                                 ((0x200U 
                                                   & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                   ? 
                                                  (0x7fc000U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 0xeU))
                                                   : 
                                                  ((0x100U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7f8000U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 0xfU))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7f0000U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 0x10U))
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7e0000U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 0x11U))
                                                      : 
                                                     ((0x20U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7c0000U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0x12U))
                                                       : 
                                                      ((0x10U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x780000U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0x13U))
                                                        : 
                                                       ((8U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x700000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0x14U))
                                                         : 
                                                        ((4U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 
                                                         (0x600000U 
                                                          & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                             << 0x15U))
                                                          : 
                                                         ((2U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 
                                                          (0x400000U 
                                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                              << 0x16U))
                                                           : 0U))))))))));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_42 
        = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? (0x7ffff8U & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                            << 3U)) : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                        ? (0x7ffff0U 
                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                              << 4U))
                                        : ((0x40000U 
                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                            ? (0x7fffe0U 
                                               & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                  << 5U))
                                            : ((0x20000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? (0x7fffc0U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 6U))
                                                : (
                                                   (0x10000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7fff80U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 7U))
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7fff00U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 8U))
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7ffe00U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 9U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7ffc00U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0xaU))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x7ff800U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0xbU))
                                                        : 
                                                       ((0x800U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x7ff000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0xcU))
                                                         : __PVT__convert_data_convert__DOT___GEN_22))))))))));
    vlSelf->__PVT__convert_data_convert_io_i_data = 
        ((((0x80U & (IData)(vlSelf->__PVT__sub_module__DOT__out))
            ? 0xffffffU : 0U) << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out));
}

VL_INLINE_OPT void Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3__1(Vtop_dequant_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3__1\n"); );
    // Init
    IData/*22:0*/ __PVT__convert_data_convert__DOT___GEN_22;
    __PVT__convert_data_convert__DOT___GEN_22 = 0;
    // Body
    if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
        vlSelf->__PVT__fp32_data_muler__DOT__io_z_r 
            = (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__out_z_r) 
                << 0x1fU) | ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__is_zero)
                              ? 0U : ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__ze_r) 
                                           - ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                               ? 0x7eU
                                               : 0x7fU)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                             ? ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 2U) 
                                                + (1U 
                                                   & (vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                      >> 1U)))
                                             : ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 1U) 
                                                + (1U 
                                                   & vlSelf->__PVT__fp32_data_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
        vlSelf->__PVT__fp32_data_muler__DOT__zf_1 = 
            (0x1ffffffU & (IData)((vlSelf->__PVT__fp32_data_muler__DOT___zf_0_T_2 
                                   >> 0x16U)));
        vlSelf->__PVT__fp32_data_muler__DOT__out_z_r 
            = ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_sign) 
               ^ (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9 
                  >> 0x1fU));
        vlSelf->__PVT__fp32_data_muler__DOT__is_zero 
            = ((0U == (IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp)) 
               | (0U == (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9 
                                  >> 0x17U))));
        vlSelf->__PVT__fp32_data_muler__DOT__ze_r = 
            (0xffU & ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp) 
                      + (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9 
                         >> 0x17U)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__carry = ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry_r) 
                                                  | (0x1ffffffU 
                                                     == vlSelf->__PVT__fp32_data_muler__DOT__zf_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__convert_data_convert__DOT__float_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_frac = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_uint = 0U;
        vlSelf->__PVT__sub_module__DOT__out = 0U;
    } else {
        if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
            vlSelf->__PVT__convert_data_convert__DOT__float_sign 
                = vlSelf->__PVT__convert_data_convert__DOT__i_sign;
            if ((0x40000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9dU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 7U));
            } else if ((0x20000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9cU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 6U));
            } else if ((0x10000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9bU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 5U));
            } else if ((0x8000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9aU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 4U));
            } else if ((0x4000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x99U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 3U));
            } else if ((0x2000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x98U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 2U));
            } else if ((0x1000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x97U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 1U));
            } else if ((0x800000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x96U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT__i_uint);
            } else if ((0x400000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x95U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffeU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 1U)));
            } else if ((0x200000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x94U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffcU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 2U)));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp 
                    = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x93U : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x92U : ((0x40000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x91U
                                                : (
                                                   (0x20000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x90U
                                                    : (IData)(vlSelf->__PVT__convert_data_convert__DOT___GEN_35)))));
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT___GEN_42);
            }
        }
        if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
            if ((vlSelf->__PVT__convert_data_convert_io_i_data 
                 >> 0x1fU)) {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 1U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & ((IData)(1U) + 
                                      (~ ((((0x80U 
                                             & (IData)(vlSelf->__PVT__sub_module__DOT__out))
                                             ? 0x7fffffU
                                             : 0U) 
                                           << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out)))));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & vlSelf->__PVT__convert_data_convert_io_i_data);
            }
        }
        vlSelf->__PVT__sub_module__DOT__out = (0xffU 
                                               & (((0x20000U 
                                                    & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__generate_ctrl_signal__DOT__ctrl_task_state_bn__DOT__running_state)
                                                     ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__ifm_buf_io_ifm_o_data_3
                                                     : 0U)
                                                    : (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__quant__DOT__quant_unit_3__DOT___io_quant_result_T)) 
                                                  - 
                                                  (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_2 
                                                   >> 8U)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_35 
        = ((0x10000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? 0x8fU : ((0x8000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x8eU : ((0x4000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x8dU : ((0x2000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x8cU
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x8bU
                                                    : 
                                                   ((0x800U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 0x8aU
                                                     : 
                                                    ((0x400U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 0x89U
                                                      : 
                                                     ((0x200U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 0x88U
                                                       : 
                                                      ((0x100U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 0x87U
                                                        : 
                                                       ((0x80U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 0x86U
                                                         : 
                                                        ((0x40U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 0x85U
                                                          : 
                                                         ((0x20U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 0x84U
                                                           : 
                                                          ((0x10U 
                                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                            ? 0x83U
                                                            : 
                                                           ((8U 
                                                             & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                             ? 0x82U
                                                             : 
                                                            ((4U 
                                                              & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                              ? 0x81U
                                                              : 
                                                             ((2U 
                                                               & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                               ? 0x80U
                                                               : 
                                                              ((1U 
                                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                                ? 0x7fU
                                                                : 0U)))))))))))))))));
    __PVT__convert_data_convert__DOT___GEN_22 = ((0x400U 
                                                  & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                  ? 
                                                 (0x7fe000U 
                                                  & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                     << 0xdU))
                                                  : 
                                                 ((0x200U 
                                                   & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                   ? 
                                                  (0x7fc000U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 0xeU))
                                                   : 
                                                  ((0x100U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7f8000U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 0xfU))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7f0000U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 0x10U))
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7e0000U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 0x11U))
                                                      : 
                                                     ((0x20U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7c0000U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0x12U))
                                                       : 
                                                      ((0x10U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x780000U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0x13U))
                                                        : 
                                                       ((8U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x700000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0x14U))
                                                         : 
                                                        ((4U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 
                                                         (0x600000U 
                                                          & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                             << 0x15U))
                                                          : 
                                                         ((2U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 
                                                          (0x400000U 
                                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                              << 0x16U))
                                                           : 0U))))))))));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_42 
        = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? (0x7ffff8U & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                            << 3U)) : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                        ? (0x7ffff0U 
                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                              << 4U))
                                        : ((0x40000U 
                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                            ? (0x7fffe0U 
                                               & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                  << 5U))
                                            : ((0x20000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? (0x7fffc0U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 6U))
                                                : (
                                                   (0x10000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7fff80U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 7U))
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7fff00U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 8U))
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7ffe00U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 9U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7ffc00U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0xaU))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x7ff800U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0xbU))
                                                        : 
                                                       ((0x800U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x7ff000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0xcU))
                                                         : __PVT__convert_data_convert__DOT___GEN_22))))))))));
    vlSelf->__PVT__convert_data_convert_io_i_data = 
        ((((0x80U & (IData)(vlSelf->__PVT__sub_module__DOT__out))
            ? 0xffffffU : 0U) << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out));
}

VL_INLINE_OPT void Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4__1(Vtop_dequant_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4__1\n"); );
    // Init
    IData/*22:0*/ __PVT__convert_data_convert__DOT___GEN_22;
    __PVT__convert_data_convert__DOT___GEN_22 = 0;
    // Body
    if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
        vlSelf->__PVT__fp32_data_muler__DOT__io_z_r 
            = (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__out_z_r) 
                << 0x1fU) | ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__is_zero)
                              ? 0U : ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__ze_r) 
                                           - ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                               ? 0x7eU
                                               : 0x7fU)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                             ? ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 2U) 
                                                + (1U 
                                                   & (vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                      >> 1U)))
                                             : ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 1U) 
                                                + (1U 
                                                   & vlSelf->__PVT__fp32_data_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
        vlSelf->__PVT__fp32_data_muler__DOT__zf_1 = 
            (0x1ffffffU & (IData)((vlSelf->__PVT__fp32_data_muler__DOT___zf_0_T_2 
                                   >> 0x16U)));
        vlSelf->__PVT__fp32_data_muler__DOT__out_z_r 
            = ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_sign) 
               ^ (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9 
                  >> 0x1fU));
        vlSelf->__PVT__fp32_data_muler__DOT__is_zero 
            = ((0U == (IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp)) 
               | (0U == (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9 
                                  >> 0x17U))));
        vlSelf->__PVT__fp32_data_muler__DOT__ze_r = 
            (0xffU & ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp) 
                      + (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9 
                         >> 0x17U)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__carry = ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry_r) 
                                                  | (0x1ffffffU 
                                                     == vlSelf->__PVT__fp32_data_muler__DOT__zf_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__convert_data_convert__DOT__float_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_frac = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_uint = 0U;
        vlSelf->__PVT__sub_module__DOT__out = 0U;
    } else {
        if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
            vlSelf->__PVT__convert_data_convert__DOT__float_sign 
                = vlSelf->__PVT__convert_data_convert__DOT__i_sign;
            if ((0x40000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9dU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 7U));
            } else if ((0x20000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9cU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 6U));
            } else if ((0x10000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9bU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 5U));
            } else if ((0x8000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9aU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 4U));
            } else if ((0x4000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x99U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 3U));
            } else if ((0x2000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x98U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 2U));
            } else if ((0x1000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x97U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 1U));
            } else if ((0x800000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x96U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT__i_uint);
            } else if ((0x400000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x95U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffeU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 1U)));
            } else if ((0x200000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x94U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffcU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 2U)));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp 
                    = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x93U : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x92U : ((0x40000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x91U
                                                : (
                                                   (0x20000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x90U
                                                    : (IData)(vlSelf->__PVT__convert_data_convert__DOT___GEN_35)))));
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT___GEN_42);
            }
        }
        if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
            if ((vlSelf->__PVT__convert_data_convert_io_i_data 
                 >> 0x1fU)) {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 1U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & ((IData)(1U) + 
                                      (~ ((((0x80U 
                                             & (IData)(vlSelf->__PVT__sub_module__DOT__out))
                                             ? 0x7fffffU
                                             : 0U) 
                                           << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out)))));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & vlSelf->__PVT__convert_data_convert_io_i_data);
            }
        }
        vlSelf->__PVT__sub_module__DOT__out = (0xffU 
                                               & (((0x20000U 
                                                    & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__generate_ctrl_signal__DOT__ctrl_task_state_bn__DOT__running_state)
                                                     ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__ifm_buf_io_ifm_o_data_4
                                                     : 0U)
                                                    : (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__quant__DOT__quant_unit_4__DOT___io_quant_result_T)) 
                                                  - 
                                                  (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_2 
                                                   >> 8U)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_35 
        = ((0x10000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? 0x8fU : ((0x8000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x8eU : ((0x4000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x8dU : ((0x2000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x8cU
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x8bU
                                                    : 
                                                   ((0x800U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 0x8aU
                                                     : 
                                                    ((0x400U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 0x89U
                                                      : 
                                                     ((0x200U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 0x88U
                                                       : 
                                                      ((0x100U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 0x87U
                                                        : 
                                                       ((0x80U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 0x86U
                                                         : 
                                                        ((0x40U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 0x85U
                                                          : 
                                                         ((0x20U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 0x84U
                                                           : 
                                                          ((0x10U 
                                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                            ? 0x83U
                                                            : 
                                                           ((8U 
                                                             & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                             ? 0x82U
                                                             : 
                                                            ((4U 
                                                              & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                              ? 0x81U
                                                              : 
                                                             ((2U 
                                                               & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                               ? 0x80U
                                                               : 
                                                              ((1U 
                                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                                ? 0x7fU
                                                                : 0U)))))))))))))))));
    __PVT__convert_data_convert__DOT___GEN_22 = ((0x400U 
                                                  & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                  ? 
                                                 (0x7fe000U 
                                                  & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                     << 0xdU))
                                                  : 
                                                 ((0x200U 
                                                   & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                   ? 
                                                  (0x7fc000U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 0xeU))
                                                   : 
                                                  ((0x100U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7f8000U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 0xfU))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7f0000U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 0x10U))
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7e0000U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 0x11U))
                                                      : 
                                                     ((0x20U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7c0000U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0x12U))
                                                       : 
                                                      ((0x10U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x780000U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0x13U))
                                                        : 
                                                       ((8U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x700000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0x14U))
                                                         : 
                                                        ((4U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 
                                                         (0x600000U 
                                                          & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                             << 0x15U))
                                                          : 
                                                         ((2U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 
                                                          (0x400000U 
                                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                              << 0x16U))
                                                           : 0U))))))))));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_42 
        = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? (0x7ffff8U & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                            << 3U)) : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                        ? (0x7ffff0U 
                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                              << 4U))
                                        : ((0x40000U 
                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                            ? (0x7fffe0U 
                                               & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                  << 5U))
                                            : ((0x20000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? (0x7fffc0U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 6U))
                                                : (
                                                   (0x10000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7fff80U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 7U))
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7fff00U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 8U))
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7ffe00U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 9U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7ffc00U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0xaU))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x7ff800U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0xbU))
                                                        : 
                                                       ((0x800U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x7ff000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0xcU))
                                                         : __PVT__convert_data_convert__DOT___GEN_22))))))))));
    vlSelf->__PVT__convert_data_convert_io_i_data = 
        ((((0x80U & (IData)(vlSelf->__PVT__sub_module__DOT__out))
            ? 0xffffffU : 0U) << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out));
}

VL_INLINE_OPT void Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5__1(Vtop_dequant_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5__1\n"); );
    // Init
    IData/*22:0*/ __PVT__convert_data_convert__DOT___GEN_22;
    __PVT__convert_data_convert__DOT___GEN_22 = 0;
    // Body
    if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
        vlSelf->__PVT__fp32_data_muler__DOT__io_z_r 
            = (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__out_z_r) 
                << 0x1fU) | ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__is_zero)
                              ? 0U : ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__ze_r) 
                                           - ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                               ? 0x7eU
                                               : 0x7fU)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                             ? ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 2U) 
                                                + (1U 
                                                   & (vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                      >> 1U)))
                                             : ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 1U) 
                                                + (1U 
                                                   & vlSelf->__PVT__fp32_data_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
        vlSelf->__PVT__fp32_data_muler__DOT__zf_1 = 
            (0x1ffffffU & (IData)((vlSelf->__PVT__fp32_data_muler__DOT___zf_0_T_2 
                                   >> 0x16U)));
        vlSelf->__PVT__fp32_data_muler__DOT__out_z_r 
            = ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_sign) 
               ^ (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9 
                  >> 0x1fU));
        vlSelf->__PVT__fp32_data_muler__DOT__is_zero 
            = ((0U == (IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp)) 
               | (0U == (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9 
                                  >> 0x17U))));
        vlSelf->__PVT__fp32_data_muler__DOT__ze_r = 
            (0xffU & ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp) 
                      + (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9 
                         >> 0x17U)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__carry = ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry_r) 
                                                  | (0x1ffffffU 
                                                     == vlSelf->__PVT__fp32_data_muler__DOT__zf_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__convert_data_convert__DOT__float_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_frac = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_uint = 0U;
        vlSelf->__PVT__sub_module__DOT__out = 0U;
    } else {
        if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
            vlSelf->__PVT__convert_data_convert__DOT__float_sign 
                = vlSelf->__PVT__convert_data_convert__DOT__i_sign;
            if ((0x40000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9dU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 7U));
            } else if ((0x20000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9cU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 6U));
            } else if ((0x10000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9bU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 5U));
            } else if ((0x8000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9aU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 4U));
            } else if ((0x4000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x99U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 3U));
            } else if ((0x2000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x98U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 2U));
            } else if ((0x1000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x97U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 1U));
            } else if ((0x800000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x96U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT__i_uint);
            } else if ((0x400000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x95U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffeU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 1U)));
            } else if ((0x200000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x94U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffcU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 2U)));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp 
                    = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x93U : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x92U : ((0x40000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x91U
                                                : (
                                                   (0x20000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x90U
                                                    : (IData)(vlSelf->__PVT__convert_data_convert__DOT___GEN_35)))));
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT___GEN_42);
            }
        }
        if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
            if ((vlSelf->__PVT__convert_data_convert_io_i_data 
                 >> 0x1fU)) {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 1U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & ((IData)(1U) + 
                                      (~ ((((0x80U 
                                             & (IData)(vlSelf->__PVT__sub_module__DOT__out))
                                             ? 0x7fffffU
                                             : 0U) 
                                           << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out)))));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & vlSelf->__PVT__convert_data_convert_io_i_data);
            }
        }
        vlSelf->__PVT__sub_module__DOT__out = (0xffU 
                                               & (((0x20000U 
                                                    & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__generate_ctrl_signal__DOT__ctrl_task_state_bn__DOT__running_state)
                                                     ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__ifm_buf_io_ifm_o_data_5
                                                     : 0U)
                                                    : (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__quant__DOT__quant_unit_5__DOT___io_quant_result_T)) 
                                                  - 
                                                  (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_2 
                                                   >> 8U)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_35 
        = ((0x10000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? 0x8fU : ((0x8000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x8eU : ((0x4000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x8dU : ((0x2000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x8cU
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x8bU
                                                    : 
                                                   ((0x800U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 0x8aU
                                                     : 
                                                    ((0x400U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 0x89U
                                                      : 
                                                     ((0x200U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 0x88U
                                                       : 
                                                      ((0x100U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 0x87U
                                                        : 
                                                       ((0x80U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 0x86U
                                                         : 
                                                        ((0x40U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 0x85U
                                                          : 
                                                         ((0x20U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 0x84U
                                                           : 
                                                          ((0x10U 
                                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                            ? 0x83U
                                                            : 
                                                           ((8U 
                                                             & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                             ? 0x82U
                                                             : 
                                                            ((4U 
                                                              & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                              ? 0x81U
                                                              : 
                                                             ((2U 
                                                               & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                               ? 0x80U
                                                               : 
                                                              ((1U 
                                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                                ? 0x7fU
                                                                : 0U)))))))))))))))));
    __PVT__convert_data_convert__DOT___GEN_22 = ((0x400U 
                                                  & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                  ? 
                                                 (0x7fe000U 
                                                  & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                     << 0xdU))
                                                  : 
                                                 ((0x200U 
                                                   & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                   ? 
                                                  (0x7fc000U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 0xeU))
                                                   : 
                                                  ((0x100U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7f8000U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 0xfU))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7f0000U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 0x10U))
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7e0000U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 0x11U))
                                                      : 
                                                     ((0x20U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7c0000U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0x12U))
                                                       : 
                                                      ((0x10U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x780000U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0x13U))
                                                        : 
                                                       ((8U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x700000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0x14U))
                                                         : 
                                                        ((4U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 
                                                         (0x600000U 
                                                          & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                             << 0x15U))
                                                          : 
                                                         ((2U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 
                                                          (0x400000U 
                                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                              << 0x16U))
                                                           : 0U))))))))));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_42 
        = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? (0x7ffff8U & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                            << 3U)) : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                        ? (0x7ffff0U 
                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                              << 4U))
                                        : ((0x40000U 
                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                            ? (0x7fffe0U 
                                               & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                  << 5U))
                                            : ((0x20000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? (0x7fffc0U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 6U))
                                                : (
                                                   (0x10000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7fff80U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 7U))
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7fff00U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 8U))
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7ffe00U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 9U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7ffc00U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0xaU))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x7ff800U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0xbU))
                                                        : 
                                                       ((0x800U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x7ff000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0xcU))
                                                         : __PVT__convert_data_convert__DOT___GEN_22))))))))));
    vlSelf->__PVT__convert_data_convert_io_i_data = 
        ((((0x80U & (IData)(vlSelf->__PVT__sub_module__DOT__out))
            ? 0xffffffU : 0U) << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out));
}

VL_INLINE_OPT void Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6__1(Vtop_dequant_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6__1\n"); );
    // Init
    IData/*22:0*/ __PVT__convert_data_convert__DOT___GEN_22;
    __PVT__convert_data_convert__DOT___GEN_22 = 0;
    // Body
    if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
        vlSelf->__PVT__fp32_data_muler__DOT__io_z_r 
            = (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__out_z_r) 
                << 0x1fU) | ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__is_zero)
                              ? 0U : ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__ze_r) 
                                           - ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                               ? 0x7eU
                                               : 0x7fU)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                             ? ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 2U) 
                                                + (1U 
                                                   & (vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                      >> 1U)))
                                             : ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 1U) 
                                                + (1U 
                                                   & vlSelf->__PVT__fp32_data_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
        vlSelf->__PVT__fp32_data_muler__DOT__zf_1 = 
            (0x1ffffffU & (IData)((vlSelf->__PVT__fp32_data_muler__DOT___zf_0_T_2 
                                   >> 0x16U)));
        vlSelf->__PVT__fp32_data_muler__DOT__out_z_r 
            = ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_sign) 
               ^ (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9 
                  >> 0x1fU));
        vlSelf->__PVT__fp32_data_muler__DOT__is_zero 
            = ((0U == (IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp)) 
               | (0U == (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9 
                                  >> 0x17U))));
        vlSelf->__PVT__fp32_data_muler__DOT__ze_r = 
            (0xffU & ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp) 
                      + (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9 
                         >> 0x17U)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__carry = ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry_r) 
                                                  | (0x1ffffffU 
                                                     == vlSelf->__PVT__fp32_data_muler__DOT__zf_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__convert_data_convert__DOT__float_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_frac = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_uint = 0U;
        vlSelf->__PVT__sub_module__DOT__out = 0U;
    } else {
        if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
            vlSelf->__PVT__convert_data_convert__DOT__float_sign 
                = vlSelf->__PVT__convert_data_convert__DOT__i_sign;
            if ((0x40000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9dU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 7U));
            } else if ((0x20000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9cU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 6U));
            } else if ((0x10000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9bU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 5U));
            } else if ((0x8000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9aU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 4U));
            } else if ((0x4000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x99U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 3U));
            } else if ((0x2000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x98U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 2U));
            } else if ((0x1000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x97U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 1U));
            } else if ((0x800000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x96U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT__i_uint);
            } else if ((0x400000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x95U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffeU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 1U)));
            } else if ((0x200000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x94U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffcU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 2U)));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp 
                    = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x93U : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x92U : ((0x40000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x91U
                                                : (
                                                   (0x20000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x90U
                                                    : (IData)(vlSelf->__PVT__convert_data_convert__DOT___GEN_35)))));
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT___GEN_42);
            }
        }
        if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
            if ((vlSelf->__PVT__convert_data_convert_io_i_data 
                 >> 0x1fU)) {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 1U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & ((IData)(1U) + 
                                      (~ ((((0x80U 
                                             & (IData)(vlSelf->__PVT__sub_module__DOT__out))
                                             ? 0x7fffffU
                                             : 0U) 
                                           << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out)))));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & vlSelf->__PVT__convert_data_convert_io_i_data);
            }
        }
        vlSelf->__PVT__sub_module__DOT__out = (0xffU 
                                               & (((0x20000U 
                                                    & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__generate_ctrl_signal__DOT__ctrl_task_state_bn__DOT__running_state)
                                                     ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__ifm_buf_io_ifm_o_data_6
                                                     : 0U)
                                                    : (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__quant__DOT__quant_unit_6__DOT___io_quant_result_T)) 
                                                  - 
                                                  (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_2 
                                                   >> 8U)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_35 
        = ((0x10000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? 0x8fU : ((0x8000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x8eU : ((0x4000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x8dU : ((0x2000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x8cU
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x8bU
                                                    : 
                                                   ((0x800U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 0x8aU
                                                     : 
                                                    ((0x400U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 0x89U
                                                      : 
                                                     ((0x200U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 0x88U
                                                       : 
                                                      ((0x100U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 0x87U
                                                        : 
                                                       ((0x80U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 0x86U
                                                         : 
                                                        ((0x40U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 0x85U
                                                          : 
                                                         ((0x20U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 0x84U
                                                           : 
                                                          ((0x10U 
                                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                            ? 0x83U
                                                            : 
                                                           ((8U 
                                                             & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                             ? 0x82U
                                                             : 
                                                            ((4U 
                                                              & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                              ? 0x81U
                                                              : 
                                                             ((2U 
                                                               & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                               ? 0x80U
                                                               : 
                                                              ((1U 
                                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                                ? 0x7fU
                                                                : 0U)))))))))))))))));
    __PVT__convert_data_convert__DOT___GEN_22 = ((0x400U 
                                                  & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                  ? 
                                                 (0x7fe000U 
                                                  & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                     << 0xdU))
                                                  : 
                                                 ((0x200U 
                                                   & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                   ? 
                                                  (0x7fc000U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 0xeU))
                                                   : 
                                                  ((0x100U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7f8000U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 0xfU))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7f0000U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 0x10U))
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7e0000U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 0x11U))
                                                      : 
                                                     ((0x20U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7c0000U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0x12U))
                                                       : 
                                                      ((0x10U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x780000U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0x13U))
                                                        : 
                                                       ((8U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x700000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0x14U))
                                                         : 
                                                        ((4U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 
                                                         (0x600000U 
                                                          & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                             << 0x15U))
                                                          : 
                                                         ((2U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 
                                                          (0x400000U 
                                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                              << 0x16U))
                                                           : 0U))))))))));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_42 
        = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? (0x7ffff8U & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                            << 3U)) : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                        ? (0x7ffff0U 
                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                              << 4U))
                                        : ((0x40000U 
                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                            ? (0x7fffe0U 
                                               & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                  << 5U))
                                            : ((0x20000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? (0x7fffc0U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 6U))
                                                : (
                                                   (0x10000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7fff80U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 7U))
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7fff00U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 8U))
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7ffe00U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 9U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7ffc00U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0xaU))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x7ff800U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0xbU))
                                                        : 
                                                       ((0x800U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x7ff000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0xcU))
                                                         : __PVT__convert_data_convert__DOT___GEN_22))))))))));
    vlSelf->__PVT__convert_data_convert_io_i_data = 
        ((((0x80U & (IData)(vlSelf->__PVT__sub_module__DOT__out))
            ? 0xffffffU : 0U) << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out));
}

VL_INLINE_OPT void Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7__1(Vtop_dequant_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7__1\n"); );
    // Init
    IData/*22:0*/ __PVT__convert_data_convert__DOT___GEN_22;
    __PVT__convert_data_convert__DOT___GEN_22 = 0;
    // Body
    if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
        vlSelf->__PVT__fp32_data_muler__DOT__io_z_r 
            = (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__out_z_r) 
                << 0x1fU) | ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__is_zero)
                              ? 0U : ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__ze_r) 
                                           - ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                               ? 0x7eU
                                               : 0x7fU)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                             ? ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 2U) 
                                                + (1U 
                                                   & (vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                      >> 1U)))
                                             : ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 1U) 
                                                + (1U 
                                                   & vlSelf->__PVT__fp32_data_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
        vlSelf->__PVT__fp32_data_muler__DOT__zf_1 = 
            (0x1ffffffU & (IData)((vlSelf->__PVT__fp32_data_muler__DOT___zf_0_T_2 
                                   >> 0x16U)));
        vlSelf->__PVT__fp32_data_muler__DOT__out_z_r 
            = ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_sign) 
               ^ (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9 
                  >> 0x1fU));
        vlSelf->__PVT__fp32_data_muler__DOT__is_zero 
            = ((0U == (IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp)) 
               | (0U == (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9 
                                  >> 0x17U))));
        vlSelf->__PVT__fp32_data_muler__DOT__ze_r = 
            (0xffU & ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp) 
                      + (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9 
                         >> 0x17U)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__carry = ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry_r) 
                                                  | (0x1ffffffU 
                                                     == vlSelf->__PVT__fp32_data_muler__DOT__zf_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__convert_data_convert__DOT__float_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_frac = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_uint = 0U;
        vlSelf->__PVT__sub_module__DOT__out = 0U;
    } else {
        if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
            vlSelf->__PVT__convert_data_convert__DOT__float_sign 
                = vlSelf->__PVT__convert_data_convert__DOT__i_sign;
            if ((0x40000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9dU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 7U));
            } else if ((0x20000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9cU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 6U));
            } else if ((0x10000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9bU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 5U));
            } else if ((0x8000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9aU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 4U));
            } else if ((0x4000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x99U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 3U));
            } else if ((0x2000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x98U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 2U));
            } else if ((0x1000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x97U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 1U));
            } else if ((0x800000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x96U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT__i_uint);
            } else if ((0x400000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x95U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffeU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 1U)));
            } else if ((0x200000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x94U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffcU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 2U)));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp 
                    = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x93U : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x92U : ((0x40000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x91U
                                                : (
                                                   (0x20000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x90U
                                                    : (IData)(vlSelf->__PVT__convert_data_convert__DOT___GEN_35)))));
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT___GEN_42);
            }
        }
        if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
            if ((vlSelf->__PVT__convert_data_convert_io_i_data 
                 >> 0x1fU)) {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 1U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & ((IData)(1U) + 
                                      (~ ((((0x80U 
                                             & (IData)(vlSelf->__PVT__sub_module__DOT__out))
                                             ? 0x7fffffU
                                             : 0U) 
                                           << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out)))));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & vlSelf->__PVT__convert_data_convert_io_i_data);
            }
        }
        vlSelf->__PVT__sub_module__DOT__out = (0xffU 
                                               & (((0x20000U 
                                                    & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__generate_ctrl_signal__DOT__ctrl_task_state_bn__DOT__running_state)
                                                     ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__ifm_buf_io_ifm_o_data_7
                                                     : 0U)
                                                    : (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__quant__DOT__quant_unit_7__DOT___io_quant_result_T)) 
                                                  - 
                                                  (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_2 
                                                   >> 8U)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_35 
        = ((0x10000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? 0x8fU : ((0x8000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x8eU : ((0x4000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x8dU : ((0x2000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x8cU
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x8bU
                                                    : 
                                                   ((0x800U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 0x8aU
                                                     : 
                                                    ((0x400U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 0x89U
                                                      : 
                                                     ((0x200U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 0x88U
                                                       : 
                                                      ((0x100U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 0x87U
                                                        : 
                                                       ((0x80U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 0x86U
                                                         : 
                                                        ((0x40U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 0x85U
                                                          : 
                                                         ((0x20U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 0x84U
                                                           : 
                                                          ((0x10U 
                                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                            ? 0x83U
                                                            : 
                                                           ((8U 
                                                             & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                             ? 0x82U
                                                             : 
                                                            ((4U 
                                                              & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                              ? 0x81U
                                                              : 
                                                             ((2U 
                                                               & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                               ? 0x80U
                                                               : 
                                                              ((1U 
                                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                                ? 0x7fU
                                                                : 0U)))))))))))))))));
    __PVT__convert_data_convert__DOT___GEN_22 = ((0x400U 
                                                  & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                  ? 
                                                 (0x7fe000U 
                                                  & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                     << 0xdU))
                                                  : 
                                                 ((0x200U 
                                                   & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                   ? 
                                                  (0x7fc000U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 0xeU))
                                                   : 
                                                  ((0x100U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7f8000U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 0xfU))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7f0000U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 0x10U))
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7e0000U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 0x11U))
                                                      : 
                                                     ((0x20U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7c0000U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0x12U))
                                                       : 
                                                      ((0x10U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x780000U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0x13U))
                                                        : 
                                                       ((8U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x700000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0x14U))
                                                         : 
                                                        ((4U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 
                                                         (0x600000U 
                                                          & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                             << 0x15U))
                                                          : 
                                                         ((2U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 
                                                          (0x400000U 
                                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                              << 0x16U))
                                                           : 0U))))))))));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_42 
        = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? (0x7ffff8U & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                            << 3U)) : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                        ? (0x7ffff0U 
                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                              << 4U))
                                        : ((0x40000U 
                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                            ? (0x7fffe0U 
                                               & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                  << 5U))
                                            : ((0x20000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? (0x7fffc0U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 6U))
                                                : (
                                                   (0x10000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7fff80U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 7U))
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7fff00U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 8U))
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7ffe00U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 9U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7ffc00U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0xaU))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x7ff800U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0xbU))
                                                        : 
                                                       ((0x800U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x7ff000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0xcU))
                                                         : __PVT__convert_data_convert__DOT___GEN_22))))))))));
    vlSelf->__PVT__convert_data_convert_io_i_data = 
        ((((0x80U & (IData)(vlSelf->__PVT__sub_module__DOT__out))
            ? 0xffffffU : 0U) << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out));
}

VL_INLINE_OPT void Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_0__1(Vtop_dequant_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_0__1\n"); );
    // Init
    IData/*22:0*/ __PVT__convert_data_convert__DOT___GEN_22;
    __PVT__convert_data_convert__DOT___GEN_22 = 0;
    // Body
    if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
        vlSelf->__PVT__fp32_data_muler__DOT__io_z_r 
            = (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__out_z_r) 
                << 0x1fU) | ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__is_zero)
                              ? 0U : ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__ze_r) 
                                           - ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                               ? 0x7eU
                                               : 0x7fU)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                             ? ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 2U) 
                                                + (1U 
                                                   & (vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                      >> 1U)))
                                             : ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 1U) 
                                                + (1U 
                                                   & vlSelf->__PVT__fp32_data_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
        vlSelf->__PVT__fp32_data_muler__DOT__zf_1 = 
            (0x1ffffffU & (IData)((vlSelf->__PVT__fp32_data_muler__DOT___zf_0_T_2 
                                   >> 0x16U)));
        vlSelf->__PVT__fp32_data_muler__DOT__out_z_r 
            = ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_sign) 
               ^ (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala 
                  >> 0x1fU));
        vlSelf->__PVT__fp32_data_muler__DOT__is_zero 
            = ((0U == (IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp)) 
               | (0U == (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala 
                                  >> 0x17U))));
        vlSelf->__PVT__fp32_data_muler__DOT__ze_r = 
            (0xffU & ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp) 
                      + (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala 
                         >> 0x17U)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__carry = ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry_r) 
                                                  | (0x1ffffffU 
                                                     == vlSelf->__PVT__fp32_data_muler__DOT__zf_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__convert_data_convert__DOT__float_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_frac = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_uint = 0U;
        vlSelf->__PVT__sub_module__DOT__out = 0U;
    } else {
        if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
            vlSelf->__PVT__convert_data_convert__DOT__float_sign 
                = vlSelf->__PVT__convert_data_convert__DOT__i_sign;
            if ((0x40000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9dU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 7U));
            } else if ((0x20000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9cU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 6U));
            } else if ((0x10000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9bU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 5U));
            } else if ((0x8000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9aU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 4U));
            } else if ((0x4000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x99U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 3U));
            } else if ((0x2000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x98U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 2U));
            } else if ((0x1000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x97U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 1U));
            } else if ((0x800000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x96U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT__i_uint);
            } else if ((0x400000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x95U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffeU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 1U)));
            } else if ((0x200000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x94U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffcU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 2U)));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp 
                    = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x93U : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x92U : ((0x40000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x91U
                                                : (
                                                   (0x20000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x90U
                                                    : (IData)(vlSelf->__PVT__convert_data_convert__DOT___GEN_35)))));
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT___GEN_42);
            }
        }
        if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
            if ((vlSelf->__PVT__convert_data_convert_io_i_data 
                 >> 0x1fU)) {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 1U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & ((IData)(1U) + 
                                      (~ ((((0x80U 
                                             & (IData)(vlSelf->__PVT__sub_module__DOT__out))
                                             ? 0x7fffffU
                                             : 0U) 
                                           << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out)))));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & vlSelf->__PVT__convert_data_convert_io_i_data);
            }
        }
        vlSelf->__PVT__sub_module__DOT__out = (0xffU 
                                               & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__ofm__DOT__TPRAM_WRAP__DOT__tpram_QA) 
                                                  - (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_zero_point)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_35 
        = ((0x10000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? 0x8fU : ((0x8000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x8eU : ((0x4000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x8dU : ((0x2000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x8cU
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x8bU
                                                    : 
                                                   ((0x800U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 0x8aU
                                                     : 
                                                    ((0x400U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 0x89U
                                                      : 
                                                     ((0x200U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 0x88U
                                                       : 
                                                      ((0x100U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 0x87U
                                                        : 
                                                       ((0x80U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 0x86U
                                                         : 
                                                        ((0x40U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 0x85U
                                                          : 
                                                         ((0x20U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 0x84U
                                                           : 
                                                          ((0x10U 
                                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                            ? 0x83U
                                                            : 
                                                           ((8U 
                                                             & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                             ? 0x82U
                                                             : 
                                                            ((4U 
                                                              & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                              ? 0x81U
                                                              : 
                                                             ((2U 
                                                               & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                               ? 0x80U
                                                               : 
                                                              ((1U 
                                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                                ? 0x7fU
                                                                : 0U)))))))))))))))));
    __PVT__convert_data_convert__DOT___GEN_22 = ((0x400U 
                                                  & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                  ? 
                                                 (0x7fe000U 
                                                  & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                     << 0xdU))
                                                  : 
                                                 ((0x200U 
                                                   & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                   ? 
                                                  (0x7fc000U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 0xeU))
                                                   : 
                                                  ((0x100U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7f8000U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 0xfU))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7f0000U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 0x10U))
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7e0000U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 0x11U))
                                                      : 
                                                     ((0x20U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7c0000U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0x12U))
                                                       : 
                                                      ((0x10U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x780000U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0x13U))
                                                        : 
                                                       ((8U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x700000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0x14U))
                                                         : 
                                                        ((4U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 
                                                         (0x600000U 
                                                          & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                             << 0x15U))
                                                          : 
                                                         ((2U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 
                                                          (0x400000U 
                                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                              << 0x16U))
                                                           : 0U))))))))));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_42 
        = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? (0x7ffff8U & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                            << 3U)) : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                        ? (0x7ffff0U 
                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                              << 4U))
                                        : ((0x40000U 
                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                            ? (0x7fffe0U 
                                               & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                  << 5U))
                                            : ((0x20000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? (0x7fffc0U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 6U))
                                                : (
                                                   (0x10000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7fff80U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 7U))
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7fff00U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 8U))
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7ffe00U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 9U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7ffc00U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0xaU))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x7ff800U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0xbU))
                                                        : 
                                                       ((0x800U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x7ff000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0xcU))
                                                         : __PVT__convert_data_convert__DOT___GEN_22))))))))));
    vlSelf->__PVT__convert_data_convert_io_i_data = 
        ((((0x80U & (IData)(vlSelf->__PVT__sub_module__DOT__out))
            ? 0xffffffU : 0U) << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out));
}

VL_INLINE_OPT void Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_0__2(Vtop_dequant_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_0__2\n"); );
    // Body
    vlSelf->__PVT__fp32_data_muler__DOT___zf_0_T_2 
        = (0xffffffffffffULL & ((0x800000ULL | (QData)((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_frac))) 
                                * (0x800000ULL | (QData)((IData)(
                                                                 (0x7fffffU 
                                                                  & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala))))));
}

VL_INLINE_OPT void Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_1__1(Vtop_dequant_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_1__1\n"); );
    // Init
    IData/*22:0*/ __PVT__convert_data_convert__DOT___GEN_22;
    __PVT__convert_data_convert__DOT___GEN_22 = 0;
    // Body
    if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
        vlSelf->__PVT__fp32_data_muler__DOT__io_z_r 
            = (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__out_z_r) 
                << 0x1fU) | ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__is_zero)
                              ? 0U : ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__ze_r) 
                                           - ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                               ? 0x7eU
                                               : 0x7fU)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                             ? ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 2U) 
                                                + (1U 
                                                   & (vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                      >> 1U)))
                                             : ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 1U) 
                                                + (1U 
                                                   & vlSelf->__PVT__fp32_data_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
        vlSelf->__PVT__fp32_data_muler__DOT__zf_1 = 
            (0x1ffffffU & (IData)((vlSelf->__PVT__fp32_data_muler__DOT___zf_0_T_2 
                                   >> 0x16U)));
        vlSelf->__PVT__fp32_data_muler__DOT__out_z_r 
            = ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_sign) 
               ^ (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala 
                  >> 0x1fU));
        vlSelf->__PVT__fp32_data_muler__DOT__is_zero 
            = ((0U == (IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp)) 
               | (0U == (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala 
                                  >> 0x17U))));
        vlSelf->__PVT__fp32_data_muler__DOT__ze_r = 
            (0xffU & ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp) 
                      + (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala 
                         >> 0x17U)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__carry = ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry_r) 
                                                  | (0x1ffffffU 
                                                     == vlSelf->__PVT__fp32_data_muler__DOT__zf_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__convert_data_convert__DOT__float_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_frac = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_uint = 0U;
        vlSelf->__PVT__sub_module__DOT__out = 0U;
    } else {
        if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
            vlSelf->__PVT__convert_data_convert__DOT__float_sign 
                = vlSelf->__PVT__convert_data_convert__DOT__i_sign;
            if ((0x40000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9dU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 7U));
            } else if ((0x20000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9cU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 6U));
            } else if ((0x10000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9bU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 5U));
            } else if ((0x8000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9aU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 4U));
            } else if ((0x4000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x99U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 3U));
            } else if ((0x2000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x98U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 2U));
            } else if ((0x1000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x97U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 1U));
            } else if ((0x800000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x96U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT__i_uint);
            } else if ((0x400000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x95U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffeU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 1U)));
            } else if ((0x200000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x94U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffcU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 2U)));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp 
                    = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x93U : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x92U : ((0x40000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x91U
                                                : (
                                                   (0x20000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x90U
                                                    : (IData)(vlSelf->__PVT__convert_data_convert__DOT___GEN_35)))));
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT___GEN_42);
            }
        }
        if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
            if ((vlSelf->__PVT__convert_data_convert_io_i_data 
                 >> 0x1fU)) {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 1U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & ((IData)(1U) + 
                                      (~ ((((0x80U 
                                             & (IData)(vlSelf->__PVT__sub_module__DOT__out))
                                             ? 0x7fffffU
                                             : 0U) 
                                           << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out)))));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & vlSelf->__PVT__convert_data_convert_io_i_data);
            }
        }
        vlSelf->__PVT__sub_module__DOT__out = (0xffU 
                                               & ((IData)(
                                                          (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__ofm__DOT__TPRAM_WRAP__DOT__tpram_QA 
                                                           >> 8U)) 
                                                  - (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_zero_point)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_35 
        = ((0x10000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? 0x8fU : ((0x8000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x8eU : ((0x4000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x8dU : ((0x2000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x8cU
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x8bU
                                                    : 
                                                   ((0x800U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 0x8aU
                                                     : 
                                                    ((0x400U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 0x89U
                                                      : 
                                                     ((0x200U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 0x88U
                                                       : 
                                                      ((0x100U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 0x87U
                                                        : 
                                                       ((0x80U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 0x86U
                                                         : 
                                                        ((0x40U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 0x85U
                                                          : 
                                                         ((0x20U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 0x84U
                                                           : 
                                                          ((0x10U 
                                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                            ? 0x83U
                                                            : 
                                                           ((8U 
                                                             & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                             ? 0x82U
                                                             : 
                                                            ((4U 
                                                              & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                              ? 0x81U
                                                              : 
                                                             ((2U 
                                                               & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                               ? 0x80U
                                                               : 
                                                              ((1U 
                                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                                ? 0x7fU
                                                                : 0U)))))))))))))))));
    __PVT__convert_data_convert__DOT___GEN_22 = ((0x400U 
                                                  & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                  ? 
                                                 (0x7fe000U 
                                                  & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                     << 0xdU))
                                                  : 
                                                 ((0x200U 
                                                   & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                   ? 
                                                  (0x7fc000U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 0xeU))
                                                   : 
                                                  ((0x100U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7f8000U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 0xfU))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7f0000U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 0x10U))
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7e0000U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 0x11U))
                                                      : 
                                                     ((0x20U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7c0000U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0x12U))
                                                       : 
                                                      ((0x10U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x780000U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0x13U))
                                                        : 
                                                       ((8U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x700000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0x14U))
                                                         : 
                                                        ((4U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 
                                                         (0x600000U 
                                                          & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                             << 0x15U))
                                                          : 
                                                         ((2U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 
                                                          (0x400000U 
                                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                              << 0x16U))
                                                           : 0U))))))))));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_42 
        = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? (0x7ffff8U & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                            << 3U)) : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                        ? (0x7ffff0U 
                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                              << 4U))
                                        : ((0x40000U 
                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                            ? (0x7fffe0U 
                                               & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                  << 5U))
                                            : ((0x20000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? (0x7fffc0U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 6U))
                                                : (
                                                   (0x10000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7fff80U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 7U))
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7fff00U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 8U))
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7ffe00U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 9U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7ffc00U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0xaU))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x7ff800U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0xbU))
                                                        : 
                                                       ((0x800U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x7ff000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0xcU))
                                                         : __PVT__convert_data_convert__DOT___GEN_22))))))))));
    vlSelf->__PVT__convert_data_convert_io_i_data = 
        ((((0x80U & (IData)(vlSelf->__PVT__sub_module__DOT__out))
            ? 0xffffffU : 0U) << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out));
}

VL_INLINE_OPT void Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_2__1(Vtop_dequant_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_2__1\n"); );
    // Init
    IData/*22:0*/ __PVT__convert_data_convert__DOT___GEN_22;
    __PVT__convert_data_convert__DOT___GEN_22 = 0;
    // Body
    if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
        vlSelf->__PVT__fp32_data_muler__DOT__io_z_r 
            = (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__out_z_r) 
                << 0x1fU) | ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__is_zero)
                              ? 0U : ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__ze_r) 
                                           - ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                               ? 0x7eU
                                               : 0x7fU)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                             ? ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 2U) 
                                                + (1U 
                                                   & (vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                      >> 1U)))
                                             : ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 1U) 
                                                + (1U 
                                                   & vlSelf->__PVT__fp32_data_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
        vlSelf->__PVT__fp32_data_muler__DOT__zf_1 = 
            (0x1ffffffU & (IData)((vlSelf->__PVT__fp32_data_muler__DOT___zf_0_T_2 
                                   >> 0x16U)));
        vlSelf->__PVT__fp32_data_muler__DOT__out_z_r 
            = ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_sign) 
               ^ (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala 
                  >> 0x1fU));
        vlSelf->__PVT__fp32_data_muler__DOT__is_zero 
            = ((0U == (IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp)) 
               | (0U == (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala 
                                  >> 0x17U))));
        vlSelf->__PVT__fp32_data_muler__DOT__ze_r = 
            (0xffU & ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp) 
                      + (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala 
                         >> 0x17U)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__carry = ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry_r) 
                                                  | (0x1ffffffU 
                                                     == vlSelf->__PVT__fp32_data_muler__DOT__zf_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__convert_data_convert__DOT__float_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_frac = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_uint = 0U;
        vlSelf->__PVT__sub_module__DOT__out = 0U;
    } else {
        if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
            vlSelf->__PVT__convert_data_convert__DOT__float_sign 
                = vlSelf->__PVT__convert_data_convert__DOT__i_sign;
            if ((0x40000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9dU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 7U));
            } else if ((0x20000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9cU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 6U));
            } else if ((0x10000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9bU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 5U));
            } else if ((0x8000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9aU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 4U));
            } else if ((0x4000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x99U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 3U));
            } else if ((0x2000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x98U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 2U));
            } else if ((0x1000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x97U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 1U));
            } else if ((0x800000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x96U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT__i_uint);
            } else if ((0x400000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x95U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffeU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 1U)));
            } else if ((0x200000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x94U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffcU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 2U)));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp 
                    = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x93U : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x92U : ((0x40000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x91U
                                                : (
                                                   (0x20000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x90U
                                                    : (IData)(vlSelf->__PVT__convert_data_convert__DOT___GEN_35)))));
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT___GEN_42);
            }
        }
        if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
            if ((vlSelf->__PVT__convert_data_convert_io_i_data 
                 >> 0x1fU)) {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 1U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & ((IData)(1U) + 
                                      (~ ((((0x80U 
                                             & (IData)(vlSelf->__PVT__sub_module__DOT__out))
                                             ? 0x7fffffU
                                             : 0U) 
                                           << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out)))));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & vlSelf->__PVT__convert_data_convert_io_i_data);
            }
        }
        vlSelf->__PVT__sub_module__DOT__out = (0xffU 
                                               & ((IData)(
                                                          (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__ofm__DOT__TPRAM_WRAP__DOT__tpram_QA 
                                                           >> 0x10U)) 
                                                  - (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_zero_point)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_35 
        = ((0x10000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? 0x8fU : ((0x8000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x8eU : ((0x4000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x8dU : ((0x2000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x8cU
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x8bU
                                                    : 
                                                   ((0x800U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 0x8aU
                                                     : 
                                                    ((0x400U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 0x89U
                                                      : 
                                                     ((0x200U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 0x88U
                                                       : 
                                                      ((0x100U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 0x87U
                                                        : 
                                                       ((0x80U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 0x86U
                                                         : 
                                                        ((0x40U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 0x85U
                                                          : 
                                                         ((0x20U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 0x84U
                                                           : 
                                                          ((0x10U 
                                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                            ? 0x83U
                                                            : 
                                                           ((8U 
                                                             & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                             ? 0x82U
                                                             : 
                                                            ((4U 
                                                              & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                              ? 0x81U
                                                              : 
                                                             ((2U 
                                                               & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                               ? 0x80U
                                                               : 
                                                              ((1U 
                                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                                ? 0x7fU
                                                                : 0U)))))))))))))))));
    __PVT__convert_data_convert__DOT___GEN_22 = ((0x400U 
                                                  & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                  ? 
                                                 (0x7fe000U 
                                                  & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                     << 0xdU))
                                                  : 
                                                 ((0x200U 
                                                   & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                   ? 
                                                  (0x7fc000U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 0xeU))
                                                   : 
                                                  ((0x100U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7f8000U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 0xfU))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7f0000U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 0x10U))
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7e0000U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 0x11U))
                                                      : 
                                                     ((0x20U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7c0000U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0x12U))
                                                       : 
                                                      ((0x10U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x780000U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0x13U))
                                                        : 
                                                       ((8U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x700000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0x14U))
                                                         : 
                                                        ((4U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 
                                                         (0x600000U 
                                                          & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                             << 0x15U))
                                                          : 
                                                         ((2U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 
                                                          (0x400000U 
                                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                              << 0x16U))
                                                           : 0U))))))))));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_42 
        = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? (0x7ffff8U & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                            << 3U)) : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                        ? (0x7ffff0U 
                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                              << 4U))
                                        : ((0x40000U 
                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                            ? (0x7fffe0U 
                                               & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                  << 5U))
                                            : ((0x20000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? (0x7fffc0U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 6U))
                                                : (
                                                   (0x10000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7fff80U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 7U))
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7fff00U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 8U))
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7ffe00U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 9U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7ffc00U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0xaU))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x7ff800U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0xbU))
                                                        : 
                                                       ((0x800U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x7ff000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0xcU))
                                                         : __PVT__convert_data_convert__DOT___GEN_22))))))))));
    vlSelf->__PVT__convert_data_convert_io_i_data = 
        ((((0x80U & (IData)(vlSelf->__PVT__sub_module__DOT__out))
            ? 0xffffffU : 0U) << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out));
}

VL_INLINE_OPT void Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_3__1(Vtop_dequant_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_3__1\n"); );
    // Init
    IData/*22:0*/ __PVT__convert_data_convert__DOT___GEN_22;
    __PVT__convert_data_convert__DOT___GEN_22 = 0;
    // Body
    if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
        vlSelf->__PVT__fp32_data_muler__DOT__io_z_r 
            = (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__out_z_r) 
                << 0x1fU) | ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__is_zero)
                              ? 0U : ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__ze_r) 
                                           - ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                               ? 0x7eU
                                               : 0x7fU)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                             ? ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 2U) 
                                                + (1U 
                                                   & (vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                      >> 1U)))
                                             : ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 1U) 
                                                + (1U 
                                                   & vlSelf->__PVT__fp32_data_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
        vlSelf->__PVT__fp32_data_muler__DOT__zf_1 = 
            (0x1ffffffU & (IData)((vlSelf->__PVT__fp32_data_muler__DOT___zf_0_T_2 
                                   >> 0x16U)));
        vlSelf->__PVT__fp32_data_muler__DOT__out_z_r 
            = ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_sign) 
               ^ (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala 
                  >> 0x1fU));
        vlSelf->__PVT__fp32_data_muler__DOT__is_zero 
            = ((0U == (IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp)) 
               | (0U == (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala 
                                  >> 0x17U))));
        vlSelf->__PVT__fp32_data_muler__DOT__ze_r = 
            (0xffU & ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp) 
                      + (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala 
                         >> 0x17U)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__carry = ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry_r) 
                                                  | (0x1ffffffU 
                                                     == vlSelf->__PVT__fp32_data_muler__DOT__zf_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__convert_data_convert__DOT__float_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_frac = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_uint = 0U;
        vlSelf->__PVT__sub_module__DOT__out = 0U;
    } else {
        if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
            vlSelf->__PVT__convert_data_convert__DOT__float_sign 
                = vlSelf->__PVT__convert_data_convert__DOT__i_sign;
            if ((0x40000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9dU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 7U));
            } else if ((0x20000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9cU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 6U));
            } else if ((0x10000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9bU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 5U));
            } else if ((0x8000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9aU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 4U));
            } else if ((0x4000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x99U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 3U));
            } else if ((0x2000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x98U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 2U));
            } else if ((0x1000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x97U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 1U));
            } else if ((0x800000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x96U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT__i_uint);
            } else if ((0x400000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x95U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffeU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 1U)));
            } else if ((0x200000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x94U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffcU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 2U)));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp 
                    = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x93U : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x92U : ((0x40000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x91U
                                                : (
                                                   (0x20000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x90U
                                                    : (IData)(vlSelf->__PVT__convert_data_convert__DOT___GEN_35)))));
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT___GEN_42);
            }
        }
        if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
            if ((vlSelf->__PVT__convert_data_convert_io_i_data 
                 >> 0x1fU)) {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 1U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & ((IData)(1U) + 
                                      (~ ((((0x80U 
                                             & (IData)(vlSelf->__PVT__sub_module__DOT__out))
                                             ? 0x7fffffU
                                             : 0U) 
                                           << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out)))));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & vlSelf->__PVT__convert_data_convert_io_i_data);
            }
        }
        vlSelf->__PVT__sub_module__DOT__out = (0xffU 
                                               & ((IData)(
                                                          (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__ofm__DOT__TPRAM_WRAP__DOT__tpram_QA 
                                                           >> 0x18U)) 
                                                  - (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_zero_point)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_35 
        = ((0x10000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? 0x8fU : ((0x8000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x8eU : ((0x4000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x8dU : ((0x2000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x8cU
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x8bU
                                                    : 
                                                   ((0x800U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 0x8aU
                                                     : 
                                                    ((0x400U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 0x89U
                                                      : 
                                                     ((0x200U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 0x88U
                                                       : 
                                                      ((0x100U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 0x87U
                                                        : 
                                                       ((0x80U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 0x86U
                                                         : 
                                                        ((0x40U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 0x85U
                                                          : 
                                                         ((0x20U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 0x84U
                                                           : 
                                                          ((0x10U 
                                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                            ? 0x83U
                                                            : 
                                                           ((8U 
                                                             & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                             ? 0x82U
                                                             : 
                                                            ((4U 
                                                              & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                              ? 0x81U
                                                              : 
                                                             ((2U 
                                                               & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                               ? 0x80U
                                                               : 
                                                              ((1U 
                                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                                ? 0x7fU
                                                                : 0U)))))))))))))))));
    __PVT__convert_data_convert__DOT___GEN_22 = ((0x400U 
                                                  & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                  ? 
                                                 (0x7fe000U 
                                                  & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                     << 0xdU))
                                                  : 
                                                 ((0x200U 
                                                   & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                   ? 
                                                  (0x7fc000U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 0xeU))
                                                   : 
                                                  ((0x100U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7f8000U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 0xfU))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7f0000U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 0x10U))
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7e0000U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 0x11U))
                                                      : 
                                                     ((0x20U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7c0000U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0x12U))
                                                       : 
                                                      ((0x10U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x780000U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0x13U))
                                                        : 
                                                       ((8U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x700000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0x14U))
                                                         : 
                                                        ((4U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 
                                                         (0x600000U 
                                                          & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                             << 0x15U))
                                                          : 
                                                         ((2U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 
                                                          (0x400000U 
                                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                              << 0x16U))
                                                           : 0U))))))))));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_42 
        = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? (0x7ffff8U & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                            << 3U)) : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                        ? (0x7ffff0U 
                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                              << 4U))
                                        : ((0x40000U 
                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                            ? (0x7fffe0U 
                                               & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                  << 5U))
                                            : ((0x20000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? (0x7fffc0U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 6U))
                                                : (
                                                   (0x10000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7fff80U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 7U))
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7fff00U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 8U))
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7ffe00U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 9U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7ffc00U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0xaU))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x7ff800U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0xbU))
                                                        : 
                                                       ((0x800U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x7ff000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0xcU))
                                                         : __PVT__convert_data_convert__DOT___GEN_22))))))))));
    vlSelf->__PVT__convert_data_convert_io_i_data = 
        ((((0x80U & (IData)(vlSelf->__PVT__sub_module__DOT__out))
            ? 0xffffffU : 0U) << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out));
}

VL_INLINE_OPT void Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_4__1(Vtop_dequant_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_4__1\n"); );
    // Init
    IData/*22:0*/ __PVT__convert_data_convert__DOT___GEN_22;
    __PVT__convert_data_convert__DOT___GEN_22 = 0;
    // Body
    if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
        vlSelf->__PVT__fp32_data_muler__DOT__io_z_r 
            = (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__out_z_r) 
                << 0x1fU) | ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__is_zero)
                              ? 0U : ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__ze_r) 
                                           - ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                               ? 0x7eU
                                               : 0x7fU)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                             ? ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 2U) 
                                                + (1U 
                                                   & (vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                      >> 1U)))
                                             : ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 1U) 
                                                + (1U 
                                                   & vlSelf->__PVT__fp32_data_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
        vlSelf->__PVT__fp32_data_muler__DOT__zf_1 = 
            (0x1ffffffU & (IData)((vlSelf->__PVT__fp32_data_muler__DOT___zf_0_T_2 
                                   >> 0x16U)));
        vlSelf->__PVT__fp32_data_muler__DOT__out_z_r 
            = ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_sign) 
               ^ (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala 
                  >> 0x1fU));
        vlSelf->__PVT__fp32_data_muler__DOT__is_zero 
            = ((0U == (IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp)) 
               | (0U == (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala 
                                  >> 0x17U))));
        vlSelf->__PVT__fp32_data_muler__DOT__ze_r = 
            (0xffU & ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp) 
                      + (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala 
                         >> 0x17U)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__carry = ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry_r) 
                                                  | (0x1ffffffU 
                                                     == vlSelf->__PVT__fp32_data_muler__DOT__zf_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__convert_data_convert__DOT__float_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_frac = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_uint = 0U;
        vlSelf->__PVT__sub_module__DOT__out = 0U;
    } else {
        if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
            vlSelf->__PVT__convert_data_convert__DOT__float_sign 
                = vlSelf->__PVT__convert_data_convert__DOT__i_sign;
            if ((0x40000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9dU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 7U));
            } else if ((0x20000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9cU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 6U));
            } else if ((0x10000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9bU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 5U));
            } else if ((0x8000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9aU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 4U));
            } else if ((0x4000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x99U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 3U));
            } else if ((0x2000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x98U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 2U));
            } else if ((0x1000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x97U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 1U));
            } else if ((0x800000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x96U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT__i_uint);
            } else if ((0x400000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x95U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffeU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 1U)));
            } else if ((0x200000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x94U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffcU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 2U)));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp 
                    = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x93U : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x92U : ((0x40000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x91U
                                                : (
                                                   (0x20000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x90U
                                                    : (IData)(vlSelf->__PVT__convert_data_convert__DOT___GEN_35)))));
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT___GEN_42);
            }
        }
        if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
            if ((vlSelf->__PVT__convert_data_convert_io_i_data 
                 >> 0x1fU)) {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 1U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & ((IData)(1U) + 
                                      (~ ((((0x80U 
                                             & (IData)(vlSelf->__PVT__sub_module__DOT__out))
                                             ? 0x7fffffU
                                             : 0U) 
                                           << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out)))));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & vlSelf->__PVT__convert_data_convert_io_i_data);
            }
        }
        vlSelf->__PVT__sub_module__DOT__out = (0xffU 
                                               & ((IData)(
                                                          (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__ofm__DOT__TPRAM_WRAP__DOT__tpram_QA 
                                                           >> 0x20U)) 
                                                  - (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_zero_point)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_35 
        = ((0x10000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? 0x8fU : ((0x8000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x8eU : ((0x4000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x8dU : ((0x2000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x8cU
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x8bU
                                                    : 
                                                   ((0x800U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 0x8aU
                                                     : 
                                                    ((0x400U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 0x89U
                                                      : 
                                                     ((0x200U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 0x88U
                                                       : 
                                                      ((0x100U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 0x87U
                                                        : 
                                                       ((0x80U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 0x86U
                                                         : 
                                                        ((0x40U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 0x85U
                                                          : 
                                                         ((0x20U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 0x84U
                                                           : 
                                                          ((0x10U 
                                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                            ? 0x83U
                                                            : 
                                                           ((8U 
                                                             & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                             ? 0x82U
                                                             : 
                                                            ((4U 
                                                              & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                              ? 0x81U
                                                              : 
                                                             ((2U 
                                                               & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                               ? 0x80U
                                                               : 
                                                              ((1U 
                                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                                ? 0x7fU
                                                                : 0U)))))))))))))))));
    __PVT__convert_data_convert__DOT___GEN_22 = ((0x400U 
                                                  & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                  ? 
                                                 (0x7fe000U 
                                                  & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                     << 0xdU))
                                                  : 
                                                 ((0x200U 
                                                   & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                   ? 
                                                  (0x7fc000U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 0xeU))
                                                   : 
                                                  ((0x100U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7f8000U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 0xfU))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7f0000U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 0x10U))
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7e0000U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 0x11U))
                                                      : 
                                                     ((0x20U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7c0000U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0x12U))
                                                       : 
                                                      ((0x10U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x780000U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0x13U))
                                                        : 
                                                       ((8U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x700000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0x14U))
                                                         : 
                                                        ((4U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 
                                                         (0x600000U 
                                                          & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                             << 0x15U))
                                                          : 
                                                         ((2U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 
                                                          (0x400000U 
                                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                              << 0x16U))
                                                           : 0U))))))))));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_42 
        = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? (0x7ffff8U & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                            << 3U)) : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                        ? (0x7ffff0U 
                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                              << 4U))
                                        : ((0x40000U 
                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                            ? (0x7fffe0U 
                                               & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                  << 5U))
                                            : ((0x20000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? (0x7fffc0U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 6U))
                                                : (
                                                   (0x10000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7fff80U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 7U))
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7fff00U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 8U))
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7ffe00U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 9U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7ffc00U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0xaU))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x7ff800U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0xbU))
                                                        : 
                                                       ((0x800U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x7ff000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0xcU))
                                                         : __PVT__convert_data_convert__DOT___GEN_22))))))))));
    vlSelf->__PVT__convert_data_convert_io_i_data = 
        ((((0x80U & (IData)(vlSelf->__PVT__sub_module__DOT__out))
            ? 0xffffffU : 0U) << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out));
}

VL_INLINE_OPT void Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_5__1(Vtop_dequant_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_5__1\n"); );
    // Init
    IData/*22:0*/ __PVT__convert_data_convert__DOT___GEN_22;
    __PVT__convert_data_convert__DOT___GEN_22 = 0;
    // Body
    if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
        vlSelf->__PVT__fp32_data_muler__DOT__io_z_r 
            = (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__out_z_r) 
                << 0x1fU) | ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__is_zero)
                              ? 0U : ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__ze_r) 
                                           - ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                               ? 0x7eU
                                               : 0x7fU)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                             ? ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 2U) 
                                                + (1U 
                                                   & (vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                      >> 1U)))
                                             : ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 1U) 
                                                + (1U 
                                                   & vlSelf->__PVT__fp32_data_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
        vlSelf->__PVT__fp32_data_muler__DOT__zf_1 = 
            (0x1ffffffU & (IData)((vlSelf->__PVT__fp32_data_muler__DOT___zf_0_T_2 
                                   >> 0x16U)));
        vlSelf->__PVT__fp32_data_muler__DOT__out_z_r 
            = ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_sign) 
               ^ (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala 
                  >> 0x1fU));
        vlSelf->__PVT__fp32_data_muler__DOT__is_zero 
            = ((0U == (IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp)) 
               | (0U == (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala 
                                  >> 0x17U))));
        vlSelf->__PVT__fp32_data_muler__DOT__ze_r = 
            (0xffU & ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp) 
                      + (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala 
                         >> 0x17U)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__carry = ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry_r) 
                                                  | (0x1ffffffU 
                                                     == vlSelf->__PVT__fp32_data_muler__DOT__zf_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__convert_data_convert__DOT__float_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_frac = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_uint = 0U;
        vlSelf->__PVT__sub_module__DOT__out = 0U;
    } else {
        if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
            vlSelf->__PVT__convert_data_convert__DOT__float_sign 
                = vlSelf->__PVT__convert_data_convert__DOT__i_sign;
            if ((0x40000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9dU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 7U));
            } else if ((0x20000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9cU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 6U));
            } else if ((0x10000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9bU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 5U));
            } else if ((0x8000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9aU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 4U));
            } else if ((0x4000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x99U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 3U));
            } else if ((0x2000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x98U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 2U));
            } else if ((0x1000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x97U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 1U));
            } else if ((0x800000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x96U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT__i_uint);
            } else if ((0x400000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x95U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffeU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 1U)));
            } else if ((0x200000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x94U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffcU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 2U)));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp 
                    = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x93U : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x92U : ((0x40000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x91U
                                                : (
                                                   (0x20000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x90U
                                                    : (IData)(vlSelf->__PVT__convert_data_convert__DOT___GEN_35)))));
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT___GEN_42);
            }
        }
        if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
            if ((vlSelf->__PVT__convert_data_convert_io_i_data 
                 >> 0x1fU)) {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 1U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & ((IData)(1U) + 
                                      (~ ((((0x80U 
                                             & (IData)(vlSelf->__PVT__sub_module__DOT__out))
                                             ? 0x7fffffU
                                             : 0U) 
                                           << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out)))));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & vlSelf->__PVT__convert_data_convert_io_i_data);
            }
        }
        vlSelf->__PVT__sub_module__DOT__out = (0xffU 
                                               & ((IData)(
                                                          (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__ofm__DOT__TPRAM_WRAP__DOT__tpram_QA 
                                                           >> 0x28U)) 
                                                  - (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_zero_point)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_35 
        = ((0x10000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? 0x8fU : ((0x8000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x8eU : ((0x4000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x8dU : ((0x2000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x8cU
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x8bU
                                                    : 
                                                   ((0x800U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 0x8aU
                                                     : 
                                                    ((0x400U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 0x89U
                                                      : 
                                                     ((0x200U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 0x88U
                                                       : 
                                                      ((0x100U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 0x87U
                                                        : 
                                                       ((0x80U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 0x86U
                                                         : 
                                                        ((0x40U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 0x85U
                                                          : 
                                                         ((0x20U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 0x84U
                                                           : 
                                                          ((0x10U 
                                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                            ? 0x83U
                                                            : 
                                                           ((8U 
                                                             & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                             ? 0x82U
                                                             : 
                                                            ((4U 
                                                              & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                              ? 0x81U
                                                              : 
                                                             ((2U 
                                                               & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                               ? 0x80U
                                                               : 
                                                              ((1U 
                                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                                ? 0x7fU
                                                                : 0U)))))))))))))))));
    __PVT__convert_data_convert__DOT___GEN_22 = ((0x400U 
                                                  & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                  ? 
                                                 (0x7fe000U 
                                                  & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                     << 0xdU))
                                                  : 
                                                 ((0x200U 
                                                   & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                   ? 
                                                  (0x7fc000U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 0xeU))
                                                   : 
                                                  ((0x100U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7f8000U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 0xfU))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7f0000U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 0x10U))
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7e0000U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 0x11U))
                                                      : 
                                                     ((0x20U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7c0000U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0x12U))
                                                       : 
                                                      ((0x10U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x780000U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0x13U))
                                                        : 
                                                       ((8U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x700000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0x14U))
                                                         : 
                                                        ((4U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 
                                                         (0x600000U 
                                                          & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                             << 0x15U))
                                                          : 
                                                         ((2U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 
                                                          (0x400000U 
                                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                              << 0x16U))
                                                           : 0U))))))))));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_42 
        = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? (0x7ffff8U & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                            << 3U)) : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                        ? (0x7ffff0U 
                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                              << 4U))
                                        : ((0x40000U 
                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                            ? (0x7fffe0U 
                                               & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                  << 5U))
                                            : ((0x20000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? (0x7fffc0U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 6U))
                                                : (
                                                   (0x10000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7fff80U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 7U))
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7fff00U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 8U))
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7ffe00U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 9U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7ffc00U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0xaU))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x7ff800U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0xbU))
                                                        : 
                                                       ((0x800U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x7ff000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0xcU))
                                                         : __PVT__convert_data_convert__DOT___GEN_22))))))))));
    vlSelf->__PVT__convert_data_convert_io_i_data = 
        ((((0x80U & (IData)(vlSelf->__PVT__sub_module__DOT__out))
            ? 0xffffffU : 0U) << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out));
}

VL_INLINE_OPT void Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_6__1(Vtop_dequant_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_6__1\n"); );
    // Init
    IData/*22:0*/ __PVT__convert_data_convert__DOT___GEN_22;
    __PVT__convert_data_convert__DOT___GEN_22 = 0;
    // Body
    if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
        vlSelf->__PVT__fp32_data_muler__DOT__io_z_r 
            = (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__out_z_r) 
                << 0x1fU) | ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__is_zero)
                              ? 0U : ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__ze_r) 
                                           - ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                               ? 0x7eU
                                               : 0x7fU)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                             ? ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 2U) 
                                                + (1U 
                                                   & (vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                      >> 1U)))
                                             : ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 1U) 
                                                + (1U 
                                                   & vlSelf->__PVT__fp32_data_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
        vlSelf->__PVT__fp32_data_muler__DOT__zf_1 = 
            (0x1ffffffU & (IData)((vlSelf->__PVT__fp32_data_muler__DOT___zf_0_T_2 
                                   >> 0x16U)));
        vlSelf->__PVT__fp32_data_muler__DOT__out_z_r 
            = ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_sign) 
               ^ (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala 
                  >> 0x1fU));
        vlSelf->__PVT__fp32_data_muler__DOT__is_zero 
            = ((0U == (IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp)) 
               | (0U == (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala 
                                  >> 0x17U))));
        vlSelf->__PVT__fp32_data_muler__DOT__ze_r = 
            (0xffU & ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp) 
                      + (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala 
                         >> 0x17U)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__carry = ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry_r) 
                                                  | (0x1ffffffU 
                                                     == vlSelf->__PVT__fp32_data_muler__DOT__zf_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__convert_data_convert__DOT__float_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_frac = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_uint = 0U;
        vlSelf->__PVT__sub_module__DOT__out = 0U;
    } else {
        if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
            vlSelf->__PVT__convert_data_convert__DOT__float_sign 
                = vlSelf->__PVT__convert_data_convert__DOT__i_sign;
            if ((0x40000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9dU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 7U));
            } else if ((0x20000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9cU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 6U));
            } else if ((0x10000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9bU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 5U));
            } else if ((0x8000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9aU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 4U));
            } else if ((0x4000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x99U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 3U));
            } else if ((0x2000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x98U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 2U));
            } else if ((0x1000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x97U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 1U));
            } else if ((0x800000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x96U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT__i_uint);
            } else if ((0x400000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x95U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffeU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 1U)));
            } else if ((0x200000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x94U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffcU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 2U)));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp 
                    = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x93U : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x92U : ((0x40000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x91U
                                                : (
                                                   (0x20000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x90U
                                                    : (IData)(vlSelf->__PVT__convert_data_convert__DOT___GEN_35)))));
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT___GEN_42);
            }
        }
        if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
            if ((vlSelf->__PVT__convert_data_convert_io_i_data 
                 >> 0x1fU)) {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 1U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & ((IData)(1U) + 
                                      (~ ((((0x80U 
                                             & (IData)(vlSelf->__PVT__sub_module__DOT__out))
                                             ? 0x7fffffU
                                             : 0U) 
                                           << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out)))));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & vlSelf->__PVT__convert_data_convert_io_i_data);
            }
        }
        vlSelf->__PVT__sub_module__DOT__out = (0xffU 
                                               & ((IData)(
                                                          (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__ofm__DOT__TPRAM_WRAP__DOT__tpram_QA 
                                                           >> 0x30U)) 
                                                  - (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_zero_point)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_35 
        = ((0x10000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? 0x8fU : ((0x8000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x8eU : ((0x4000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x8dU : ((0x2000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x8cU
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x8bU
                                                    : 
                                                   ((0x800U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 0x8aU
                                                     : 
                                                    ((0x400U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 0x89U
                                                      : 
                                                     ((0x200U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 0x88U
                                                       : 
                                                      ((0x100U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 0x87U
                                                        : 
                                                       ((0x80U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 0x86U
                                                         : 
                                                        ((0x40U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 0x85U
                                                          : 
                                                         ((0x20U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 0x84U
                                                           : 
                                                          ((0x10U 
                                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                            ? 0x83U
                                                            : 
                                                           ((8U 
                                                             & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                             ? 0x82U
                                                             : 
                                                            ((4U 
                                                              & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                              ? 0x81U
                                                              : 
                                                             ((2U 
                                                               & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                               ? 0x80U
                                                               : 
                                                              ((1U 
                                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                                ? 0x7fU
                                                                : 0U)))))))))))))))));
    __PVT__convert_data_convert__DOT___GEN_22 = ((0x400U 
                                                  & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                  ? 
                                                 (0x7fe000U 
                                                  & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                     << 0xdU))
                                                  : 
                                                 ((0x200U 
                                                   & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                   ? 
                                                  (0x7fc000U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 0xeU))
                                                   : 
                                                  ((0x100U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7f8000U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 0xfU))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7f0000U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 0x10U))
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7e0000U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 0x11U))
                                                      : 
                                                     ((0x20U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7c0000U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0x12U))
                                                       : 
                                                      ((0x10U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x780000U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0x13U))
                                                        : 
                                                       ((8U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x700000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0x14U))
                                                         : 
                                                        ((4U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 
                                                         (0x600000U 
                                                          & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                             << 0x15U))
                                                          : 
                                                         ((2U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 
                                                          (0x400000U 
                                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                              << 0x16U))
                                                           : 0U))))))))));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_42 
        = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? (0x7ffff8U & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                            << 3U)) : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                        ? (0x7ffff0U 
                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                              << 4U))
                                        : ((0x40000U 
                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                            ? (0x7fffe0U 
                                               & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                  << 5U))
                                            : ((0x20000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? (0x7fffc0U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 6U))
                                                : (
                                                   (0x10000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7fff80U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 7U))
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7fff00U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 8U))
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7ffe00U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 9U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7ffc00U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0xaU))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x7ff800U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0xbU))
                                                        : 
                                                       ((0x800U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x7ff000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0xcU))
                                                         : __PVT__convert_data_convert__DOT___GEN_22))))))))));
    vlSelf->__PVT__convert_data_convert_io_i_data = 
        ((((0x80U & (IData)(vlSelf->__PVT__sub_module__DOT__out))
            ? 0xffffffU : 0U) << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out));
}

VL_INLINE_OPT void Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_7__1(Vtop_dequant_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dequant_cell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_7__1\n"); );
    // Init
    IData/*22:0*/ __PVT__convert_data_convert__DOT___GEN_22;
    __PVT__convert_data_convert__DOT___GEN_22 = 0;
    // Body
    if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
        vlSelf->__PVT__fp32_data_muler__DOT__io_z_r 
            = (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__out_z_r) 
                << 0x1fU) | ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__is_zero)
                              ? 0U : ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__fp32_data_muler__DOT__ze_r) 
                                           - ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                               ? 0x7eU
                                               : 0x7fU)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry)
                                             ? ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 2U) 
                                                + (1U 
                                                   & (vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                      >> 1U)))
                                             : ((vlSelf->__PVT__fp32_data_muler__DOT__zf_1 
                                                 >> 1U) 
                                                + (1U 
                                                   & vlSelf->__PVT__fp32_data_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
        vlSelf->__PVT__fp32_data_muler__DOT__zf_1 = 
            (0x1ffffffU & (IData)((vlSelf->__PVT__fp32_data_muler__DOT___zf_0_T_2 
                                   >> 0x16U)));
        vlSelf->__PVT__fp32_data_muler__DOT__out_z_r 
            = ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_sign) 
               ^ (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala 
                  >> 0x1fU));
        vlSelf->__PVT__fp32_data_muler__DOT__is_zero 
            = ((0U == (IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp)) 
               | (0U == (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala 
                                  >> 0x17U))));
        vlSelf->__PVT__fp32_data_muler__DOT__ze_r = 
            (0xffU & ((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_exp) 
                      + (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala 
                         >> 0x17U)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__carry = ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry_r) 
                                                  | (0x1ffffffU 
                                                     == vlSelf->__PVT__fp32_data_muler__DOT__zf_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__convert_data_convert__DOT__float_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__float_frac = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
        vlSelf->__PVT__convert_data_convert__DOT__i_uint = 0U;
        vlSelf->__PVT__sub_module__DOT__out = 0U;
    } else {
        if (vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r) {
            vlSelf->__PVT__convert_data_convert__DOT__float_sign 
                = vlSelf->__PVT__convert_data_convert__DOT__i_sign;
            if ((0x40000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9dU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 7U));
            } else if ((0x20000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9cU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 6U));
            } else if ((0x10000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9bU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 5U));
            } else if ((0x8000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x9aU;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 4U));
            } else if ((0x4000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x99U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 3U));
            } else if ((0x2000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x98U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 2U));
            } else if ((0x1000000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x97U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                    >> 1U));
            } else if ((0x800000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x96U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT__i_uint);
            } else if ((0x400000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x95U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffeU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 1U)));
            } else if ((0x200000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)) {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp = 0x94U;
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & (0x7ffffcU & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                 << 2U)));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__float_exp 
                    = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x93U : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x92U : ((0x40000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x91U
                                                : (
                                                   (0x20000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x90U
                                                    : (IData)(vlSelf->__PVT__convert_data_convert__DOT___GEN_35)))));
                vlSelf->__PVT__convert_data_convert__DOT__float_frac 
                    = (0x7fffffU & vlSelf->__PVT__convert_data_convert__DOT___GEN_42);
            }
        }
        if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en) {
            if ((vlSelf->__PVT__convert_data_convert_io_i_data 
                 >> 0x1fU)) {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 1U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & ((IData)(1U) + 
                                      (~ ((((0x80U 
                                             & (IData)(vlSelf->__PVT__sub_module__DOT__out))
                                             ? 0x7fffffU
                                             : 0U) 
                                           << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out)))));
            } else {
                vlSelf->__PVT__convert_data_convert__DOT__i_sign = 0U;
                vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                    = (0x7fffffffU & vlSelf->__PVT__convert_data_convert_io_i_data);
            }
        }
        vlSelf->__PVT__sub_module__DOT__out = (0xffU 
                                               & ((IData)(
                                                          (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__ofm__DOT__TPRAM_WRAP__DOT__tpram_QA 
                                                           >> 0x38U)) 
                                                  - (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_zero_point)));
    }
    vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0_io_en));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_35 
        = ((0x10000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? 0x8fU : ((0x8000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                        ? 0x8eU : ((0x4000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                    ? 0x8dU : ((0x2000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? 0x8cU
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 0x8bU
                                                    : 
                                                   ((0x800U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 0x8aU
                                                     : 
                                                    ((0x400U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 0x89U
                                                      : 
                                                     ((0x200U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 0x88U
                                                       : 
                                                      ((0x100U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 0x87U
                                                        : 
                                                       ((0x80U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 0x86U
                                                         : 
                                                        ((0x40U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 0x85U
                                                          : 
                                                         ((0x20U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 0x84U
                                                           : 
                                                          ((0x10U 
                                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                            ? 0x83U
                                                            : 
                                                           ((8U 
                                                             & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                             ? 0x82U
                                                             : 
                                                            ((4U 
                                                              & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                              ? 0x81U
                                                              : 
                                                             ((2U 
                                                               & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                               ? 0x80U
                                                               : 
                                                              ((1U 
                                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                                ? 0x7fU
                                                                : 0U)))))))))))))))));
    __PVT__convert_data_convert__DOT___GEN_22 = ((0x400U 
                                                  & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                  ? 
                                                 (0x7fe000U 
                                                  & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                     << 0xdU))
                                                  : 
                                                 ((0x200U 
                                                   & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                   ? 
                                                  (0x7fc000U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 0xeU))
                                                   : 
                                                  ((0x100U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7f8000U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 0xfU))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7f0000U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 0x10U))
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7e0000U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 0x11U))
                                                      : 
                                                     ((0x20U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7c0000U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0x12U))
                                                       : 
                                                      ((0x10U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x780000U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0x13U))
                                                        : 
                                                       ((8U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x700000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0x14U))
                                                         : 
                                                        ((4U 
                                                          & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                          ? 
                                                         (0x600000U 
                                                          & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                             << 0x15U))
                                                          : 
                                                         ((2U 
                                                           & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                           ? 
                                                          (0x400000U 
                                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                              << 0x16U))
                                                           : 0U))))))))));
    vlSelf->__PVT__convert_data_convert__DOT___GEN_42 
        = ((0x100000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
            ? (0x7ffff8U & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                            << 3U)) : ((0x80000U & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                        ? (0x7ffff0U 
                                           & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                              << 4U))
                                        : ((0x40000U 
                                            & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                            ? (0x7fffe0U 
                                               & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                  << 5U))
                                            : ((0x20000U 
                                                & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                ? (0x7fffc0U 
                                                   & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                      << 6U))
                                                : (
                                                   (0x10000U 
                                                    & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                    ? 
                                                   (0x7fff80U 
                                                    & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                       << 7U))
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                     ? 
                                                    (0x7fff00U 
                                                     & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                        << 8U))
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                      ? 
                                                     (0x7ffe00U 
                                                      & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                         << 9U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                       ? 
                                                      (0x7ffc00U 
                                                       & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                          << 0xaU))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                        ? 
                                                       (0x7ff800U 
                                                        & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                           << 0xbU))
                                                        : 
                                                       ((0x800U 
                                                         & vlSelf->__PVT__convert_data_convert__DOT__i_uint)
                                                         ? 
                                                        (0x7ff000U 
                                                         & (vlSelf->__PVT__convert_data_convert__DOT__i_uint 
                                                            << 0xcU))
                                                         : __PVT__convert_data_convert__DOT___GEN_22))))))))));
    vlSelf->__PVT__convert_data_convert_io_i_data = 
        ((((0x80U & (IData)(vlSelf->__PVT__sub_module__DOT__out))
            ? 0xffffffU : 0U) << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out));
}
