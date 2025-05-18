// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_dequant_cell.h"

VL_ATTR_COLD void Vtop_dequant_cell___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0__0(Vtop_dequant_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dequant_cell___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0__0\n"); );
    // Init
    IData/*22:0*/ __PVT__convert_data_convert__DOT___GEN_22;
    __PVT__convert_data_convert__DOT___GEN_22 = 0;
    // Body
    vlSelf->__PVT__convert_data_convert_io_i_data = 
        ((((0x80U & (IData)(vlSelf->__PVT__sub_module__DOT__out))
            ? 0xffffffU : 0U) << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out));
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
    vlSelf->__PVT__fp32_data_muler__DOT___zf_0_T_2 
        = (0xffffffffffffULL & ((0x800000ULL | (QData)((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_frac))) 
                                * (0x800000ULL | (QData)((IData)(
                                                                 (0x7fffffU 
                                                                  & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_9))))));
    vlSelf->__PVT__fp32_data_muler__DOT__carry = ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry_r) 
                                                  | (0x1ffffffU 
                                                     == vlSelf->__PVT__fp32_data_muler__DOT__zf_1));
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
}

VL_ATTR_COLD void Vtop_dequant_cell___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_0__0(Vtop_dequant_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dequant_cell___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_0__0\n"); );
    // Init
    IData/*22:0*/ __PVT__convert_data_convert__DOT___GEN_22;
    __PVT__convert_data_convert__DOT___GEN_22 = 0;
    // Body
    vlSelf->__PVT__convert_data_convert_io_i_data = 
        ((((0x80U & (IData)(vlSelf->__PVT__sub_module__DOT__out))
            ? 0xffffffU : 0U) << 8U) | (IData)(vlSelf->__PVT__sub_module__DOT__out));
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
    vlSelf->__PVT__fp32_data_muler__DOT___zf_0_T_2 
        = (0xffffffffffffULL & ((0x800000ULL | (QData)((IData)(vlSelf->__PVT__convert_data_convert__DOT__float_frac))) 
                                * (0x800000ULL | (QData)((IData)(
                                                                 (0x7fffffU 
                                                                  & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__dequant_extra_scala))))));
    vlSelf->__PVT__fp32_data_muler__DOT__carry = ((IData)(vlSelf->__PVT__fp32_data_muler__DOT__carry_r) 
                                                  | (0x1ffffffU 
                                                     == vlSelf->__PVT__fp32_data_muler__DOT__zf_1));
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
}
