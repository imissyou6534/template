// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_full_sub_4(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_4\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_hc1e28fa8__0;
    // Body
    bufp->fullBit(oldp+22206,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_and_c_r_1 
                               >> 0x1fU)));
    bufp->fullCData(oldp+22207,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_and_c_r_1 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+22208,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_and_c_r_1)),23);
    bufp->fullBit(oldp+22209,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_muler__DOT__io_z_r 
                               >> 0x1fU)));
    bufp->fullCData(oldp+22210,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_muler__DOT__io_z_r 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+22211,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_muler__DOT__io_z_r)),23);
    bufp->fullBit(oldp+22212,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__y_gt_x_0));
    bufp->fullCData(oldp+22213,((0xffU & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__y_gt_x_0)
                                           ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_muler__DOT__io_z_r 
                                              >> 0x17U)
                                           : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_and_c_r_1 
                                              >> 0x17U)))),8);
    bufp->fullCData(oldp+22214,((0xffU & (((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__y_gt_x_0)
                                            ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_muler__DOT__io_z_r 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_and_c_r_1 
                                               >> 0x17U)) 
                                          - ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__y_gt_x_0)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_and_c_r_1 
                                                 >> 0x17U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_muler__DOT__io_z_r 
                                                 >> 0x17U))))),8);
    bufp->fullBit(oldp+22215,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zs_a));
    bufp->fullCData(oldp+22216,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__ze_a),8);
    bufp->fullIData(oldp+22217,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__xf1_a),24);
    bufp->fullIData(oldp+22218,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__yf1_a),24);
    bufp->fullCData(oldp+22219,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__xe_ye_a),8);
    bufp->fullBit(oldp+22220,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__xs_ys_a));
    bufp->fullCData(oldp+22221,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__xe_ye_a))),5);
    bufp->fullBit(oldp+22222,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__xe_ye_a) 
                                            >> 5U)))));
    bufp->fullIData(oldp+22223,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__yf2_a0),24);
    bufp->fullIData(oldp+22224,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__yf2_a1),24);
    bufp->fullIData(oldp+22225,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__yf2_a2),24);
    bufp->fullIData(oldp+22226,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__yf2_a3),24);
    bufp->fullIData(oldp+22227,((0xffffffU & ((2U & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__xe_ye_a))
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__yf2_a3 
                                                  >> 2U)
                                               : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__yf2_a3))),24);
    bufp->fullBit(oldp+22228,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__valid_1));
    bufp->fullBit(oldp+22229,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__xs_ys_1));
    bufp->fullIData(oldp+22230,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__xf1_1),24);
    bufp->fullIData(oldp+22231,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__yf2_1),24);
    bufp->fullCData(oldp+22232,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__ze_1),8);
    bufp->fullBit(oldp+22233,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zs_1));
    bufp->fullBit(oldp+22234,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__valid_2));
    bufp->fullCData(oldp+22235,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__ze_2),8);
    bufp->fullBit(oldp+22236,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zs_2));
    bufp->fullIData(oldp+22237,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2),25);
    bufp->fullBit(oldp+22238,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__valid_3));
    bufp->fullCData(oldp+22239,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__ze_3),8);
    bufp->fullBit(oldp+22240,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zs_3));
    bufp->fullIData(oldp+22241,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_3),25);
    bufp->fullCData(oldp+22242,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__offset_3),5);
    bufp->fullBit(oldp+22243,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__underflow_3));
    bufp->fullBit(oldp+22244,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_3 
                                     >> 0x18U))));
    bufp->fullCData(oldp+22245,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__underflow_3)
                                  ? 0U : (0xffU & (
                                                   (0x1000000U 
                                                    & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_3)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__ze_3))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__ze_3) 
                                                    - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__offset_3)))))),8);
    bufp->fullIData(oldp+22246,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__underflow_3)
                                  ? 0U : (0x7fffffU 
                                          & ((0x1000000U 
                                              & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_3)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_3 
                                                 >> 1U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_3 
                                                 << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__offset_3)))))),23);
    bufp->fullBit(oldp+22247,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__valid_4));
    bufp->fullCData(oldp+22248,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                          >> 0x11U))),7);
    bufp->fullSData(oldp+22249,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                            >> 1U))),16);
    bufp->fullBit(oldp+22250,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                               >> 0x11U)))));
    bufp->fullCData(oldp+22251,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                       >> 0x15U))),3);
    bufp->fullCData(oldp+22252,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                         >> 0x11U))),4);
    bufp->fullBit(oldp+22253,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                            >> 0x15U)))));
    bufp->fullCData(oldp+22254,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                          >> 9U))),8);
    bufp->fullCData(oldp+22255,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                          >> 1U))),8);
    bufp->fullBit(oldp+22256,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                               >> 9U)))));
    bufp->fullCData(oldp+22257,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                         >> 0xdU))),4);
    bufp->fullCData(oldp+22258,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                         >> 9U))),4);
    bufp->fullBit(oldp+22259,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                              >> 0xdU)))));
    bufp->fullCData(oldp+22260,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                         >> 5U))),4);
    bufp->fullCData(oldp+22261,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                         >> 1U))),4);
    bufp->fullBit(oldp+22262,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                              >> 5U)))));
    bufp->fullIData(oldp+22263,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                              >> 1U))),23);
    bufp->fullCData(oldp+22264,((0x1fU & ((IData)(0x16U) 
                                          - (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                                           >> 0x11U)))) 
                                              << 4U) 
                                             | ((0U 
                                                 != 
                                                 (0x7fU 
                                                  & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                                     >> 0x11U)))
                                                 ? 
                                                (((IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                                               >> 0x15U)))) 
                                                  << 2U) 
                                                 | ((0U 
                                                     != 
                                                     (7U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                                         >> 0x15U)))
                                                     ? 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2)
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                                         >> 0x16U)))
                                                     : 
                                                    ((0x100000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2)
                                                      ? 3U
                                                      : 
                                                     ((0x80000U 
                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2)
                                                       ? 2U
                                                       : 
                                                      (1U 
                                                       & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                                          >> 0x12U))))))
                                                 : (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__off0__DOT___io_off_T_35)))))),5);
    bufp->fullBit(oldp+22265,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__axx_bx_c_r_3 
                               >> 0x1fU)));
    bufp->fullCData(oldp+22266,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__axx_bx_c_r_3 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+22267,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__axx_bx_c_r_3)),23);
    bufp->fullBit(oldp+22268,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__io_z_r 
                               >> 0x1fU)));
    bufp->fullCData(oldp+22269,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__io_z_r 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+22270,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__io_z_r)),23);
    bufp->fullBit(oldp+22271,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__y_gt_x_0));
    bufp->fullCData(oldp+22272,((0xffU & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__y_gt_x_0)
                                           ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__io_z_r 
                                              >> 0x17U)
                                           : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__axx_bx_c_r_3 
                                              >> 0x17U)))),8);
    bufp->fullCData(oldp+22273,((0xffU & (((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__y_gt_x_0)
                                            ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__io_z_r 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__axx_bx_c_r_3 
                                               >> 0x17U)) 
                                          - ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__y_gt_x_0)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__axx_bx_c_r_3 
                                                 >> 0x17U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__io_z_r 
                                                 >> 0x17U))))),8);
    bufp->fullBit(oldp+22274,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zs_a));
    bufp->fullCData(oldp+22275,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__ze_a),8);
    bufp->fullIData(oldp+22276,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__xf1_a),24);
    bufp->fullIData(oldp+22277,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__yf1_a),24);
    bufp->fullCData(oldp+22278,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__xe_ye_a),8);
    bufp->fullBit(oldp+22279,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__xs_ys_a));
    bufp->fullCData(oldp+22280,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__xe_ye_a))),5);
    bufp->fullBit(oldp+22281,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__xe_ye_a) 
                                            >> 5U)))));
    bufp->fullIData(oldp+22282,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__yf2_a0),24);
    bufp->fullIData(oldp+22283,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__yf2_a1),24);
    bufp->fullIData(oldp+22284,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__yf2_a2),24);
    bufp->fullIData(oldp+22285,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__yf2_a3),24);
    bufp->fullIData(oldp+22286,((0xffffffU & ((2U & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__xe_ye_a))
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__yf2_a3 
                                                  >> 2U)
                                               : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__yf2_a3))),24);
    bufp->fullBit(oldp+22287,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__valid_1));
    bufp->fullBit(oldp+22288,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__xs_ys_1));
    bufp->fullIData(oldp+22289,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__xf1_1),24);
    bufp->fullIData(oldp+22290,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__yf2_1),24);
    bufp->fullCData(oldp+22291,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__ze_1),8);
    bufp->fullBit(oldp+22292,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zs_1));
    bufp->fullBit(oldp+22293,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__valid_2));
    bufp->fullCData(oldp+22294,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__ze_2),8);
    bufp->fullBit(oldp+22295,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zs_2));
    bufp->fullIData(oldp+22296,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2),25);
    bufp->fullBit(oldp+22297,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__valid_3));
    bufp->fullCData(oldp+22298,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__ze_3),8);
    bufp->fullBit(oldp+22299,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zs_3));
    bufp->fullIData(oldp+22300,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_3),25);
    bufp->fullCData(oldp+22301,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__offset_3),5);
    bufp->fullBit(oldp+22302,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__underflow_3));
    bufp->fullBit(oldp+22303,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_3 
                                     >> 0x18U))));
    bufp->fullCData(oldp+22304,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__underflow_3)
                                  ? 0U : (0xffU & (
                                                   (0x1000000U 
                                                    & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_3)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__ze_3))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__ze_3) 
                                                    - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__offset_3)))))),8);
    bufp->fullIData(oldp+22305,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__underflow_3)
                                  ? 0U : (0x7fffffU 
                                          & ((0x1000000U 
                                              & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_3)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_3 
                                                 >> 1U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_3 
                                                 << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__offset_3)))))),23);
    bufp->fullBit(oldp+22306,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__valid_4));
    bufp->fullCData(oldp+22307,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                          >> 0x11U))),7);
    bufp->fullSData(oldp+22308,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                            >> 1U))),16);
    bufp->fullBit(oldp+22309,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                               >> 0x11U)))));
    bufp->fullCData(oldp+22310,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                       >> 0x15U))),3);
    bufp->fullCData(oldp+22311,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                         >> 0x11U))),4);
    bufp->fullBit(oldp+22312,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                            >> 0x15U)))));
    bufp->fullCData(oldp+22313,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                          >> 9U))),8);
    bufp->fullCData(oldp+22314,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                          >> 1U))),8);
    bufp->fullBit(oldp+22315,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                               >> 9U)))));
    bufp->fullCData(oldp+22316,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                         >> 0xdU))),4);
    bufp->fullCData(oldp+22317,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                         >> 9U))),4);
    bufp->fullBit(oldp+22318,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                              >> 0xdU)))));
    bufp->fullCData(oldp+22319,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                         >> 5U))),4);
    bufp->fullCData(oldp+22320,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                         >> 1U))),4);
    bufp->fullBit(oldp+22321,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                              >> 5U)))));
    bufp->fullIData(oldp+22322,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                              >> 1U))),23);
    bufp->fullCData(oldp+22323,((0x1fU & ((IData)(0x16U) 
                                          - (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                                           >> 0x11U)))) 
                                              << 4U) 
                                             | ((0U 
                                                 != 
                                                 (0x7fU 
                                                  & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                                     >> 0x11U)))
                                                 ? 
                                                (((IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                                               >> 0x15U)))) 
                                                  << 2U) 
                                                 | ((0U 
                                                     != 
                                                     (7U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                                         >> 0x15U)))
                                                     ? 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2)
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                                         >> 0x16U)))
                                                     : 
                                                    ((0x100000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2)
                                                      ? 3U
                                                      : 
                                                     ((0x80000U 
                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2)
                                                       ? 2U
                                                       : 
                                                      (1U 
                                                       & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                                          >> 0x12U))))))
                                                 : (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__off0__DOT___io_off_T_35)))))),5);
    bufp->fullBit(oldp+22324,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x 
                               >> 0x1fU)));
    bufp->fullCData(oldp+22325,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+22326,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x)),23);
    bufp->fullBit(oldp+22327,((0x3f800000U > (0x7fffffffU 
                                              & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x))));
    bufp->fullCData(oldp+22328,(((0x3f800000U > (0x7fffffffU 
                                                 & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x))
                                  ? 0x7fU : (0xffU 
                                             & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x 
                                                >> 0x17U)))),8);
    bufp->fullCData(oldp+22329,((0xffU & (((0x3f800000U 
                                            > (0x7fffffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x))
                                            ? 0x7fU
                                            : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x 
                                               >> 0x17U)) 
                                          - ((0x3f800000U 
                                              > (0x7fffffffU 
                                                 & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x))
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x 
                                                 >> 0x17U)
                                              : 0x7fU)))),8);
    bufp->fullBit(oldp+22330,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zs_a));
    bufp->fullCData(oldp+22331,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__ze_a),8);
    bufp->fullIData(oldp+22332,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__xf1_a),24);
    bufp->fullIData(oldp+22333,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__yf1_a),24);
    bufp->fullCData(oldp+22334,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__xe_ye_a),8);
    bufp->fullBit(oldp+22335,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__xs_ys_a));
    bufp->fullCData(oldp+22336,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__xe_ye_a))),5);
    bufp->fullBit(oldp+22337,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__xe_ye_a) 
                                            >> 5U)))));
    bufp->fullIData(oldp+22338,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__yf2_a0),24);
    bufp->fullIData(oldp+22339,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__yf2_a1),24);
    bufp->fullIData(oldp+22340,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__yf2_a2),24);
    bufp->fullIData(oldp+22341,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__yf2_a3),24);
    bufp->fullIData(oldp+22342,((0xffffffU & ((2U & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__xe_ye_a))
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__yf2_a3 
                                                  >> 2U)
                                               : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__yf2_a3))),24);
    bufp->fullBit(oldp+22343,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__valid_1));
    bufp->fullBit(oldp+22344,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__xs_ys_1));
    bufp->fullIData(oldp+22345,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__xf1_1),24);
    bufp->fullIData(oldp+22346,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__yf2_1),24);
    bufp->fullCData(oldp+22347,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__ze_1),8);
    bufp->fullBit(oldp+22348,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zs_1));
    bufp->fullBit(oldp+22349,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__valid_2));
    bufp->fullCData(oldp+22350,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__ze_2),8);
    bufp->fullBit(oldp+22351,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zs_2));
    bufp->fullIData(oldp+22352,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2),25);
    bufp->fullBit(oldp+22353,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__valid_3));
    bufp->fullCData(oldp+22354,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__ze_3),8);
    bufp->fullBit(oldp+22355,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zs_3));
    bufp->fullIData(oldp+22356,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_3),25);
    bufp->fullCData(oldp+22357,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__offset_3),5);
    bufp->fullBit(oldp+22358,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__underflow_3));
    bufp->fullBit(oldp+22359,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_3 
                                     >> 0x18U))));
    bufp->fullCData(oldp+22360,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__underflow_3)
                                  ? 0U : (0xffU & (
                                                   (0x1000000U 
                                                    & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_3)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__ze_3))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__ze_3) 
                                                    - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__offset_3)))))),8);
    bufp->fullIData(oldp+22361,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__underflow_3)
                                  ? 0U : (0x7fffffU 
                                          & ((0x1000000U 
                                              & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_3)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_3 
                                                 >> 1U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_3 
                                                 << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__offset_3)))))),23);
    bufp->fullBit(oldp+22362,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__valid_4));
    bufp->fullCData(oldp+22363,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                          >> 0x11U))),7);
    bufp->fullSData(oldp+22364,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                            >> 1U))),16);
    bufp->fullBit(oldp+22365,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                               >> 0x11U)))));
    bufp->fullCData(oldp+22366,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                       >> 0x15U))),3);
    bufp->fullCData(oldp+22367,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                         >> 0x11U))),4);
    bufp->fullBit(oldp+22368,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                            >> 0x15U)))));
    bufp->fullCData(oldp+22369,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                          >> 9U))),8);
    bufp->fullCData(oldp+22370,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                          >> 1U))),8);
    bufp->fullBit(oldp+22371,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                               >> 9U)))));
    bufp->fullCData(oldp+22372,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                         >> 0xdU))),4);
    bufp->fullCData(oldp+22373,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                         >> 9U))),4);
    bufp->fullBit(oldp+22374,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                              >> 0xdU)))));
    bufp->fullCData(oldp+22375,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                         >> 5U))),4);
    bufp->fullCData(oldp+22376,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                         >> 1U))),4);
    bufp->fullBit(oldp+22377,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                              >> 5U)))));
    bufp->fullIData(oldp+22378,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                              >> 1U))),23);
    bufp->fullCData(oldp+22379,((0x1fU & ((IData)(0x16U) 
                                          - (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                                           >> 0x11U)))) 
                                              << 4U) 
                                             | ((0U 
                                                 != 
                                                 (0x7fU 
                                                  & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                                     >> 0x11U)))
                                                 ? 
                                                (((IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                                               >> 0x15U)))) 
                                                  << 2U) 
                                                 | ((0U 
                                                     != 
                                                     (7U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                                         >> 0x15U)))
                                                     ? 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2)
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                                         >> 0x16U)))
                                                     : 
                                                    ((0x100000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2)
                                                      ? 3U
                                                      : 
                                                     ((0x80000U 
                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2)
                                                       ? 2U
                                                       : 
                                                      (1U 
                                                       & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                                          >> 0x12U))))))
                                                 : (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__off0__DOT___io_off_T_35)))))),5);
    bufp->fullBit(oldp+22380,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_and_c_r_1 
                               >> 0x1fU)));
    bufp->fullCData(oldp+22381,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_and_c_r_1 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+22382,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_and_c_r_1)),23);
    bufp->fullBit(oldp+22383,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_muler__DOT__io_z_r 
                               >> 0x1fU)));
    bufp->fullCData(oldp+22384,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_muler__DOT__io_z_r 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+22385,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_muler__DOT__io_z_r)),23);
    bufp->fullBit(oldp+22386,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__y_gt_x_0));
    bufp->fullCData(oldp+22387,((0xffU & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__y_gt_x_0)
                                           ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_muler__DOT__io_z_r 
                                              >> 0x17U)
                                           : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_and_c_r_1 
                                              >> 0x17U)))),8);
    bufp->fullCData(oldp+22388,((0xffU & (((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__y_gt_x_0)
                                            ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_muler__DOT__io_z_r 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_and_c_r_1 
                                               >> 0x17U)) 
                                          - ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__y_gt_x_0)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_and_c_r_1 
                                                 >> 0x17U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_muler__DOT__io_z_r 
                                                 >> 0x17U))))),8);
    bufp->fullBit(oldp+22389,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zs_a));
    bufp->fullCData(oldp+22390,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__ze_a),8);
    bufp->fullIData(oldp+22391,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__xf1_a),24);
    bufp->fullIData(oldp+22392,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__yf1_a),24);
    bufp->fullCData(oldp+22393,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__xe_ye_a),8);
    bufp->fullBit(oldp+22394,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__xs_ys_a));
    bufp->fullCData(oldp+22395,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__xe_ye_a))),5);
    bufp->fullBit(oldp+22396,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__xe_ye_a) 
                                            >> 5U)))));
    bufp->fullIData(oldp+22397,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__yf2_a0),24);
    bufp->fullIData(oldp+22398,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__yf2_a1),24);
    bufp->fullIData(oldp+22399,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__yf2_a2),24);
    bufp->fullIData(oldp+22400,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__yf2_a3),24);
    bufp->fullIData(oldp+22401,((0xffffffU & ((2U & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__xe_ye_a))
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__yf2_a3 
                                                  >> 2U)
                                               : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__yf2_a3))),24);
    bufp->fullBit(oldp+22402,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__valid_1));
    bufp->fullBit(oldp+22403,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__xs_ys_1));
    bufp->fullIData(oldp+22404,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__xf1_1),24);
    bufp->fullIData(oldp+22405,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__yf2_1),24);
    bufp->fullCData(oldp+22406,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__ze_1),8);
    bufp->fullBit(oldp+22407,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zs_1));
    bufp->fullBit(oldp+22408,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__valid_2));
    bufp->fullCData(oldp+22409,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__ze_2),8);
    bufp->fullBit(oldp+22410,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zs_2));
    bufp->fullIData(oldp+22411,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2),25);
    bufp->fullBit(oldp+22412,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__valid_3));
    bufp->fullCData(oldp+22413,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__ze_3),8);
    bufp->fullBit(oldp+22414,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zs_3));
    bufp->fullIData(oldp+22415,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_3),25);
    bufp->fullCData(oldp+22416,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__offset_3),5);
    bufp->fullBit(oldp+22417,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__underflow_3));
    bufp->fullBit(oldp+22418,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_3 
                                     >> 0x18U))));
    bufp->fullCData(oldp+22419,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__underflow_3)
                                  ? 0U : (0xffU & (
                                                   (0x1000000U 
                                                    & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_3)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__ze_3))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__ze_3) 
                                                    - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__offset_3)))))),8);
    bufp->fullIData(oldp+22420,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__underflow_3)
                                  ? 0U : (0x7fffffU 
                                          & ((0x1000000U 
                                              & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_3)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_3 
                                                 >> 1U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_3 
                                                 << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__offset_3)))))),23);
    bufp->fullBit(oldp+22421,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__valid_4));
    bufp->fullCData(oldp+22422,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                          >> 0x11U))),7);
    bufp->fullSData(oldp+22423,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                            >> 1U))),16);
    bufp->fullBit(oldp+22424,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                               >> 0x11U)))));
    bufp->fullCData(oldp+22425,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                       >> 0x15U))),3);
    bufp->fullCData(oldp+22426,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                         >> 0x11U))),4);
    bufp->fullBit(oldp+22427,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                            >> 0x15U)))));
    bufp->fullCData(oldp+22428,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                          >> 9U))),8);
    bufp->fullCData(oldp+22429,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                          >> 1U))),8);
    bufp->fullBit(oldp+22430,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                               >> 9U)))));
    bufp->fullCData(oldp+22431,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                         >> 0xdU))),4);
    bufp->fullCData(oldp+22432,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                         >> 9U))),4);
    bufp->fullBit(oldp+22433,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                              >> 0xdU)))));
    bufp->fullCData(oldp+22434,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                         >> 5U))),4);
    bufp->fullCData(oldp+22435,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                         >> 1U))),4);
    bufp->fullBit(oldp+22436,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                              >> 5U)))));
    bufp->fullIData(oldp+22437,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                              >> 1U))),23);
    bufp->fullCData(oldp+22438,((0x1fU & ((IData)(0x16U) 
                                          - (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                                           >> 0x11U)))) 
                                              << 4U) 
                                             | ((0U 
                                                 != 
                                                 (0x7fU 
                                                  & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                                     >> 0x11U)))
                                                 ? 
                                                (((IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                                               >> 0x15U)))) 
                                                  << 2U) 
                                                 | ((0U 
                                                     != 
                                                     (7U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                                         >> 0x15U)))
                                                     ? 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2)
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                                         >> 0x16U)))
                                                     : 
                                                    ((0x100000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2)
                                                      ? 3U
                                                      : 
                                                     ((0x80000U 
                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2)
                                                       ? 2U
                                                       : 
                                                      (1U 
                                                       & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                                          >> 0x12U))))))
                                                 : (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__off0__DOT___io_off_T_35)))))),5);
    bufp->fullBit(oldp+22439,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__axx_bx_c_r_3 
                               >> 0x1fU)));
    bufp->fullCData(oldp+22440,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__axx_bx_c_r_3 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+22441,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__axx_bx_c_r_3)),23);
    bufp->fullBit(oldp+22442,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__io_z_r 
                               >> 0x1fU)));
    bufp->fullCData(oldp+22443,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__io_z_r 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+22444,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__io_z_r)),23);
    bufp->fullBit(oldp+22445,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__y_gt_x_0));
    bufp->fullCData(oldp+22446,((0xffU & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__y_gt_x_0)
                                           ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__io_z_r 
                                              >> 0x17U)
                                           : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__axx_bx_c_r_3 
                                              >> 0x17U)))),8);
    bufp->fullCData(oldp+22447,((0xffU & (((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__y_gt_x_0)
                                            ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__io_z_r 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__axx_bx_c_r_3 
                                               >> 0x17U)) 
                                          - ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__y_gt_x_0)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__axx_bx_c_r_3 
                                                 >> 0x17U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__io_z_r 
                                                 >> 0x17U))))),8);
    bufp->fullBit(oldp+22448,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zs_a));
    bufp->fullCData(oldp+22449,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__ze_a),8);
    bufp->fullIData(oldp+22450,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__xf1_a),24);
    bufp->fullIData(oldp+22451,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__yf1_a),24);
    bufp->fullCData(oldp+22452,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__xe_ye_a),8);
    bufp->fullBit(oldp+22453,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__xs_ys_a));
    bufp->fullCData(oldp+22454,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__xe_ye_a))),5);
    bufp->fullBit(oldp+22455,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__xe_ye_a) 
                                            >> 5U)))));
    bufp->fullIData(oldp+22456,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__yf2_a0),24);
    bufp->fullIData(oldp+22457,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__yf2_a1),24);
    bufp->fullIData(oldp+22458,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__yf2_a2),24);
    bufp->fullIData(oldp+22459,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__yf2_a3),24);
    bufp->fullIData(oldp+22460,((0xffffffU & ((2U & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__xe_ye_a))
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__yf2_a3 
                                                  >> 2U)
                                               : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__yf2_a3))),24);
    bufp->fullBit(oldp+22461,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__valid_1));
    bufp->fullBit(oldp+22462,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__xs_ys_1));
    bufp->fullIData(oldp+22463,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__xf1_1),24);
    bufp->fullIData(oldp+22464,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__yf2_1),24);
    bufp->fullCData(oldp+22465,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__ze_1),8);
    bufp->fullBit(oldp+22466,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zs_1));
    bufp->fullBit(oldp+22467,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__valid_2));
    bufp->fullCData(oldp+22468,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__ze_2),8);
    bufp->fullBit(oldp+22469,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zs_2));
    bufp->fullIData(oldp+22470,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2),25);
    bufp->fullBit(oldp+22471,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__valid_3));
    bufp->fullCData(oldp+22472,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__ze_3),8);
    bufp->fullBit(oldp+22473,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zs_3));
    bufp->fullIData(oldp+22474,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_3),25);
    bufp->fullCData(oldp+22475,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__offset_3),5);
    bufp->fullBit(oldp+22476,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__underflow_3));
    bufp->fullBit(oldp+22477,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_3 
                                     >> 0x18U))));
    bufp->fullCData(oldp+22478,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__underflow_3)
                                  ? 0U : (0xffU & (
                                                   (0x1000000U 
                                                    & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_3)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__ze_3))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__ze_3) 
                                                    - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__offset_3)))))),8);
    bufp->fullIData(oldp+22479,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__underflow_3)
                                  ? 0U : (0x7fffffU 
                                          & ((0x1000000U 
                                              & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_3)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_3 
                                                 >> 1U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_3 
                                                 << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__offset_3)))))),23);
    bufp->fullBit(oldp+22480,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__valid_4));
    bufp->fullCData(oldp+22481,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                          >> 0x11U))),7);
    bufp->fullSData(oldp+22482,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                            >> 1U))),16);
    bufp->fullBit(oldp+22483,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                               >> 0x11U)))));
    bufp->fullCData(oldp+22484,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                       >> 0x15U))),3);
    bufp->fullCData(oldp+22485,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                         >> 0x11U))),4);
    bufp->fullBit(oldp+22486,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                            >> 0x15U)))));
    bufp->fullCData(oldp+22487,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                          >> 9U))),8);
    bufp->fullCData(oldp+22488,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                          >> 1U))),8);
    bufp->fullBit(oldp+22489,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                               >> 9U)))));
    bufp->fullCData(oldp+22490,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                         >> 0xdU))),4);
    bufp->fullCData(oldp+22491,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                         >> 9U))),4);
    bufp->fullBit(oldp+22492,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                              >> 0xdU)))));
    bufp->fullCData(oldp+22493,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                         >> 5U))),4);
    bufp->fullCData(oldp+22494,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                         >> 1U))),4);
    bufp->fullBit(oldp+22495,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                              >> 5U)))));
    bufp->fullIData(oldp+22496,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                              >> 1U))),23);
    bufp->fullCData(oldp+22497,((0x1fU & ((IData)(0x16U) 
                                          - (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                                           >> 0x11U)))) 
                                              << 4U) 
                                             | ((0U 
                                                 != 
                                                 (0x7fU 
                                                  & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                                     >> 0x11U)))
                                                 ? 
                                                (((IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                                               >> 0x15U)))) 
                                                  << 2U) 
                                                 | ((0U 
                                                     != 
                                                     (7U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                                         >> 0x15U)))
                                                     ? 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2)
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                                         >> 0x16U)))
                                                     : 
                                                    ((0x100000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2)
                                                      ? 3U
                                                      : 
                                                     ((0x80000U 
                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2)
                                                       ? 2U
                                                       : 
                                                      (1U 
                                                       & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                                          >> 0x12U))))))
                                                 : (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__off0__DOT___io_off_T_35)))))),5);
    bufp->fullBit(oldp+22498,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x 
                               >> 0x1fU)));
    bufp->fullCData(oldp+22499,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+22500,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x)),23);
    bufp->fullBit(oldp+22501,((0x3f800000U > (0x7fffffffU 
                                              & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x))));
    bufp->fullCData(oldp+22502,(((0x3f800000U > (0x7fffffffU 
                                                 & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x))
                                  ? 0x7fU : (0xffU 
                                             & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x 
                                                >> 0x17U)))),8);
    bufp->fullCData(oldp+22503,((0xffU & (((0x3f800000U 
                                            > (0x7fffffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x))
                                            ? 0x7fU
                                            : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x 
                                               >> 0x17U)) 
                                          - ((0x3f800000U 
                                              > (0x7fffffffU 
                                                 & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x))
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x 
                                                 >> 0x17U)
                                              : 0x7fU)))),8);
    bufp->fullBit(oldp+22504,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zs_a));
    bufp->fullCData(oldp+22505,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__ze_a),8);
    bufp->fullIData(oldp+22506,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__xf1_a),24);
    bufp->fullIData(oldp+22507,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__yf1_a),24);
    bufp->fullCData(oldp+22508,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__xe_ye_a),8);
    bufp->fullBit(oldp+22509,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__xs_ys_a));
    bufp->fullCData(oldp+22510,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__xe_ye_a))),5);
    bufp->fullBit(oldp+22511,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__xe_ye_a) 
                                            >> 5U)))));
    bufp->fullIData(oldp+22512,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__yf2_a0),24);
    bufp->fullIData(oldp+22513,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__yf2_a1),24);
    bufp->fullIData(oldp+22514,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__yf2_a2),24);
    bufp->fullIData(oldp+22515,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__yf2_a3),24);
    bufp->fullIData(oldp+22516,((0xffffffU & ((2U & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__xe_ye_a))
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__yf2_a3 
                                                  >> 2U)
                                               : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__yf2_a3))),24);
    bufp->fullBit(oldp+22517,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__valid_1));
    bufp->fullBit(oldp+22518,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__xs_ys_1));
    bufp->fullIData(oldp+22519,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__xf1_1),24);
    bufp->fullIData(oldp+22520,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__yf2_1),24);
    bufp->fullCData(oldp+22521,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__ze_1),8);
    bufp->fullBit(oldp+22522,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zs_1));
    bufp->fullBit(oldp+22523,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__valid_2));
    bufp->fullCData(oldp+22524,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__ze_2),8);
    bufp->fullBit(oldp+22525,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zs_2));
    bufp->fullIData(oldp+22526,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2),25);
    bufp->fullBit(oldp+22527,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__valid_3));
    bufp->fullCData(oldp+22528,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__ze_3),8);
    bufp->fullBit(oldp+22529,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zs_3));
    bufp->fullIData(oldp+22530,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_3),25);
    bufp->fullCData(oldp+22531,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__offset_3),5);
    bufp->fullBit(oldp+22532,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__underflow_3));
    bufp->fullBit(oldp+22533,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_3 
                                     >> 0x18U))));
    bufp->fullCData(oldp+22534,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__underflow_3)
                                  ? 0U : (0xffU & (
                                                   (0x1000000U 
                                                    & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_3)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__ze_3))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__ze_3) 
                                                    - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__offset_3)))))),8);
    bufp->fullIData(oldp+22535,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__underflow_3)
                                  ? 0U : (0x7fffffU 
                                          & ((0x1000000U 
                                              & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_3)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_3 
                                                 >> 1U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_3 
                                                 << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__offset_3)))))),23);
    bufp->fullBit(oldp+22536,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__valid_4));
    bufp->fullCData(oldp+22537,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                          >> 0x11U))),7);
    bufp->fullSData(oldp+22538,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                            >> 1U))),16);
    bufp->fullBit(oldp+22539,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                               >> 0x11U)))));
    bufp->fullCData(oldp+22540,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                       >> 0x15U))),3);
    bufp->fullCData(oldp+22541,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                         >> 0x11U))),4);
    bufp->fullBit(oldp+22542,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                            >> 0x15U)))));
    bufp->fullCData(oldp+22543,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                          >> 9U))),8);
    bufp->fullCData(oldp+22544,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                          >> 1U))),8);
    bufp->fullBit(oldp+22545,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                               >> 9U)))));
    bufp->fullCData(oldp+22546,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                         >> 0xdU))),4);
    bufp->fullCData(oldp+22547,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                         >> 9U))),4);
    bufp->fullBit(oldp+22548,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                              >> 0xdU)))));
    bufp->fullCData(oldp+22549,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                         >> 5U))),4);
    bufp->fullCData(oldp+22550,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                         >> 1U))),4);
    bufp->fullBit(oldp+22551,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                              >> 5U)))));
    bufp->fullIData(oldp+22552,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                              >> 1U))),23);
    bufp->fullCData(oldp+22553,((0x1fU & ((IData)(0x16U) 
                                          - (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                                           >> 0x11U)))) 
                                              << 4U) 
                                             | ((0U 
                                                 != 
                                                 (0x7fU 
                                                  & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                                     >> 0x11U)))
                                                 ? 
                                                (((IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                                               >> 0x15U)))) 
                                                  << 2U) 
                                                 | ((0U 
                                                     != 
                                                     (7U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                                         >> 0x15U)))
                                                     ? 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2)
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                                         >> 0x16U)))
                                                     : 
                                                    ((0x100000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2)
                                                      ? 3U
                                                      : 
                                                     ((0x80000U 
                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2)
                                                       ? 2U
                                                       : 
                                                      (1U 
                                                       & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                                          >> 0x12U))))))
                                                 : (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__off0__DOT___io_off_T_35)))))),5);
    bufp->fullBit(oldp+22554,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_and_c_r_1 
                               >> 0x1fU)));
    bufp->fullCData(oldp+22555,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_and_c_r_1 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+22556,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_and_c_r_1)),23);
    bufp->fullBit(oldp+22557,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_muler__DOT__io_z_r 
                               >> 0x1fU)));
    bufp->fullCData(oldp+22558,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_muler__DOT__io_z_r 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+22559,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_muler__DOT__io_z_r)),23);
    bufp->fullBit(oldp+22560,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__y_gt_x_0));
    bufp->fullCData(oldp+22561,((0xffU & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__y_gt_x_0)
                                           ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_muler__DOT__io_z_r 
                                              >> 0x17U)
                                           : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_and_c_r_1 
                                              >> 0x17U)))),8);
    bufp->fullCData(oldp+22562,((0xffU & (((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__y_gt_x_0)
                                            ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_muler__DOT__io_z_r 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_and_c_r_1 
                                               >> 0x17U)) 
                                          - ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__y_gt_x_0)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_and_c_r_1 
                                                 >> 0x17U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_muler__DOT__io_z_r 
                                                 >> 0x17U))))),8);
    bufp->fullBit(oldp+22563,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zs_a));
    bufp->fullCData(oldp+22564,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__ze_a),8);
    bufp->fullIData(oldp+22565,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__xf1_a),24);
    bufp->fullIData(oldp+22566,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__yf1_a),24);
    bufp->fullCData(oldp+22567,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__xe_ye_a),8);
    bufp->fullBit(oldp+22568,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__xs_ys_a));
    bufp->fullCData(oldp+22569,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__xe_ye_a))),5);
    bufp->fullBit(oldp+22570,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__xe_ye_a) 
                                            >> 5U)))));
    bufp->fullIData(oldp+22571,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__yf2_a0),24);
    bufp->fullIData(oldp+22572,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__yf2_a1),24);
    bufp->fullIData(oldp+22573,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__yf2_a2),24);
    bufp->fullIData(oldp+22574,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__yf2_a3),24);
    bufp->fullIData(oldp+22575,((0xffffffU & ((2U & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__xe_ye_a))
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__yf2_a3 
                                                  >> 2U)
                                               : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__yf2_a3))),24);
    bufp->fullBit(oldp+22576,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__valid_1));
    bufp->fullBit(oldp+22577,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__xs_ys_1));
    bufp->fullIData(oldp+22578,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__xf1_1),24);
    bufp->fullIData(oldp+22579,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__yf2_1),24);
    bufp->fullCData(oldp+22580,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__ze_1),8);
    bufp->fullBit(oldp+22581,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zs_1));
    bufp->fullBit(oldp+22582,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__valid_2));
    bufp->fullCData(oldp+22583,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__ze_2),8);
    bufp->fullBit(oldp+22584,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zs_2));
    bufp->fullIData(oldp+22585,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2),25);
    bufp->fullBit(oldp+22586,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__valid_3));
    bufp->fullCData(oldp+22587,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__ze_3),8);
    bufp->fullBit(oldp+22588,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zs_3));
    bufp->fullIData(oldp+22589,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_3),25);
    bufp->fullCData(oldp+22590,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__offset_3),5);
    bufp->fullBit(oldp+22591,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__underflow_3));
    bufp->fullBit(oldp+22592,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_3 
                                     >> 0x18U))));
    bufp->fullCData(oldp+22593,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__underflow_3)
                                  ? 0U : (0xffU & (
                                                   (0x1000000U 
                                                    & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_3)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__ze_3))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__ze_3) 
                                                    - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__offset_3)))))),8);
    bufp->fullIData(oldp+22594,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__underflow_3)
                                  ? 0U : (0x7fffffU 
                                          & ((0x1000000U 
                                              & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_3)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_3 
                                                 >> 1U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_3 
                                                 << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__offset_3)))))),23);
    bufp->fullBit(oldp+22595,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__valid_4));
    bufp->fullCData(oldp+22596,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                          >> 0x11U))),7);
    bufp->fullSData(oldp+22597,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                            >> 1U))),16);
    bufp->fullBit(oldp+22598,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                               >> 0x11U)))));
    bufp->fullCData(oldp+22599,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                       >> 0x15U))),3);
    bufp->fullCData(oldp+22600,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                         >> 0x11U))),4);
    bufp->fullBit(oldp+22601,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                            >> 0x15U)))));
    bufp->fullCData(oldp+22602,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                          >> 9U))),8);
    bufp->fullCData(oldp+22603,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                          >> 1U))),8);
    bufp->fullBit(oldp+22604,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                               >> 9U)))));
    bufp->fullCData(oldp+22605,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                         >> 0xdU))),4);
    bufp->fullCData(oldp+22606,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                         >> 9U))),4);
    bufp->fullBit(oldp+22607,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                              >> 0xdU)))));
    bufp->fullCData(oldp+22608,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                         >> 5U))),4);
    bufp->fullCData(oldp+22609,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                         >> 1U))),4);
    bufp->fullBit(oldp+22610,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                              >> 5U)))));
    bufp->fullIData(oldp+22611,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                              >> 1U))),23);
    bufp->fullCData(oldp+22612,((0x1fU & ((IData)(0x16U) 
                                          - (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                                           >> 0x11U)))) 
                                              << 4U) 
                                             | ((0U 
                                                 != 
                                                 (0x7fU 
                                                  & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                                     >> 0x11U)))
                                                 ? 
                                                (((IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                                               >> 0x15U)))) 
                                                  << 2U) 
                                                 | ((0U 
                                                     != 
                                                     (7U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                                         >> 0x15U)))
                                                     ? 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2)
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                                         >> 0x16U)))
                                                     : 
                                                    ((0x100000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2)
                                                      ? 3U
                                                      : 
                                                     ((0x80000U 
                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2)
                                                       ? 2U
                                                       : 
                                                      (1U 
                                                       & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                                          >> 0x12U))))))
                                                 : (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__off0__DOT___io_off_T_35)))))),5);
    bufp->fullBit(oldp+22613,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__axx_bx_c_r_3 
                               >> 0x1fU)));
    bufp->fullCData(oldp+22614,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__axx_bx_c_r_3 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+22615,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__axx_bx_c_r_3)),23);
    bufp->fullBit(oldp+22616,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__io_z_r 
                               >> 0x1fU)));
    bufp->fullCData(oldp+22617,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__io_z_r 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+22618,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__io_z_r)),23);
    bufp->fullBit(oldp+22619,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__y_gt_x_0));
    bufp->fullCData(oldp+22620,((0xffU & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__y_gt_x_0)
                                           ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__io_z_r 
                                              >> 0x17U)
                                           : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__axx_bx_c_r_3 
                                              >> 0x17U)))),8);
    bufp->fullCData(oldp+22621,((0xffU & (((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__y_gt_x_0)
                                            ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__io_z_r 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__axx_bx_c_r_3 
                                               >> 0x17U)) 
                                          - ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__y_gt_x_0)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__axx_bx_c_r_3 
                                                 >> 0x17U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__io_z_r 
                                                 >> 0x17U))))),8);
    bufp->fullBit(oldp+22622,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zs_a));
    bufp->fullCData(oldp+22623,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__ze_a),8);
    bufp->fullIData(oldp+22624,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__xf1_a),24);
    bufp->fullIData(oldp+22625,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__yf1_a),24);
    bufp->fullCData(oldp+22626,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__xe_ye_a),8);
    bufp->fullBit(oldp+22627,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__xs_ys_a));
    bufp->fullCData(oldp+22628,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__xe_ye_a))),5);
    bufp->fullBit(oldp+22629,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__xe_ye_a) 
                                            >> 5U)))));
    bufp->fullIData(oldp+22630,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__yf2_a0),24);
    bufp->fullIData(oldp+22631,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__yf2_a1),24);
    bufp->fullIData(oldp+22632,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__yf2_a2),24);
    bufp->fullIData(oldp+22633,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__yf2_a3),24);
    bufp->fullIData(oldp+22634,((0xffffffU & ((2U & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__xe_ye_a))
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__yf2_a3 
                                                  >> 2U)
                                               : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__yf2_a3))),24);
    bufp->fullBit(oldp+22635,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__valid_1));
    bufp->fullBit(oldp+22636,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__xs_ys_1));
    bufp->fullIData(oldp+22637,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__xf1_1),24);
    bufp->fullIData(oldp+22638,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__yf2_1),24);
    bufp->fullCData(oldp+22639,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__ze_1),8);
    bufp->fullBit(oldp+22640,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zs_1));
    bufp->fullBit(oldp+22641,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__valid_2));
    bufp->fullCData(oldp+22642,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__ze_2),8);
    bufp->fullBit(oldp+22643,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zs_2));
    bufp->fullIData(oldp+22644,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2),25);
    bufp->fullBit(oldp+22645,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__valid_3));
    bufp->fullCData(oldp+22646,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__ze_3),8);
    bufp->fullBit(oldp+22647,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zs_3));
    bufp->fullIData(oldp+22648,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_3),25);
    bufp->fullCData(oldp+22649,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__offset_3),5);
    bufp->fullBit(oldp+22650,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__underflow_3));
    bufp->fullBit(oldp+22651,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_3 
                                     >> 0x18U))));
    bufp->fullCData(oldp+22652,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__underflow_3)
                                  ? 0U : (0xffU & (
                                                   (0x1000000U 
                                                    & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_3)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__ze_3))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__ze_3) 
                                                    - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__offset_3)))))),8);
    bufp->fullIData(oldp+22653,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__underflow_3)
                                  ? 0U : (0x7fffffU 
                                          & ((0x1000000U 
                                              & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_3)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_3 
                                                 >> 1U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_3 
                                                 << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__offset_3)))))),23);
    bufp->fullBit(oldp+22654,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__valid_4));
    bufp->fullCData(oldp+22655,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                          >> 0x11U))),7);
    bufp->fullSData(oldp+22656,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                            >> 1U))),16);
    bufp->fullBit(oldp+22657,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                               >> 0x11U)))));
    bufp->fullCData(oldp+22658,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                       >> 0x15U))),3);
    bufp->fullCData(oldp+22659,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                         >> 0x11U))),4);
    bufp->fullBit(oldp+22660,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                            >> 0x15U)))));
    bufp->fullCData(oldp+22661,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                          >> 9U))),8);
    bufp->fullCData(oldp+22662,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                          >> 1U))),8);
    bufp->fullBit(oldp+22663,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                               >> 9U)))));
    bufp->fullCData(oldp+22664,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                         >> 0xdU))),4);
    bufp->fullCData(oldp+22665,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                         >> 9U))),4);
    bufp->fullBit(oldp+22666,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                              >> 0xdU)))));
    bufp->fullCData(oldp+22667,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                         >> 5U))),4);
    bufp->fullCData(oldp+22668,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                         >> 1U))),4);
    bufp->fullBit(oldp+22669,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                              >> 5U)))));
    bufp->fullIData(oldp+22670,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                              >> 1U))),23);
    bufp->fullCData(oldp+22671,((0x1fU & ((IData)(0x16U) 
                                          - (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                                           >> 0x11U)))) 
                                              << 4U) 
                                             | ((0U 
                                                 != 
                                                 (0x7fU 
                                                  & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                                     >> 0x11U)))
                                                 ? 
                                                (((IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                                               >> 0x15U)))) 
                                                  << 2U) 
                                                 | ((0U 
                                                     != 
                                                     (7U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                                         >> 0x15U)))
                                                     ? 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2)
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                                         >> 0x16U)))
                                                     : 
                                                    ((0x100000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2)
                                                      ? 3U
                                                      : 
                                                     ((0x80000U 
                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2)
                                                       ? 2U
                                                       : 
                                                      (1U 
                                                       & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                                          >> 0x12U))))))
                                                 : (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__off0__DOT___io_off_T_35)))))),5);
    bufp->fullBit(oldp+22672,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x 
                               >> 0x1fU)));
    bufp->fullCData(oldp+22673,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+22674,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x)),23);
    bufp->fullBit(oldp+22675,((0x3f800000U > (0x7fffffffU 
                                              & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x))));
    bufp->fullCData(oldp+22676,(((0x3f800000U > (0x7fffffffU 
                                                 & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x))
                                  ? 0x7fU : (0xffU 
                                             & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x 
                                                >> 0x17U)))),8);
    bufp->fullCData(oldp+22677,((0xffU & (((0x3f800000U 
                                            > (0x7fffffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x))
                                            ? 0x7fU
                                            : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x 
                                               >> 0x17U)) 
                                          - ((0x3f800000U 
                                              > (0x7fffffffU 
                                                 & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x))
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x 
                                                 >> 0x17U)
                                              : 0x7fU)))),8);
    bufp->fullBit(oldp+22678,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zs_a));
    bufp->fullCData(oldp+22679,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__ze_a),8);
    bufp->fullIData(oldp+22680,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__xf1_a),24);
    bufp->fullIData(oldp+22681,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__yf1_a),24);
    bufp->fullCData(oldp+22682,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__xe_ye_a),8);
    bufp->fullBit(oldp+22683,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__xs_ys_a));
    bufp->fullCData(oldp+22684,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__xe_ye_a))),5);
    bufp->fullBit(oldp+22685,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__xe_ye_a) 
                                            >> 5U)))));
    bufp->fullIData(oldp+22686,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__yf2_a0),24);
    bufp->fullIData(oldp+22687,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__yf2_a1),24);
    bufp->fullIData(oldp+22688,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__yf2_a2),24);
    bufp->fullIData(oldp+22689,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__yf2_a3),24);
    bufp->fullIData(oldp+22690,((0xffffffU & ((2U & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__xe_ye_a))
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__yf2_a3 
                                                  >> 2U)
                                               : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__yf2_a3))),24);
    bufp->fullBit(oldp+22691,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__valid_1));
    bufp->fullBit(oldp+22692,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__xs_ys_1));
    bufp->fullIData(oldp+22693,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__xf1_1),24);
    bufp->fullIData(oldp+22694,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__yf2_1),24);
    bufp->fullCData(oldp+22695,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__ze_1),8);
    bufp->fullBit(oldp+22696,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zs_1));
    bufp->fullBit(oldp+22697,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__valid_2));
    bufp->fullCData(oldp+22698,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__ze_2),8);
    bufp->fullBit(oldp+22699,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zs_2));
    bufp->fullIData(oldp+22700,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2),25);
    bufp->fullBit(oldp+22701,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__valid_3));
    bufp->fullCData(oldp+22702,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__ze_3),8);
    bufp->fullBit(oldp+22703,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zs_3));
    bufp->fullIData(oldp+22704,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_3),25);
    bufp->fullCData(oldp+22705,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__offset_3),5);
    bufp->fullBit(oldp+22706,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__underflow_3));
    bufp->fullBit(oldp+22707,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_3 
                                     >> 0x18U))));
    bufp->fullCData(oldp+22708,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__underflow_3)
                                  ? 0U : (0xffU & (
                                                   (0x1000000U 
                                                    & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_3)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__ze_3))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__ze_3) 
                                                    - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__offset_3)))))),8);
    bufp->fullIData(oldp+22709,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__underflow_3)
                                  ? 0U : (0x7fffffU 
                                          & ((0x1000000U 
                                              & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_3)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_3 
                                                 >> 1U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_3 
                                                 << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__offset_3)))))),23);
    bufp->fullBit(oldp+22710,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__valid_4));
    bufp->fullCData(oldp+22711,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                          >> 0x11U))),7);
    bufp->fullSData(oldp+22712,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                            >> 1U))),16);
    bufp->fullBit(oldp+22713,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                               >> 0x11U)))));
    bufp->fullCData(oldp+22714,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                       >> 0x15U))),3);
    bufp->fullCData(oldp+22715,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                         >> 0x11U))),4);
    bufp->fullBit(oldp+22716,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                            >> 0x15U)))));
    bufp->fullCData(oldp+22717,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                          >> 9U))),8);
    bufp->fullCData(oldp+22718,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                          >> 1U))),8);
    bufp->fullBit(oldp+22719,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                               >> 9U)))));
    bufp->fullCData(oldp+22720,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                         >> 0xdU))),4);
    bufp->fullCData(oldp+22721,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                         >> 9U))),4);
    bufp->fullBit(oldp+22722,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                              >> 0xdU)))));
    bufp->fullCData(oldp+22723,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                         >> 5U))),4);
    bufp->fullCData(oldp+22724,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                         >> 1U))),4);
    bufp->fullBit(oldp+22725,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                              >> 5U)))));
    bufp->fullIData(oldp+22726,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                              >> 1U))),23);
    bufp->fullCData(oldp+22727,((0x1fU & ((IData)(0x16U) 
                                          - (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                                           >> 0x11U)))) 
                                              << 4U) 
                                             | ((0U 
                                                 != 
                                                 (0x7fU 
                                                  & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                                     >> 0x11U)))
                                                 ? 
                                                (((IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                                               >> 0x15U)))) 
                                                  << 2U) 
                                                 | ((0U 
                                                     != 
                                                     (7U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                                         >> 0x15U)))
                                                     ? 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2)
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                                         >> 0x16U)))
                                                     : 
                                                    ((0x100000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2)
                                                      ? 3U
                                                      : 
                                                     ((0x80000U 
                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2)
                                                       ? 2U
                                                       : 
                                                      (1U 
                                                       & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                                          >> 0x12U))))))
                                                 : (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__off0__DOT___io_off_T_35)))))),5);
    bufp->fullBit(oldp+22728,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_and_c_r_1 
                               >> 0x1fU)));
    bufp->fullCData(oldp+22729,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_and_c_r_1 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+22730,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_and_c_r_1)),23);
    bufp->fullBit(oldp+22731,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_muler__DOT__io_z_r 
                               >> 0x1fU)));
    bufp->fullCData(oldp+22732,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_muler__DOT__io_z_r 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+22733,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_muler__DOT__io_z_r)),23);
    bufp->fullBit(oldp+22734,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__y_gt_x_0));
    bufp->fullCData(oldp+22735,((0xffU & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__y_gt_x_0)
                                           ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_muler__DOT__io_z_r 
                                              >> 0x17U)
                                           : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_and_c_r_1 
                                              >> 0x17U)))),8);
    bufp->fullCData(oldp+22736,((0xffU & (((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__y_gt_x_0)
                                            ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_muler__DOT__io_z_r 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_and_c_r_1 
                                               >> 0x17U)) 
                                          - ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__y_gt_x_0)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_and_c_r_1 
                                                 >> 0x17U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_muler__DOT__io_z_r 
                                                 >> 0x17U))))),8);
    bufp->fullBit(oldp+22737,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zs_a));
    bufp->fullCData(oldp+22738,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__ze_a),8);
    bufp->fullIData(oldp+22739,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__xf1_a),24);
    bufp->fullIData(oldp+22740,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__yf1_a),24);
    bufp->fullCData(oldp+22741,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__xe_ye_a),8);
    bufp->fullBit(oldp+22742,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__xs_ys_a));
    bufp->fullCData(oldp+22743,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__xe_ye_a))),5);
    bufp->fullBit(oldp+22744,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__xe_ye_a) 
                                            >> 5U)))));
    bufp->fullIData(oldp+22745,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__yf2_a0),24);
    bufp->fullIData(oldp+22746,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__yf2_a1),24);
    bufp->fullIData(oldp+22747,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__yf2_a2),24);
    bufp->fullIData(oldp+22748,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__yf2_a3),24);
    bufp->fullIData(oldp+22749,((0xffffffU & ((2U & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__xe_ye_a))
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__yf2_a3 
                                                  >> 2U)
                                               : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__yf2_a3))),24);
    bufp->fullBit(oldp+22750,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__valid_1));
    bufp->fullBit(oldp+22751,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__xs_ys_1));
    bufp->fullIData(oldp+22752,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__xf1_1),24);
    bufp->fullIData(oldp+22753,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__yf2_1),24);
    bufp->fullCData(oldp+22754,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__ze_1),8);
    bufp->fullBit(oldp+22755,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zs_1));
    bufp->fullBit(oldp+22756,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__valid_2));
    bufp->fullCData(oldp+22757,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__ze_2),8);
    bufp->fullBit(oldp+22758,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zs_2));
    bufp->fullIData(oldp+22759,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2),25);
    bufp->fullBit(oldp+22760,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__valid_3));
    bufp->fullCData(oldp+22761,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__ze_3),8);
    bufp->fullBit(oldp+22762,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zs_3));
    bufp->fullIData(oldp+22763,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_3),25);
    bufp->fullCData(oldp+22764,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__offset_3),5);
    bufp->fullBit(oldp+22765,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__underflow_3));
    bufp->fullBit(oldp+22766,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_3 
                                     >> 0x18U))));
    bufp->fullCData(oldp+22767,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__underflow_3)
                                  ? 0U : (0xffU & (
                                                   (0x1000000U 
                                                    & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_3)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__ze_3))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__ze_3) 
                                                    - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__offset_3)))))),8);
    bufp->fullIData(oldp+22768,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__underflow_3)
                                  ? 0U : (0x7fffffU 
                                          & ((0x1000000U 
                                              & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_3)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_3 
                                                 >> 1U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_3 
                                                 << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__offset_3)))))),23);
    bufp->fullBit(oldp+22769,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__valid_4));
    bufp->fullCData(oldp+22770,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                          >> 0x11U))),7);
    bufp->fullSData(oldp+22771,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                            >> 1U))),16);
    bufp->fullBit(oldp+22772,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                               >> 0x11U)))));
    bufp->fullCData(oldp+22773,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                       >> 0x15U))),3);
    bufp->fullCData(oldp+22774,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                         >> 0x11U))),4);
    bufp->fullBit(oldp+22775,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                            >> 0x15U)))));
    bufp->fullCData(oldp+22776,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                          >> 9U))),8);
    bufp->fullCData(oldp+22777,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                          >> 1U))),8);
    bufp->fullBit(oldp+22778,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                               >> 9U)))));
    bufp->fullCData(oldp+22779,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                         >> 0xdU))),4);
    bufp->fullCData(oldp+22780,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                         >> 9U))),4);
    bufp->fullBit(oldp+22781,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                              >> 0xdU)))));
    bufp->fullCData(oldp+22782,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                         >> 5U))),4);
    bufp->fullCData(oldp+22783,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                         >> 1U))),4);
    bufp->fullBit(oldp+22784,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                              >> 5U)))));
    bufp->fullIData(oldp+22785,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                              >> 1U))),23);
    bufp->fullCData(oldp+22786,((0x1fU & ((IData)(0x16U) 
                                          - (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                                           >> 0x11U)))) 
                                              << 4U) 
                                             | ((0U 
                                                 != 
                                                 (0x7fU 
                                                  & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                                     >> 0x11U)))
                                                 ? 
                                                (((IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                                               >> 0x15U)))) 
                                                  << 2U) 
                                                 | ((0U 
                                                     != 
                                                     (7U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                                         >> 0x15U)))
                                                     ? 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2)
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                                         >> 0x16U)))
                                                     : 
                                                    ((0x100000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2)
                                                      ? 3U
                                                      : 
                                                     ((0x80000U 
                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2)
                                                       ? 2U
                                                       : 
                                                      (1U 
                                                       & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                                          >> 0x12U))))))
                                                 : (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__off0__DOT___io_off_T_35)))))),5);
    bufp->fullBit(oldp+22787,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__axx_bx_c_r_3 
                               >> 0x1fU)));
    bufp->fullCData(oldp+22788,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__axx_bx_c_r_3 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+22789,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__axx_bx_c_r_3)),23);
    bufp->fullBit(oldp+22790,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__io_z_r 
                               >> 0x1fU)));
    bufp->fullCData(oldp+22791,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__io_z_r 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+22792,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__io_z_r)),23);
    bufp->fullBit(oldp+22793,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__y_gt_x_0));
    bufp->fullCData(oldp+22794,((0xffU & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__y_gt_x_0)
                                           ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__io_z_r 
                                              >> 0x17U)
                                           : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__axx_bx_c_r_3 
                                              >> 0x17U)))),8);
    bufp->fullCData(oldp+22795,((0xffU & (((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__y_gt_x_0)
                                            ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__io_z_r 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__axx_bx_c_r_3 
                                               >> 0x17U)) 
                                          - ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__y_gt_x_0)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__axx_bx_c_r_3 
                                                 >> 0x17U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__io_z_r 
                                                 >> 0x17U))))),8);
    bufp->fullBit(oldp+22796,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zs_a));
    bufp->fullCData(oldp+22797,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__ze_a),8);
    bufp->fullIData(oldp+22798,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__xf1_a),24);
    bufp->fullIData(oldp+22799,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__yf1_a),24);
    bufp->fullCData(oldp+22800,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__xe_ye_a),8);
    bufp->fullBit(oldp+22801,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__xs_ys_a));
    bufp->fullCData(oldp+22802,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__xe_ye_a))),5);
    bufp->fullBit(oldp+22803,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__xe_ye_a) 
                                            >> 5U)))));
    bufp->fullIData(oldp+22804,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__yf2_a0),24);
    bufp->fullIData(oldp+22805,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__yf2_a1),24);
    bufp->fullIData(oldp+22806,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__yf2_a2),24);
    bufp->fullIData(oldp+22807,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__yf2_a3),24);
    bufp->fullIData(oldp+22808,((0xffffffU & ((2U & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__xe_ye_a))
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__yf2_a3 
                                                  >> 2U)
                                               : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__yf2_a3))),24);
    bufp->fullBit(oldp+22809,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__valid_1));
    bufp->fullBit(oldp+22810,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__xs_ys_1));
    bufp->fullIData(oldp+22811,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__xf1_1),24);
    bufp->fullIData(oldp+22812,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__yf2_1),24);
    bufp->fullCData(oldp+22813,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__ze_1),8);
    bufp->fullBit(oldp+22814,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zs_1));
    bufp->fullBit(oldp+22815,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__valid_2));
    bufp->fullCData(oldp+22816,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__ze_2),8);
    bufp->fullBit(oldp+22817,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zs_2));
    bufp->fullIData(oldp+22818,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2),25);
    bufp->fullBit(oldp+22819,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__valid_3));
    bufp->fullCData(oldp+22820,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__ze_3),8);
    bufp->fullBit(oldp+22821,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zs_3));
    bufp->fullIData(oldp+22822,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_3),25);
    bufp->fullCData(oldp+22823,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__offset_3),5);
    bufp->fullBit(oldp+22824,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__underflow_3));
    bufp->fullBit(oldp+22825,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_3 
                                     >> 0x18U))));
    bufp->fullCData(oldp+22826,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__underflow_3)
                                  ? 0U : (0xffU & (
                                                   (0x1000000U 
                                                    & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_3)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__ze_3))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__ze_3) 
                                                    - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__offset_3)))))),8);
    bufp->fullIData(oldp+22827,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__underflow_3)
                                  ? 0U : (0x7fffffU 
                                          & ((0x1000000U 
                                              & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_3)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_3 
                                                 >> 1U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_3 
                                                 << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__offset_3)))))),23);
    bufp->fullBit(oldp+22828,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__valid_4));
    bufp->fullCData(oldp+22829,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                          >> 0x11U))),7);
    bufp->fullSData(oldp+22830,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                            >> 1U))),16);
    bufp->fullBit(oldp+22831,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                               >> 0x11U)))));
    bufp->fullCData(oldp+22832,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                       >> 0x15U))),3);
    bufp->fullCData(oldp+22833,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                         >> 0x11U))),4);
    bufp->fullBit(oldp+22834,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                            >> 0x15U)))));
    bufp->fullCData(oldp+22835,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                          >> 9U))),8);
    bufp->fullCData(oldp+22836,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                          >> 1U))),8);
    bufp->fullBit(oldp+22837,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                               >> 9U)))));
    bufp->fullCData(oldp+22838,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                         >> 0xdU))),4);
    bufp->fullCData(oldp+22839,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                         >> 9U))),4);
    bufp->fullBit(oldp+22840,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                              >> 0xdU)))));
    bufp->fullCData(oldp+22841,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                         >> 5U))),4);
    bufp->fullCData(oldp+22842,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                         >> 1U))),4);
    bufp->fullBit(oldp+22843,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                              >> 5U)))));
    bufp->fullIData(oldp+22844,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                              >> 1U))),23);
    bufp->fullCData(oldp+22845,((0x1fU & ((IData)(0x16U) 
                                          - (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                                           >> 0x11U)))) 
                                              << 4U) 
                                             | ((0U 
                                                 != 
                                                 (0x7fU 
                                                  & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                                     >> 0x11U)))
                                                 ? 
                                                (((IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                                               >> 0x15U)))) 
                                                  << 2U) 
                                                 | ((0U 
                                                     != 
                                                     (7U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                                         >> 0x15U)))
                                                     ? 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2)
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                                         >> 0x16U)))
                                                     : 
                                                    ((0x100000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2)
                                                      ? 3U
                                                      : 
                                                     ((0x80000U 
                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2)
                                                       ? 2U
                                                       : 
                                                      (1U 
                                                       & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                                          >> 0x12U))))))
                                                 : (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__off0__DOT___io_off_T_35)))))),5);
    bufp->fullBit(oldp+22846,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x 
                               >> 0x1fU)));
    bufp->fullCData(oldp+22847,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+22848,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x)),23);
    bufp->fullBit(oldp+22849,((0x3f800000U > (0x7fffffffU 
                                              & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x))));
    bufp->fullCData(oldp+22850,(((0x3f800000U > (0x7fffffffU 
                                                 & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x))
                                  ? 0x7fU : (0xffU 
                                             & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x 
                                                >> 0x17U)))),8);
    bufp->fullCData(oldp+22851,((0xffU & (((0x3f800000U 
                                            > (0x7fffffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x))
                                            ? 0x7fU
                                            : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x 
                                               >> 0x17U)) 
                                          - ((0x3f800000U 
                                              > (0x7fffffffU 
                                                 & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x))
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x 
                                                 >> 0x17U)
                                              : 0x7fU)))),8);
    bufp->fullBit(oldp+22852,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zs_a));
    bufp->fullCData(oldp+22853,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__ze_a),8);
    bufp->fullIData(oldp+22854,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__xf1_a),24);
    bufp->fullIData(oldp+22855,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__yf1_a),24);
    bufp->fullCData(oldp+22856,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__xe_ye_a),8);
    bufp->fullBit(oldp+22857,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__xs_ys_a));
    bufp->fullCData(oldp+22858,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__xe_ye_a))),5);
    bufp->fullBit(oldp+22859,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__xe_ye_a) 
                                            >> 5U)))));
    bufp->fullIData(oldp+22860,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__yf2_a0),24);
    bufp->fullIData(oldp+22861,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__yf2_a1),24);
    bufp->fullIData(oldp+22862,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__yf2_a2),24);
    bufp->fullIData(oldp+22863,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__yf2_a3),24);
    bufp->fullIData(oldp+22864,((0xffffffU & ((2U & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__xe_ye_a))
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__yf2_a3 
                                                  >> 2U)
                                               : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__yf2_a3))),24);
    bufp->fullBit(oldp+22865,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__valid_1));
    bufp->fullBit(oldp+22866,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__xs_ys_1));
    bufp->fullIData(oldp+22867,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__xf1_1),24);
    bufp->fullIData(oldp+22868,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__yf2_1),24);
    bufp->fullCData(oldp+22869,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__ze_1),8);
    bufp->fullBit(oldp+22870,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zs_1));
    bufp->fullBit(oldp+22871,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__valid_2));
    bufp->fullCData(oldp+22872,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__ze_2),8);
    bufp->fullBit(oldp+22873,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zs_2));
    bufp->fullIData(oldp+22874,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2),25);
    bufp->fullBit(oldp+22875,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__valid_3));
    bufp->fullCData(oldp+22876,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__ze_3),8);
    bufp->fullBit(oldp+22877,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zs_3));
    bufp->fullIData(oldp+22878,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_3),25);
    bufp->fullCData(oldp+22879,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__offset_3),5);
    bufp->fullBit(oldp+22880,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__underflow_3));
    bufp->fullBit(oldp+22881,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_3 
                                     >> 0x18U))));
    bufp->fullCData(oldp+22882,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__underflow_3)
                                  ? 0U : (0xffU & (
                                                   (0x1000000U 
                                                    & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_3)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__ze_3))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__ze_3) 
                                                    - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__offset_3)))))),8);
    bufp->fullIData(oldp+22883,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__underflow_3)
                                  ? 0U : (0x7fffffU 
                                          & ((0x1000000U 
                                              & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_3)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_3 
                                                 >> 1U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_3 
                                                 << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__offset_3)))))),23);
    bufp->fullBit(oldp+22884,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__valid_4));
    bufp->fullCData(oldp+22885,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                          >> 0x11U))),7);
    bufp->fullSData(oldp+22886,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                            >> 1U))),16);
    bufp->fullBit(oldp+22887,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                               >> 0x11U)))));
    bufp->fullCData(oldp+22888,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                       >> 0x15U))),3);
    bufp->fullCData(oldp+22889,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                         >> 0x11U))),4);
    bufp->fullBit(oldp+22890,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                            >> 0x15U)))));
    bufp->fullCData(oldp+22891,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                          >> 9U))),8);
    bufp->fullCData(oldp+22892,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                          >> 1U))),8);
    bufp->fullBit(oldp+22893,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                               >> 9U)))));
    bufp->fullCData(oldp+22894,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                         >> 0xdU))),4);
    bufp->fullCData(oldp+22895,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                         >> 9U))),4);
    bufp->fullBit(oldp+22896,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                              >> 0xdU)))));
    bufp->fullCData(oldp+22897,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                         >> 5U))),4);
    bufp->fullCData(oldp+22898,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                         >> 1U))),4);
    bufp->fullBit(oldp+22899,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                              >> 5U)))));
    bufp->fullIData(oldp+22900,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                              >> 1U))),23);
    bufp->fullCData(oldp+22901,((0x1fU & ((IData)(0x16U) 
                                          - (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                                           >> 0x11U)))) 
                                              << 4U) 
                                             | ((0U 
                                                 != 
                                                 (0x7fU 
                                                  & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                                     >> 0x11U)))
                                                 ? 
                                                (((IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                                               >> 0x15U)))) 
                                                  << 2U) 
                                                 | ((0U 
                                                     != 
                                                     (7U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                                         >> 0x15U)))
                                                     ? 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2)
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                                         >> 0x16U)))
                                                     : 
                                                    ((0x100000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2)
                                                      ? 3U
                                                      : 
                                                     ((0x80000U 
                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2)
                                                       ? 2U
                                                       : 
                                                      (1U 
                                                       & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                                          >> 0x12U))))))
                                                 : (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__off0__DOT___io_off_T_35)))))),5);
    bufp->fullBit(oldp+22902,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_and_c_r_1 
                               >> 0x1fU)));
    bufp->fullCData(oldp+22903,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_and_c_r_1 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+22904,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_and_c_r_1)),23);
    bufp->fullBit(oldp+22905,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_muler__DOT__io_z_r 
                               >> 0x1fU)));
    bufp->fullCData(oldp+22906,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_muler__DOT__io_z_r 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+22907,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_muler__DOT__io_z_r)),23);
    bufp->fullBit(oldp+22908,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__y_gt_x_0));
    bufp->fullCData(oldp+22909,((0xffU & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__y_gt_x_0)
                                           ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_muler__DOT__io_z_r 
                                              >> 0x17U)
                                           : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_and_c_r_1 
                                              >> 0x17U)))),8);
    bufp->fullCData(oldp+22910,((0xffU & (((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__y_gt_x_0)
                                            ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_muler__DOT__io_z_r 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_and_c_r_1 
                                               >> 0x17U)) 
                                          - ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__y_gt_x_0)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_and_c_r_1 
                                                 >> 0x17U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_muler__DOT__io_z_r 
                                                 >> 0x17U))))),8);
    bufp->fullBit(oldp+22911,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zs_a));
    bufp->fullCData(oldp+22912,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__ze_a),8);
    bufp->fullIData(oldp+22913,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__xf1_a),24);
    bufp->fullIData(oldp+22914,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__yf1_a),24);
    bufp->fullCData(oldp+22915,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__xe_ye_a),8);
    bufp->fullBit(oldp+22916,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__xs_ys_a));
    bufp->fullCData(oldp+22917,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__xe_ye_a))),5);
    bufp->fullBit(oldp+22918,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__xe_ye_a) 
                                            >> 5U)))));
    bufp->fullIData(oldp+22919,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__yf2_a0),24);
    bufp->fullIData(oldp+22920,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__yf2_a1),24);
    bufp->fullIData(oldp+22921,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__yf2_a2),24);
    bufp->fullIData(oldp+22922,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__yf2_a3),24);
    bufp->fullIData(oldp+22923,((0xffffffU & ((2U & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__xe_ye_a))
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__yf2_a3 
                                                  >> 2U)
                                               : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__yf2_a3))),24);
    bufp->fullBit(oldp+22924,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__valid_1));
    bufp->fullBit(oldp+22925,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__xs_ys_1));
    bufp->fullIData(oldp+22926,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__xf1_1),24);
    bufp->fullIData(oldp+22927,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__yf2_1),24);
    bufp->fullCData(oldp+22928,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__ze_1),8);
    bufp->fullBit(oldp+22929,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zs_1));
    bufp->fullBit(oldp+22930,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__valid_2));
    bufp->fullCData(oldp+22931,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__ze_2),8);
    bufp->fullBit(oldp+22932,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zs_2));
    bufp->fullIData(oldp+22933,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2),25);
    bufp->fullBit(oldp+22934,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__valid_3));
    bufp->fullCData(oldp+22935,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__ze_3),8);
    bufp->fullBit(oldp+22936,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zs_3));
    bufp->fullIData(oldp+22937,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_3),25);
    bufp->fullCData(oldp+22938,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__offset_3),5);
    bufp->fullBit(oldp+22939,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__underflow_3));
    bufp->fullBit(oldp+22940,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_3 
                                     >> 0x18U))));
    bufp->fullCData(oldp+22941,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__underflow_3)
                                  ? 0U : (0xffU & (
                                                   (0x1000000U 
                                                    & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_3)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__ze_3))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__ze_3) 
                                                    - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__offset_3)))))),8);
    bufp->fullIData(oldp+22942,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__underflow_3)
                                  ? 0U : (0x7fffffU 
                                          & ((0x1000000U 
                                              & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_3)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_3 
                                                 >> 1U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_3 
                                                 << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__offset_3)))))),23);
    bufp->fullBit(oldp+22943,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__valid_4));
    bufp->fullCData(oldp+22944,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                          >> 0x11U))),7);
    bufp->fullSData(oldp+22945,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                            >> 1U))),16);
    bufp->fullBit(oldp+22946,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                               >> 0x11U)))));
    bufp->fullCData(oldp+22947,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                       >> 0x15U))),3);
    bufp->fullCData(oldp+22948,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                         >> 0x11U))),4);
    bufp->fullBit(oldp+22949,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                            >> 0x15U)))));
    bufp->fullCData(oldp+22950,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                          >> 9U))),8);
    bufp->fullCData(oldp+22951,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                          >> 1U))),8);
    bufp->fullBit(oldp+22952,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                               >> 9U)))));
    bufp->fullCData(oldp+22953,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                         >> 0xdU))),4);
    bufp->fullCData(oldp+22954,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                         >> 9U))),4);
    bufp->fullBit(oldp+22955,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                              >> 0xdU)))));
    bufp->fullCData(oldp+22956,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                         >> 5U))),4);
    bufp->fullCData(oldp+22957,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                         >> 1U))),4);
    bufp->fullBit(oldp+22958,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                              >> 5U)))));
    bufp->fullIData(oldp+22959,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                              >> 1U))),23);
    bufp->fullCData(oldp+22960,((0x1fU & ((IData)(0x16U) 
                                          - (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                                           >> 0x11U)))) 
                                              << 4U) 
                                             | ((0U 
                                                 != 
                                                 (0x7fU 
                                                  & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                                     >> 0x11U)))
                                                 ? 
                                                (((IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                                               >> 0x15U)))) 
                                                  << 2U) 
                                                 | ((0U 
                                                     != 
                                                     (7U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                                         >> 0x15U)))
                                                     ? 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2)
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                                         >> 0x16U)))
                                                     : 
                                                    ((0x100000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2)
                                                      ? 3U
                                                      : 
                                                     ((0x80000U 
                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2)
                                                       ? 2U
                                                       : 
                                                      (1U 
                                                       & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                                          >> 0x12U))))))
                                                 : (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__off0__DOT___io_off_T_35)))))),5);
    bufp->fullBit(oldp+22961,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__axx_bx_c_r_3 
                               >> 0x1fU)));
    bufp->fullCData(oldp+22962,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__axx_bx_c_r_3 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+22963,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__axx_bx_c_r_3)),23);
    bufp->fullBit(oldp+22964,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__io_z_r 
                               >> 0x1fU)));
    bufp->fullCData(oldp+22965,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__io_z_r 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+22966,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__io_z_r)),23);
    bufp->fullBit(oldp+22967,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__y_gt_x_0));
    bufp->fullCData(oldp+22968,((0xffU & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__y_gt_x_0)
                                           ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__io_z_r 
                                              >> 0x17U)
                                           : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__axx_bx_c_r_3 
                                              >> 0x17U)))),8);
    bufp->fullCData(oldp+22969,((0xffU & (((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__y_gt_x_0)
                                            ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__io_z_r 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__axx_bx_c_r_3 
                                               >> 0x17U)) 
                                          - ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__y_gt_x_0)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__axx_bx_c_r_3 
                                                 >> 0x17U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__io_z_r 
                                                 >> 0x17U))))),8);
    bufp->fullBit(oldp+22970,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zs_a));
    bufp->fullCData(oldp+22971,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__ze_a),8);
    bufp->fullIData(oldp+22972,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__xf1_a),24);
    bufp->fullIData(oldp+22973,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__yf1_a),24);
    bufp->fullCData(oldp+22974,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__xe_ye_a),8);
    bufp->fullBit(oldp+22975,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__xs_ys_a));
    bufp->fullCData(oldp+22976,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__xe_ye_a))),5);
    bufp->fullBit(oldp+22977,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__xe_ye_a) 
                                            >> 5U)))));
    bufp->fullIData(oldp+22978,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__yf2_a0),24);
    bufp->fullIData(oldp+22979,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__yf2_a1),24);
    bufp->fullIData(oldp+22980,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__yf2_a2),24);
    bufp->fullIData(oldp+22981,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__yf2_a3),24);
    bufp->fullIData(oldp+22982,((0xffffffU & ((2U & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__xe_ye_a))
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__yf2_a3 
                                                  >> 2U)
                                               : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__yf2_a3))),24);
    bufp->fullBit(oldp+22983,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__valid_1));
    bufp->fullBit(oldp+22984,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__xs_ys_1));
    bufp->fullIData(oldp+22985,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__xf1_1),24);
    bufp->fullIData(oldp+22986,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__yf2_1),24);
    bufp->fullCData(oldp+22987,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__ze_1),8);
    bufp->fullBit(oldp+22988,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zs_1));
    bufp->fullBit(oldp+22989,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__valid_2));
    bufp->fullCData(oldp+22990,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__ze_2),8);
    bufp->fullBit(oldp+22991,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zs_2));
    bufp->fullIData(oldp+22992,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2),25);
    bufp->fullBit(oldp+22993,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__valid_3));
    bufp->fullCData(oldp+22994,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__ze_3),8);
    bufp->fullBit(oldp+22995,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zs_3));
    bufp->fullIData(oldp+22996,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_3),25);
    bufp->fullCData(oldp+22997,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__offset_3),5);
    bufp->fullBit(oldp+22998,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__underflow_3));
    bufp->fullBit(oldp+22999,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_3 
                                     >> 0x18U))));
    bufp->fullCData(oldp+23000,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__underflow_3)
                                  ? 0U : (0xffU & (
                                                   (0x1000000U 
                                                    & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_3)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__ze_3))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__ze_3) 
                                                    - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__offset_3)))))),8);
    bufp->fullIData(oldp+23001,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__underflow_3)
                                  ? 0U : (0x7fffffU 
                                          & ((0x1000000U 
                                              & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_3)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_3 
                                                 >> 1U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_3 
                                                 << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__offset_3)))))),23);
    bufp->fullBit(oldp+23002,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__valid_4));
    bufp->fullCData(oldp+23003,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                          >> 0x11U))),7);
    bufp->fullSData(oldp+23004,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                            >> 1U))),16);
    bufp->fullBit(oldp+23005,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                               >> 0x11U)))));
    bufp->fullCData(oldp+23006,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                       >> 0x15U))),3);
    bufp->fullCData(oldp+23007,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                         >> 0x11U))),4);
    bufp->fullBit(oldp+23008,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                            >> 0x15U)))));
    bufp->fullCData(oldp+23009,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                          >> 9U))),8);
    bufp->fullCData(oldp+23010,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                          >> 1U))),8);
    bufp->fullBit(oldp+23011,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                               >> 9U)))));
    bufp->fullCData(oldp+23012,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                         >> 0xdU))),4);
    bufp->fullCData(oldp+23013,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                         >> 9U))),4);
    bufp->fullBit(oldp+23014,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                              >> 0xdU)))));
    bufp->fullCData(oldp+23015,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                         >> 5U))),4);
    bufp->fullCData(oldp+23016,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                         >> 1U))),4);
    bufp->fullBit(oldp+23017,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                              >> 5U)))));
    bufp->fullIData(oldp+23018,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                              >> 1U))),23);
    bufp->fullCData(oldp+23019,((0x1fU & ((IData)(0x16U) 
                                          - (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                                           >> 0x11U)))) 
                                              << 4U) 
                                             | ((0U 
                                                 != 
                                                 (0x7fU 
                                                  & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                                     >> 0x11U)))
                                                 ? 
                                                (((IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                                               >> 0x15U)))) 
                                                  << 2U) 
                                                 | ((0U 
                                                     != 
                                                     (7U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                                         >> 0x15U)))
                                                     ? 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2)
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                                         >> 0x16U)))
                                                     : 
                                                    ((0x100000U 
                                                      & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2)
                                                      ? 3U
                                                      : 
                                                     ((0x80000U 
                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2)
                                                       ? 2U
                                                       : 
                                                      (1U 
                                                       & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                                          >> 0x12U))))))
                                                 : (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__off0__DOT___io_off_T_35)))))),5);
    bufp->fullBit(oldp+23020,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x 
                               >> 0x1fU)));
    bufp->fullCData(oldp+23021,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+23022,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x)),23);
    bufp->fullBit(oldp+23023,((0x3f800000U > (0x7fffffffU 
                                              & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x))));
    bufp->fullCData(oldp+23024,(((0x3f800000U > (0x7fffffffU 
                                                 & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x))
                                  ? 0x7fU : (0xffU 
                                             & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x 
                                                >> 0x17U)))),8);
    bufp->fullCData(oldp+23025,((0xffU & (((0x3f800000U 
                                            > (0x7fffffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x))
                                            ? 0x7fU
                                            : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x 
                                               >> 0x17U)) 
                                          - ((0x3f800000U 
                                              > (0x7fffffffU 
                                                 & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x))
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x 
                                                 >> 0x17U)
                                              : 0x7fU)))),8);
    bufp->fullBit(oldp+23026,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zs_a));
    bufp->fullCData(oldp+23027,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__ze_a),8);
    bufp->fullIData(oldp+23028,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__xf1_a),24);
    bufp->fullIData(oldp+23029,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__yf1_a),24);
    bufp->fullCData(oldp+23030,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__xe_ye_a),8);
    bufp->fullBit(oldp+23031,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__xs_ys_a));
    bufp->fullCData(oldp+23032,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__xe_ye_a))),5);
    bufp->fullBit(oldp+23033,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__xe_ye_a) 
                                            >> 5U)))));
    bufp->fullIData(oldp+23034,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__yf2_a0),24);
    bufp->fullIData(oldp+23035,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__yf2_a1),24);
    bufp->fullIData(oldp+23036,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__yf2_a2),24);
    bufp->fullIData(oldp+23037,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__yf2_a3),24);
    bufp->fullIData(oldp+23038,((0xffffffU & ((2U & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__xe_ye_a))
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__yf2_a3 
                                                  >> 2U)
                                               : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__yf2_a3))),24);
    bufp->fullBit(oldp+23039,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__valid_1));
    bufp->fullBit(oldp+23040,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__xs_ys_1));
    bufp->fullIData(oldp+23041,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__xf1_1),24);
    bufp->fullIData(oldp+23042,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__yf2_1),24);
    bufp->fullCData(oldp+23043,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__ze_1),8);
    bufp->fullBit(oldp+23044,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zs_1));
    bufp->fullBit(oldp+23045,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__valid_2));
    bufp->fullCData(oldp+23046,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__ze_2),8);
    bufp->fullBit(oldp+23047,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zs_2));
    bufp->fullIData(oldp+23048,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2),25);
    bufp->fullBit(oldp+23049,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__valid_3));
    bufp->fullCData(oldp+23050,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__ze_3),8);
    bufp->fullBit(oldp+23051,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zs_3));
    bufp->fullIData(oldp+23052,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_3),25);
    bufp->fullCData(oldp+23053,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__offset_3),5);
    bufp->fullBit(oldp+23054,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__underflow_3));
    bufp->fullBit(oldp+23055,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_3 
                                     >> 0x18U))));
    bufp->fullCData(oldp+23056,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__underflow_3)
                                  ? 0U : (0xffU & (
                                                   (0x1000000U 
                                                    & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_3)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__ze_3))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__ze_3) 
                                                    - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__offset_3)))))),8);
    bufp->fullIData(oldp+23057,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__underflow_3)
                                  ? 0U : (0x7fffffU 
                                          & ((0x1000000U 
                                              & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_3)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_3 
                                                 >> 1U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_3 
                                                 << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__offset_3)))))),23);
    bufp->fullBit(oldp+23058,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__valid_4));
    bufp->fullCData(oldp+23059,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                          >> 0x11U))),7);
    bufp->fullSData(oldp+23060,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                            >> 1U))),16);
    bufp->fullBit(oldp+23061,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                               >> 0x11U)))));
    bufp->fullCData(oldp+23062,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                       >> 0x15U))),3);
    bufp->fullCData(oldp+23063,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                         >> 0x11U))),4);
    bufp->fullBit(oldp+23064,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                            >> 0x15U)))));
    bufp->fullCData(oldp+23065,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                          >> 9U))),8);
    bufp->fullCData(oldp+23066,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                          >> 1U))),8);
    bufp->fullBit(oldp+23067,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                               >> 9U)))));
    bufp->fullCData(oldp+23068,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                         >> 0xdU))),4);
    bufp->fullCData(oldp+23069,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                         >> 9U))),4);
    bufp->fullBit(oldp+23070,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                              >> 0xdU)))));
    bufp->fullCData(oldp+23071,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                         >> 5U))),4);
    bufp->fullCData(oldp+23072,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                         >> 1U))),4);
    bufp->fullBit(oldp+23073,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                              >> 5U)))));
    bufp->fullBit(oldp+23074,(vlSelf->clock));
    bufp->fullBit(oldp+23075,(vlSelf->reset));
    bufp->fullBit(oldp+23076,(vlSelf->resize_load));
    bufp->fullBit(oldp+23077,(vlSelf->yolo_finish));
    bufp->fullBit(oldp+23078,(vlSelf->conv_finish));
    bufp->fullIData(oldp+23079,(vlSelf->dma_raddr),32);
    bufp->fullBit(oldp+23080,(vlSelf->dma_rareq));
    bufp->fullSData(oldp+23081,(vlSelf->dma_rsize),16);
    bufp->fullBit(oldp+23082,(vlSelf->dma_rbusy));
    bufp->fullQData(oldp+23083,(vlSelf->dma_rdata),64);
    bufp->fullBit(oldp+23085,(vlSelf->dma_rvalid));
    bufp->fullBit(oldp+23086,(vlSelf->dma_rready));
    bufp->fullIData(oldp+23087,(vlSelf->dma_waddr),32);
    bufp->fullBit(oldp+23088,(vlSelf->dma_wareq));
    bufp->fullSData(oldp+23089,(vlSelf->dma_wsize),16);
    bufp->fullBit(oldp+23090,(vlSelf->dma_wbusy));
    bufp->fullQData(oldp+23091,(vlSelf->dma_wdata),64);
    bufp->fullBit(oldp+23093,(vlSelf->dma_wvalid));
    bufp->fullBit(oldp+23094,(vlSelf->dma_wready));
    bufp->fullIData(oldp+23095,((0xffffU & ((IData)(vlSelf->dma_wsize) 
                                            + (IData)(vlSelf->top__DOT__u_Accel_all__DOT___addr_start_T_1)))),17);
    bufp->fullSData(oldp+23096,((0xffffU & ((IData)(vlSelf->dma_wsize) 
                                            + (IData)(vlSelf->top__DOT__u_Accel_all__DOT___addr_start_T_1)))),16);
    bufp->fullBit(oldp+23097,(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bias_buf__DOT__rst));
    bufp->fullBit(oldp+23098,(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__clr_pool));
    bufp->fullBit(oldp+23099,(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__rst));
    bufp->fullBit(oldp+23100,(vlSelf->top__DOT__u_Accel_all__DOT__dma_ddr2accel__DOT__clr));
    bufp->fullBit(oldp+23101,(1U));
    bufp->fullIData(oldp+23102,(0x12U),32);
    bufp->fullIData(oldp+23103,(0x1000U),32);
    bufp->fullQData(oldp+23104,(0x626c6f636bULL),40);
    bufp->fullBit(oldp+23106,(0U));
    bufp->fullIData(oldp+23107,(0x80U),32);
    __Vtemp_hc1e28fa8__0[0U] = 0x75746564U;
    __Vtemp_hc1e28fa8__0[1U] = 0x74726962U;
    __Vtemp_hc1e28fa8__0[2U] = 0x646973U;
    bufp->fullWData(oldp+23108,(__Vtemp_hc1e28fa8__0),88);
    bufp->fullIData(oldp+23111,(0x10U),32);
    bufp->fullIData(oldp+23112,(0x800U),32);
    bufp->fullIData(oldp+23113,(0x40U),32);
    bufp->fullIData(oldp+23114,(0x64000U),20);
    bufp->fullIData(oldp+23115,(0x19000U),18);
    bufp->fullSData(oldp+23116,(0x6400U),16);
    bufp->fullSData(oldp+23117,(0x1900U),14);
    bufp->fullSData(oldp+23118,(0x640U),12);
    bufp->fullSData(oldp+23119,(0x190U),10);
    bufp->fullIData(oldp+23120,(0x48U),32);
    bufp->fullIData(oldp+23121,(0U),32);
    bufp->fullIData(oldp+23122,(0x3f800000U),32);
    bufp->fullBit(oldp+23123,(0U));
    bufp->fullCData(oldp+23124,(0x7fU),8);
    bufp->fullIData(oldp+23125,(0U),23);
}
