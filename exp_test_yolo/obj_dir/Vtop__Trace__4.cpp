// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_4(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_4\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 22206);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_and_c_r_1 
                              >> 0x1fU)));
        bufp->chgCData(oldp+1,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_and_c_r_1 
                                         >> 0x17U))),8);
        bufp->chgIData(oldp+2,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_and_c_r_1)),23);
        bufp->chgBit(oldp+3,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_muler__DOT__io_z_r 
                              >> 0x1fU)));
        bufp->chgCData(oldp+4,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_muler__DOT__io_z_r 
                                         >> 0x17U))),8);
        bufp->chgIData(oldp+5,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_muler__DOT__io_z_r)),23);
        bufp->chgBit(oldp+6,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__y_gt_x_0));
        bufp->chgCData(oldp+7,((0xffU & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__y_gt_x_0)
                                          ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_muler__DOT__io_z_r 
                                             >> 0x17U)
                                          : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_and_c_r_1 
                                             >> 0x17U)))),8);
        bufp->chgCData(oldp+8,((0xffU & (((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__y_gt_x_0)
                                           ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_muler__DOT__io_z_r 
                                              >> 0x17U)
                                           : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_and_c_r_1 
                                              >> 0x17U)) 
                                         - ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_and_c_r_1 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_muler__DOT__io_z_r 
                                                >> 0x17U))))),8);
        bufp->chgBit(oldp+9,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zs_a));
        bufp->chgCData(oldp+10,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__ze_a),8);
        bufp->chgIData(oldp+11,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__xf1_a),24);
        bufp->chgIData(oldp+12,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__yf1_a),24);
        bufp->chgCData(oldp+13,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__xe_ye_a),8);
        bufp->chgBit(oldp+14,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__xs_ys_a));
        bufp->chgCData(oldp+15,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__xe_ye_a))),5);
        bufp->chgBit(oldp+16,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__xe_ye_a) 
                                            >> 5U)))));
        bufp->chgIData(oldp+17,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__yf2_a0),24);
        bufp->chgIData(oldp+18,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__yf2_a1),24);
        bufp->chgIData(oldp+19,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__yf2_a2),24);
        bufp->chgIData(oldp+20,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__yf2_a3),24);
        bufp->chgIData(oldp+21,((0xffffffU & ((2U & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__xe_ye_a))
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__yf2_a3 
                                                  >> 2U)
                                               : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__yf2_a3))),24);
        bufp->chgBit(oldp+22,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__valid_1));
        bufp->chgBit(oldp+23,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__xs_ys_1));
        bufp->chgIData(oldp+24,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__xf1_1),24);
        bufp->chgIData(oldp+25,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__yf2_1),24);
        bufp->chgCData(oldp+26,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__ze_1),8);
        bufp->chgBit(oldp+27,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zs_1));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__valid_2));
        bufp->chgCData(oldp+29,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__ze_2),8);
        bufp->chgBit(oldp+30,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zs_2));
        bufp->chgIData(oldp+31,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2),25);
        bufp->chgBit(oldp+32,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__valid_3));
        bufp->chgCData(oldp+33,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__ze_3),8);
        bufp->chgBit(oldp+34,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zs_3));
        bufp->chgIData(oldp+35,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_3),25);
        bufp->chgCData(oldp+36,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__offset_3),5);
        bufp->chgBit(oldp+37,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__underflow_3));
        bufp->chgBit(oldp+38,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_3 
                                     >> 0x18U))));
        bufp->chgCData(oldp+39,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__underflow_3)
                                  ? 0U : (0xffU & (
                                                   (0x1000000U 
                                                    & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_3)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__ze_3))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__ze_3) 
                                                    - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__offset_3)))))),8);
        bufp->chgIData(oldp+40,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__underflow_3)
                                  ? 0U : (0x7fffffU 
                                          & ((0x1000000U 
                                              & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_3)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_3 
                                                 >> 1U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_3 
                                                 << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__offset_3)))))),23);
        bufp->chgBit(oldp+41,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__valid_4));
        bufp->chgCData(oldp+42,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                          >> 0x11U))),7);
        bufp->chgSData(oldp+43,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                            >> 1U))),16);
        bufp->chgBit(oldp+44,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                               >> 0x11U)))));
        bufp->chgCData(oldp+45,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                       >> 0x15U))),3);
        bufp->chgCData(oldp+46,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                         >> 0x11U))),4);
        bufp->chgBit(oldp+47,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                            >> 0x15U)))));
        bufp->chgCData(oldp+48,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                          >> 9U))),8);
        bufp->chgCData(oldp+49,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                          >> 1U))),8);
        bufp->chgBit(oldp+50,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                               >> 9U)))));
        bufp->chgCData(oldp+51,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                         >> 0xdU))),4);
        bufp->chgCData(oldp+52,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                         >> 9U))),4);
        bufp->chgBit(oldp+53,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                              >> 0xdU)))));
        bufp->chgCData(oldp+54,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                         >> 5U))),4);
        bufp->chgCData(oldp+55,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                         >> 1U))),4);
        bufp->chgBit(oldp+56,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__zf_2 
                                              >> 5U)))));
        bufp->chgIData(oldp+57,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                              >> 1U))),23);
        bufp->chgCData(oldp+58,((0x1fU & ((IData)(0x16U) 
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
        bufp->chgBit(oldp+59,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__axx_bx_c_r_3 
                               >> 0x1fU)));
        bufp->chgCData(oldp+60,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__axx_bx_c_r_3 
                                          >> 0x17U))),8);
        bufp->chgIData(oldp+61,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__axx_bx_c_r_3)),23);
        bufp->chgBit(oldp+62,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__io_z_r 
                               >> 0x1fU)));
        bufp->chgCData(oldp+63,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__io_z_r 
                                          >> 0x17U))),8);
        bufp->chgIData(oldp+64,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__io_z_r)),23);
        bufp->chgBit(oldp+65,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__y_gt_x_0));
        bufp->chgCData(oldp+66,((0xffU & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__y_gt_x_0)
                                           ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__io_z_r 
                                              >> 0x17U)
                                           : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__axx_bx_c_r_3 
                                              >> 0x17U)))),8);
        bufp->chgCData(oldp+67,((0xffU & (((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__y_gt_x_0)
                                            ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__io_z_r 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__axx_bx_c_r_3 
                                               >> 0x17U)) 
                                          - ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__y_gt_x_0)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__axx_bx_c_r_3 
                                                 >> 0x17U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__io_z_r 
                                                 >> 0x17U))))),8);
        bufp->chgBit(oldp+68,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zs_a));
        bufp->chgCData(oldp+69,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__ze_a),8);
        bufp->chgIData(oldp+70,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__xf1_a),24);
        bufp->chgIData(oldp+71,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__yf1_a),24);
        bufp->chgCData(oldp+72,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__xe_ye_a),8);
        bufp->chgBit(oldp+73,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__xs_ys_a));
        bufp->chgCData(oldp+74,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__xe_ye_a))),5);
        bufp->chgBit(oldp+75,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__xe_ye_a) 
                                            >> 5U)))));
        bufp->chgIData(oldp+76,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__yf2_a0),24);
        bufp->chgIData(oldp+77,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__yf2_a1),24);
        bufp->chgIData(oldp+78,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__yf2_a2),24);
        bufp->chgIData(oldp+79,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__yf2_a3),24);
        bufp->chgIData(oldp+80,((0xffffffU & ((2U & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__xe_ye_a))
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__yf2_a3 
                                                  >> 2U)
                                               : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__yf2_a3))),24);
        bufp->chgBit(oldp+81,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__valid_1));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__xs_ys_1));
        bufp->chgIData(oldp+83,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__xf1_1),24);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__yf2_1),24);
        bufp->chgCData(oldp+85,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__ze_1),8);
        bufp->chgBit(oldp+86,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zs_1));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__valid_2));
        bufp->chgCData(oldp+88,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__ze_2),8);
        bufp->chgBit(oldp+89,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zs_2));
        bufp->chgIData(oldp+90,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2),25);
        bufp->chgBit(oldp+91,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__valid_3));
        bufp->chgCData(oldp+92,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__ze_3),8);
        bufp->chgBit(oldp+93,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zs_3));
        bufp->chgIData(oldp+94,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_3),25);
        bufp->chgCData(oldp+95,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__offset_3),5);
        bufp->chgBit(oldp+96,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__underflow_3));
        bufp->chgBit(oldp+97,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_3 
                                     >> 0x18U))));
        bufp->chgCData(oldp+98,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__underflow_3)
                                  ? 0U : (0xffU & (
                                                   (0x1000000U 
                                                    & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_3)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__ze_3))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__ze_3) 
                                                    - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__offset_3)))))),8);
        bufp->chgIData(oldp+99,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__underflow_3)
                                  ? 0U : (0x7fffffU 
                                          & ((0x1000000U 
                                              & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_3)
                                              ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_3 
                                                 >> 1U)
                                              : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_3 
                                                 << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__offset_3)))))),23);
        bufp->chgBit(oldp+100,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__valid_4));
        bufp->chgCData(oldp+101,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                           >> 0x11U))),7);
        bufp->chgSData(oldp+102,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                             >> 1U))),16);
        bufp->chgBit(oldp+103,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                                >> 0x11U)))));
        bufp->chgCData(oldp+104,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                        >> 0x15U))),3);
        bufp->chgCData(oldp+105,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                          >> 0x11U))),4);
        bufp->chgBit(oldp+106,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                             >> 0x15U)))));
        bufp->chgCData(oldp+107,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                           >> 9U))),8);
        bufp->chgCData(oldp+108,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                           >> 1U))),8);
        bufp->chgBit(oldp+109,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                                >> 9U)))));
        bufp->chgCData(oldp+110,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                          >> 0xdU))),4);
        bufp->chgCData(oldp+111,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                          >> 9U))),4);
        bufp->chgBit(oldp+112,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                               >> 0xdU)))));
        bufp->chgCData(oldp+113,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                          >> 5U))),4);
        bufp->chgCData(oldp+114,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                          >> 1U))),4);
        bufp->chgBit(oldp+115,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder.__PVT__zf_2 
                                               >> 5U)))));
        bufp->chgIData(oldp+116,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                               >> 1U))),23);
        bufp->chgCData(oldp+117,((0x1fU & ((IData)(0x16U) 
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
        bufp->chgBit(oldp+118,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x 
                                >> 0x1fU)));
        bufp->chgCData(oldp+119,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+120,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x)),23);
        bufp->chgBit(oldp+121,((0x3f800000U > (0x7fffffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x))));
        bufp->chgCData(oldp+122,(((0x3f800000U > (0x7fffffffU 
                                                  & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x))
                                   ? 0x7fU : (0xffU 
                                              & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x 
                                                 >> 0x17U)))),8);
        bufp->chgCData(oldp+123,((0xffU & (((0x3f800000U 
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
        bufp->chgBit(oldp+124,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zs_a));
        bufp->chgCData(oldp+125,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__ze_a),8);
        bufp->chgIData(oldp+126,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__xf1_a),24);
        bufp->chgIData(oldp+127,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__yf1_a),24);
        bufp->chgCData(oldp+128,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__xe_ye_a),8);
        bufp->chgBit(oldp+129,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__xs_ys_a));
        bufp->chgCData(oldp+130,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__xe_ye_a))),5);
        bufp->chgBit(oldp+131,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__xe_ye_a) 
                                             >> 5U)))));
        bufp->chgIData(oldp+132,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__yf2_a0),24);
        bufp->chgIData(oldp+133,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__yf2_a1),24);
        bufp->chgIData(oldp+134,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__yf2_a2),24);
        bufp->chgIData(oldp+135,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__yf2_a3),24);
        bufp->chgIData(oldp+136,((0xffffffU & ((2U 
                                                & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__xe_ye_a))
                                                ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__yf2_a3 
                                                   >> 2U)
                                                : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__yf2_a3))),24);
        bufp->chgBit(oldp+137,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__valid_1));
        bufp->chgBit(oldp+138,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__xs_ys_1));
        bufp->chgIData(oldp+139,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__xf1_1),24);
        bufp->chgIData(oldp+140,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__yf2_1),24);
        bufp->chgCData(oldp+141,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__ze_1),8);
        bufp->chgBit(oldp+142,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zs_1));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__valid_2));
        bufp->chgCData(oldp+144,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__ze_2),8);
        bufp->chgBit(oldp+145,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zs_2));
        bufp->chgIData(oldp+146,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2),25);
        bufp->chgBit(oldp+147,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__valid_3));
        bufp->chgCData(oldp+148,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__ze_3),8);
        bufp->chgBit(oldp+149,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zs_3));
        bufp->chgIData(oldp+150,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_3),25);
        bufp->chgCData(oldp+151,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__offset_3),5);
        bufp->chgBit(oldp+152,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__underflow_3));
        bufp->chgBit(oldp+153,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_3 
                                      >> 0x18U))));
        bufp->chgCData(oldp+154,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__underflow_3)
                                   ? 0U : (0xffU & 
                                           ((0x1000000U 
                                             & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_3)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__ze_3))
                                             : ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__ze_3) 
                                                - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__offset_3)))))),8);
        bufp->chgIData(oldp+155,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__underflow_3)
                                   ? 0U : (0x7fffffU 
                                           & ((0x1000000U 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_3)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_3 
                                                  >> 1U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_3 
                                                  << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__offset_3)))))),23);
        bufp->chgBit(oldp+156,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__valid_4));
        bufp->chgCData(oldp+157,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                           >> 0x11U))),7);
        bufp->chgSData(oldp+158,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                             >> 1U))),16);
        bufp->chgBit(oldp+159,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                                >> 0x11U)))));
        bufp->chgCData(oldp+160,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                        >> 0x15U))),3);
        bufp->chgCData(oldp+161,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                          >> 0x11U))),4);
        bufp->chgBit(oldp+162,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                             >> 0x15U)))));
        bufp->chgCData(oldp+163,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                           >> 9U))),8);
        bufp->chgCData(oldp+164,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                           >> 1U))),8);
        bufp->chgBit(oldp+165,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                                >> 9U)))));
        bufp->chgCData(oldp+166,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                          >> 0xdU))),4);
        bufp->chgCData(oldp+167,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                          >> 9U))),4);
        bufp->chgBit(oldp+168,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                               >> 0xdU)))));
        bufp->chgCData(oldp+169,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                          >> 5U))),4);
        bufp->chgCData(oldp+170,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                          >> 1U))),4);
        bufp->chgBit(oldp+171,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder.__PVT__zf_2 
                                               >> 5U)))));
        bufp->chgIData(oldp+172,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                               >> 1U))),23);
        bufp->chgCData(oldp+173,((0x1fU & ((IData)(0x16U) 
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
        bufp->chgBit(oldp+174,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_and_c_r_1 
                                >> 0x1fU)));
        bufp->chgCData(oldp+175,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_and_c_r_1 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+176,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_and_c_r_1)),23);
        bufp->chgBit(oldp+177,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_muler__DOT__io_z_r 
                                >> 0x1fU)));
        bufp->chgCData(oldp+178,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_muler__DOT__io_z_r 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+179,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_muler__DOT__io_z_r)),23);
        bufp->chgBit(oldp+180,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__y_gt_x_0));
        bufp->chgCData(oldp+181,((0xffU & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__y_gt_x_0)
                                            ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_muler__DOT__io_z_r 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_and_c_r_1 
                                               >> 0x17U)))),8);
        bufp->chgCData(oldp+182,((0xffU & (((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_muler__DOT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_and_c_r_1 
                                                >> 0x17U)) 
                                           - ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_and_c_r_1 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_muler__DOT__io_z_r 
                                                  >> 0x17U))))),8);
        bufp->chgBit(oldp+183,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zs_a));
        bufp->chgCData(oldp+184,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__ze_a),8);
        bufp->chgIData(oldp+185,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__xf1_a),24);
        bufp->chgIData(oldp+186,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__yf1_a),24);
        bufp->chgCData(oldp+187,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__xe_ye_a),8);
        bufp->chgBit(oldp+188,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__xs_ys_a));
        bufp->chgCData(oldp+189,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__xe_ye_a))),5);
        bufp->chgBit(oldp+190,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__xe_ye_a) 
                                             >> 5U)))));
        bufp->chgIData(oldp+191,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__yf2_a0),24);
        bufp->chgIData(oldp+192,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__yf2_a1),24);
        bufp->chgIData(oldp+193,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__yf2_a2),24);
        bufp->chgIData(oldp+194,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__yf2_a3),24);
        bufp->chgIData(oldp+195,((0xffffffU & ((2U 
                                                & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__xe_ye_a))
                                                ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__yf2_a3 
                                                   >> 2U)
                                                : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__yf2_a3))),24);
        bufp->chgBit(oldp+196,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__valid_1));
        bufp->chgBit(oldp+197,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__xs_ys_1));
        bufp->chgIData(oldp+198,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__xf1_1),24);
        bufp->chgIData(oldp+199,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__yf2_1),24);
        bufp->chgCData(oldp+200,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__ze_1),8);
        bufp->chgBit(oldp+201,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zs_1));
        bufp->chgBit(oldp+202,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__valid_2));
        bufp->chgCData(oldp+203,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__ze_2),8);
        bufp->chgBit(oldp+204,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zs_2));
        bufp->chgIData(oldp+205,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2),25);
        bufp->chgBit(oldp+206,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__valid_3));
        bufp->chgCData(oldp+207,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__ze_3),8);
        bufp->chgBit(oldp+208,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zs_3));
        bufp->chgIData(oldp+209,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_3),25);
        bufp->chgCData(oldp+210,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__offset_3),5);
        bufp->chgBit(oldp+211,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__underflow_3));
        bufp->chgBit(oldp+212,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_3 
                                      >> 0x18U))));
        bufp->chgCData(oldp+213,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__underflow_3)
                                   ? 0U : (0xffU & 
                                           ((0x1000000U 
                                             & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_3)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__ze_3))
                                             : ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__ze_3) 
                                                - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__offset_3)))))),8);
        bufp->chgIData(oldp+214,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__underflow_3)
                                   ? 0U : (0x7fffffU 
                                           & ((0x1000000U 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_3)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_3 
                                                  >> 1U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_3 
                                                  << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__offset_3)))))),23);
        bufp->chgBit(oldp+215,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__valid_4));
        bufp->chgCData(oldp+216,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                           >> 0x11U))),7);
        bufp->chgSData(oldp+217,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                             >> 1U))),16);
        bufp->chgBit(oldp+218,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                                >> 0x11U)))));
        bufp->chgCData(oldp+219,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                        >> 0x15U))),3);
        bufp->chgCData(oldp+220,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                          >> 0x11U))),4);
        bufp->chgBit(oldp+221,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                             >> 0x15U)))));
        bufp->chgCData(oldp+222,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                           >> 9U))),8);
        bufp->chgCData(oldp+223,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                           >> 1U))),8);
        bufp->chgBit(oldp+224,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                                >> 9U)))));
        bufp->chgCData(oldp+225,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                          >> 0xdU))),4);
        bufp->chgCData(oldp+226,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                          >> 9U))),4);
        bufp->chgBit(oldp+227,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                               >> 0xdU)))));
        bufp->chgCData(oldp+228,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                          >> 5U))),4);
        bufp->chgCData(oldp+229,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                          >> 1U))),4);
        bufp->chgBit(oldp+230,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__zf_2 
                                               >> 5U)))));
        bufp->chgIData(oldp+231,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                               >> 1U))),23);
        bufp->chgCData(oldp+232,((0x1fU & ((IData)(0x16U) 
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
        bufp->chgBit(oldp+233,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__axx_bx_c_r_3 
                                >> 0x1fU)));
        bufp->chgCData(oldp+234,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__axx_bx_c_r_3 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+235,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__axx_bx_c_r_3)),23);
        bufp->chgBit(oldp+236,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__io_z_r 
                                >> 0x1fU)));
        bufp->chgCData(oldp+237,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__io_z_r 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+238,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__io_z_r)),23);
        bufp->chgBit(oldp+239,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__y_gt_x_0));
        bufp->chgCData(oldp+240,((0xffU & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__y_gt_x_0)
                                            ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__io_z_r 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__axx_bx_c_r_3 
                                               >> 0x17U)))),8);
        bufp->chgCData(oldp+241,((0xffU & (((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__axx_bx_c_r_3 
                                                >> 0x17U)) 
                                           - ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__axx_bx_c_r_3 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__io_z_r 
                                                  >> 0x17U))))),8);
        bufp->chgBit(oldp+242,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zs_a));
        bufp->chgCData(oldp+243,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__ze_a),8);
        bufp->chgIData(oldp+244,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__xf1_a),24);
        bufp->chgIData(oldp+245,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__yf1_a),24);
        bufp->chgCData(oldp+246,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__xe_ye_a),8);
        bufp->chgBit(oldp+247,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__xs_ys_a));
        bufp->chgCData(oldp+248,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__xe_ye_a))),5);
        bufp->chgBit(oldp+249,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__xe_ye_a) 
                                             >> 5U)))));
        bufp->chgIData(oldp+250,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__yf2_a0),24);
        bufp->chgIData(oldp+251,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__yf2_a1),24);
        bufp->chgIData(oldp+252,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__yf2_a2),24);
        bufp->chgIData(oldp+253,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__yf2_a3),24);
        bufp->chgIData(oldp+254,((0xffffffU & ((2U 
                                                & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__xe_ye_a))
                                                ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__yf2_a3 
                                                   >> 2U)
                                                : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__yf2_a3))),24);
        bufp->chgBit(oldp+255,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__valid_1));
        bufp->chgBit(oldp+256,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__xs_ys_1));
        bufp->chgIData(oldp+257,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__xf1_1),24);
        bufp->chgIData(oldp+258,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__yf2_1),24);
        bufp->chgCData(oldp+259,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__ze_1),8);
        bufp->chgBit(oldp+260,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zs_1));
        bufp->chgBit(oldp+261,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__valid_2));
        bufp->chgCData(oldp+262,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__ze_2),8);
        bufp->chgBit(oldp+263,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zs_2));
        bufp->chgIData(oldp+264,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2),25);
        bufp->chgBit(oldp+265,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__valid_3));
        bufp->chgCData(oldp+266,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__ze_3),8);
        bufp->chgBit(oldp+267,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zs_3));
        bufp->chgIData(oldp+268,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_3),25);
        bufp->chgCData(oldp+269,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__offset_3),5);
        bufp->chgBit(oldp+270,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__underflow_3));
        bufp->chgBit(oldp+271,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_3 
                                      >> 0x18U))));
        bufp->chgCData(oldp+272,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__underflow_3)
                                   ? 0U : (0xffU & 
                                           ((0x1000000U 
                                             & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_3)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__ze_3))
                                             : ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__ze_3) 
                                                - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__offset_3)))))),8);
        bufp->chgIData(oldp+273,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__underflow_3)
                                   ? 0U : (0x7fffffU 
                                           & ((0x1000000U 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_3)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_3 
                                                  >> 1U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_3 
                                                  << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__offset_3)))))),23);
        bufp->chgBit(oldp+274,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__valid_4));
        bufp->chgCData(oldp+275,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                           >> 0x11U))),7);
        bufp->chgSData(oldp+276,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                             >> 1U))),16);
        bufp->chgBit(oldp+277,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                                >> 0x11U)))));
        bufp->chgCData(oldp+278,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                        >> 0x15U))),3);
        bufp->chgCData(oldp+279,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                          >> 0x11U))),4);
        bufp->chgBit(oldp+280,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                             >> 0x15U)))));
        bufp->chgCData(oldp+281,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                           >> 9U))),8);
        bufp->chgCData(oldp+282,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                           >> 1U))),8);
        bufp->chgBit(oldp+283,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                                >> 9U)))));
        bufp->chgCData(oldp+284,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                          >> 0xdU))),4);
        bufp->chgCData(oldp+285,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                          >> 9U))),4);
        bufp->chgBit(oldp+286,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                               >> 0xdU)))));
        bufp->chgCData(oldp+287,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                          >> 5U))),4);
        bufp->chgCData(oldp+288,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                          >> 1U))),4);
        bufp->chgBit(oldp+289,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder.__PVT__zf_2 
                                               >> 5U)))));
        bufp->chgIData(oldp+290,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                               >> 1U))),23);
        bufp->chgCData(oldp+291,((0x1fU & ((IData)(0x16U) 
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
        bufp->chgBit(oldp+292,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x 
                                >> 0x1fU)));
        bufp->chgCData(oldp+293,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+294,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x)),23);
        bufp->chgBit(oldp+295,((0x3f800000U > (0x7fffffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x))));
        bufp->chgCData(oldp+296,(((0x3f800000U > (0x7fffffffU 
                                                  & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x))
                                   ? 0x7fU : (0xffU 
                                              & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x 
                                                 >> 0x17U)))),8);
        bufp->chgCData(oldp+297,((0xffU & (((0x3f800000U 
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
        bufp->chgBit(oldp+298,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zs_a));
        bufp->chgCData(oldp+299,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__ze_a),8);
        bufp->chgIData(oldp+300,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__xf1_a),24);
        bufp->chgIData(oldp+301,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__yf1_a),24);
        bufp->chgCData(oldp+302,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__xe_ye_a),8);
        bufp->chgBit(oldp+303,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__xs_ys_a));
        bufp->chgCData(oldp+304,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__xe_ye_a))),5);
        bufp->chgBit(oldp+305,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__xe_ye_a) 
                                             >> 5U)))));
        bufp->chgIData(oldp+306,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__yf2_a0),24);
        bufp->chgIData(oldp+307,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__yf2_a1),24);
        bufp->chgIData(oldp+308,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__yf2_a2),24);
        bufp->chgIData(oldp+309,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__yf2_a3),24);
        bufp->chgIData(oldp+310,((0xffffffU & ((2U 
                                                & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__xe_ye_a))
                                                ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__yf2_a3 
                                                   >> 2U)
                                                : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__yf2_a3))),24);
        bufp->chgBit(oldp+311,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__valid_1));
        bufp->chgBit(oldp+312,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__xs_ys_1));
        bufp->chgIData(oldp+313,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__xf1_1),24);
        bufp->chgIData(oldp+314,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__yf2_1),24);
        bufp->chgCData(oldp+315,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__ze_1),8);
        bufp->chgBit(oldp+316,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zs_1));
        bufp->chgBit(oldp+317,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__valid_2));
        bufp->chgCData(oldp+318,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__ze_2),8);
        bufp->chgBit(oldp+319,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zs_2));
        bufp->chgIData(oldp+320,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2),25);
        bufp->chgBit(oldp+321,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__valid_3));
        bufp->chgCData(oldp+322,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__ze_3),8);
        bufp->chgBit(oldp+323,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zs_3));
        bufp->chgIData(oldp+324,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_3),25);
        bufp->chgCData(oldp+325,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__offset_3),5);
        bufp->chgBit(oldp+326,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__underflow_3));
        bufp->chgBit(oldp+327,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_3 
                                      >> 0x18U))));
        bufp->chgCData(oldp+328,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__underflow_3)
                                   ? 0U : (0xffU & 
                                           ((0x1000000U 
                                             & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_3)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__ze_3))
                                             : ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__ze_3) 
                                                - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__offset_3)))))),8);
        bufp->chgIData(oldp+329,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__underflow_3)
                                   ? 0U : (0x7fffffU 
                                           & ((0x1000000U 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_3)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_3 
                                                  >> 1U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_3 
                                                  << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__offset_3)))))),23);
        bufp->chgBit(oldp+330,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__valid_4));
        bufp->chgCData(oldp+331,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                           >> 0x11U))),7);
        bufp->chgSData(oldp+332,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                             >> 1U))),16);
        bufp->chgBit(oldp+333,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                                >> 0x11U)))));
        bufp->chgCData(oldp+334,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                        >> 0x15U))),3);
        bufp->chgCData(oldp+335,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                          >> 0x11U))),4);
        bufp->chgBit(oldp+336,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                             >> 0x15U)))));
        bufp->chgCData(oldp+337,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                           >> 9U))),8);
        bufp->chgCData(oldp+338,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                           >> 1U))),8);
        bufp->chgBit(oldp+339,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                                >> 9U)))));
        bufp->chgCData(oldp+340,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                          >> 0xdU))),4);
        bufp->chgCData(oldp+341,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                          >> 9U))),4);
        bufp->chgBit(oldp+342,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                               >> 0xdU)))));
        bufp->chgCData(oldp+343,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                          >> 5U))),4);
        bufp->chgCData(oldp+344,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                          >> 1U))),4);
        bufp->chgBit(oldp+345,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder.__PVT__zf_2 
                                               >> 5U)))));
        bufp->chgIData(oldp+346,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                               >> 1U))),23);
        bufp->chgCData(oldp+347,((0x1fU & ((IData)(0x16U) 
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
        bufp->chgBit(oldp+348,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_and_c_r_1 
                                >> 0x1fU)));
        bufp->chgCData(oldp+349,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_and_c_r_1 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+350,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_and_c_r_1)),23);
        bufp->chgBit(oldp+351,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_muler__DOT__io_z_r 
                                >> 0x1fU)));
        bufp->chgCData(oldp+352,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_muler__DOT__io_z_r 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+353,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_muler__DOT__io_z_r)),23);
        bufp->chgBit(oldp+354,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__y_gt_x_0));
        bufp->chgCData(oldp+355,((0xffU & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__y_gt_x_0)
                                            ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_muler__DOT__io_z_r 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_and_c_r_1 
                                               >> 0x17U)))),8);
        bufp->chgCData(oldp+356,((0xffU & (((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_muler__DOT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_and_c_r_1 
                                                >> 0x17U)) 
                                           - ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_and_c_r_1 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_muler__DOT__io_z_r 
                                                  >> 0x17U))))),8);
        bufp->chgBit(oldp+357,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zs_a));
        bufp->chgCData(oldp+358,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__ze_a),8);
        bufp->chgIData(oldp+359,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__xf1_a),24);
        bufp->chgIData(oldp+360,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__yf1_a),24);
        bufp->chgCData(oldp+361,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__xe_ye_a),8);
        bufp->chgBit(oldp+362,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__xs_ys_a));
        bufp->chgCData(oldp+363,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__xe_ye_a))),5);
        bufp->chgBit(oldp+364,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__xe_ye_a) 
                                             >> 5U)))));
        bufp->chgIData(oldp+365,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__yf2_a0),24);
        bufp->chgIData(oldp+366,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__yf2_a1),24);
        bufp->chgIData(oldp+367,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__yf2_a2),24);
        bufp->chgIData(oldp+368,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__yf2_a3),24);
        bufp->chgIData(oldp+369,((0xffffffU & ((2U 
                                                & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__xe_ye_a))
                                                ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__yf2_a3 
                                                   >> 2U)
                                                : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__yf2_a3))),24);
        bufp->chgBit(oldp+370,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__valid_1));
        bufp->chgBit(oldp+371,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__xs_ys_1));
        bufp->chgIData(oldp+372,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__xf1_1),24);
        bufp->chgIData(oldp+373,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__yf2_1),24);
        bufp->chgCData(oldp+374,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__ze_1),8);
        bufp->chgBit(oldp+375,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zs_1));
        bufp->chgBit(oldp+376,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__valid_2));
        bufp->chgCData(oldp+377,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__ze_2),8);
        bufp->chgBit(oldp+378,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zs_2));
        bufp->chgIData(oldp+379,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2),25);
        bufp->chgBit(oldp+380,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__valid_3));
        bufp->chgCData(oldp+381,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__ze_3),8);
        bufp->chgBit(oldp+382,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zs_3));
        bufp->chgIData(oldp+383,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_3),25);
        bufp->chgCData(oldp+384,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__offset_3),5);
        bufp->chgBit(oldp+385,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__underflow_3));
        bufp->chgBit(oldp+386,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_3 
                                      >> 0x18U))));
        bufp->chgCData(oldp+387,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__underflow_3)
                                   ? 0U : (0xffU & 
                                           ((0x1000000U 
                                             & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_3)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__ze_3))
                                             : ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__ze_3) 
                                                - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__offset_3)))))),8);
        bufp->chgIData(oldp+388,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__underflow_3)
                                   ? 0U : (0x7fffffU 
                                           & ((0x1000000U 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_3)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_3 
                                                  >> 1U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_3 
                                                  << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__offset_3)))))),23);
        bufp->chgBit(oldp+389,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__valid_4));
        bufp->chgCData(oldp+390,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                           >> 0x11U))),7);
        bufp->chgSData(oldp+391,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                             >> 1U))),16);
        bufp->chgBit(oldp+392,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                                >> 0x11U)))));
        bufp->chgCData(oldp+393,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                        >> 0x15U))),3);
        bufp->chgCData(oldp+394,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                          >> 0x11U))),4);
        bufp->chgBit(oldp+395,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                             >> 0x15U)))));
        bufp->chgCData(oldp+396,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                           >> 9U))),8);
        bufp->chgCData(oldp+397,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                           >> 1U))),8);
        bufp->chgBit(oldp+398,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                                >> 9U)))));
        bufp->chgCData(oldp+399,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                          >> 0xdU))),4);
        bufp->chgCData(oldp+400,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                          >> 9U))),4);
        bufp->chgBit(oldp+401,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                               >> 0xdU)))));
        bufp->chgCData(oldp+402,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                          >> 5U))),4);
        bufp->chgCData(oldp+403,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                          >> 1U))),4);
        bufp->chgBit(oldp+404,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__zf_2 
                                               >> 5U)))));
        bufp->chgIData(oldp+405,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                               >> 1U))),23);
        bufp->chgCData(oldp+406,((0x1fU & ((IData)(0x16U) 
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
        bufp->chgBit(oldp+407,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__axx_bx_c_r_3 
                                >> 0x1fU)));
        bufp->chgCData(oldp+408,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__axx_bx_c_r_3 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+409,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__axx_bx_c_r_3)),23);
        bufp->chgBit(oldp+410,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__io_z_r 
                                >> 0x1fU)));
        bufp->chgCData(oldp+411,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__io_z_r 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+412,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__io_z_r)),23);
        bufp->chgBit(oldp+413,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__y_gt_x_0));
        bufp->chgCData(oldp+414,((0xffU & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__y_gt_x_0)
                                            ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__io_z_r 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__axx_bx_c_r_3 
                                               >> 0x17U)))),8);
        bufp->chgCData(oldp+415,((0xffU & (((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__axx_bx_c_r_3 
                                                >> 0x17U)) 
                                           - ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__axx_bx_c_r_3 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__io_z_r 
                                                  >> 0x17U))))),8);
        bufp->chgBit(oldp+416,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zs_a));
        bufp->chgCData(oldp+417,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__ze_a),8);
        bufp->chgIData(oldp+418,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__xf1_a),24);
        bufp->chgIData(oldp+419,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__yf1_a),24);
        bufp->chgCData(oldp+420,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__xe_ye_a),8);
        bufp->chgBit(oldp+421,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__xs_ys_a));
        bufp->chgCData(oldp+422,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__xe_ye_a))),5);
        bufp->chgBit(oldp+423,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__xe_ye_a) 
                                             >> 5U)))));
        bufp->chgIData(oldp+424,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__yf2_a0),24);
        bufp->chgIData(oldp+425,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__yf2_a1),24);
        bufp->chgIData(oldp+426,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__yf2_a2),24);
        bufp->chgIData(oldp+427,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__yf2_a3),24);
        bufp->chgIData(oldp+428,((0xffffffU & ((2U 
                                                & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__xe_ye_a))
                                                ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__yf2_a3 
                                                   >> 2U)
                                                : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__yf2_a3))),24);
        bufp->chgBit(oldp+429,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__valid_1));
        bufp->chgBit(oldp+430,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__xs_ys_1));
        bufp->chgIData(oldp+431,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__xf1_1),24);
        bufp->chgIData(oldp+432,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__yf2_1),24);
        bufp->chgCData(oldp+433,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__ze_1),8);
        bufp->chgBit(oldp+434,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zs_1));
        bufp->chgBit(oldp+435,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__valid_2));
        bufp->chgCData(oldp+436,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__ze_2),8);
        bufp->chgBit(oldp+437,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zs_2));
        bufp->chgIData(oldp+438,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2),25);
        bufp->chgBit(oldp+439,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__valid_3));
        bufp->chgCData(oldp+440,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__ze_3),8);
        bufp->chgBit(oldp+441,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zs_3));
        bufp->chgIData(oldp+442,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_3),25);
        bufp->chgCData(oldp+443,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__offset_3),5);
        bufp->chgBit(oldp+444,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__underflow_3));
        bufp->chgBit(oldp+445,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_3 
                                      >> 0x18U))));
        bufp->chgCData(oldp+446,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__underflow_3)
                                   ? 0U : (0xffU & 
                                           ((0x1000000U 
                                             & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_3)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__ze_3))
                                             : ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__ze_3) 
                                                - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__offset_3)))))),8);
        bufp->chgIData(oldp+447,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__underflow_3)
                                   ? 0U : (0x7fffffU 
                                           & ((0x1000000U 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_3)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_3 
                                                  >> 1U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_3 
                                                  << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__offset_3)))))),23);
        bufp->chgBit(oldp+448,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__valid_4));
        bufp->chgCData(oldp+449,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                           >> 0x11U))),7);
        bufp->chgSData(oldp+450,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                             >> 1U))),16);
        bufp->chgBit(oldp+451,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                                >> 0x11U)))));
        bufp->chgCData(oldp+452,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                        >> 0x15U))),3);
        bufp->chgCData(oldp+453,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                          >> 0x11U))),4);
        bufp->chgBit(oldp+454,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                             >> 0x15U)))));
        bufp->chgCData(oldp+455,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                           >> 9U))),8);
        bufp->chgCData(oldp+456,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                           >> 1U))),8);
        bufp->chgBit(oldp+457,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                                >> 9U)))));
        bufp->chgCData(oldp+458,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                          >> 0xdU))),4);
        bufp->chgCData(oldp+459,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                          >> 9U))),4);
        bufp->chgBit(oldp+460,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                               >> 0xdU)))));
        bufp->chgCData(oldp+461,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                          >> 5U))),4);
        bufp->chgCData(oldp+462,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                          >> 1U))),4);
        bufp->chgBit(oldp+463,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder.__PVT__zf_2 
                                               >> 5U)))));
        bufp->chgIData(oldp+464,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                               >> 1U))),23);
        bufp->chgCData(oldp+465,((0x1fU & ((IData)(0x16U) 
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
        bufp->chgBit(oldp+466,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x 
                                >> 0x1fU)));
        bufp->chgCData(oldp+467,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+468,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x)),23);
        bufp->chgBit(oldp+469,((0x3f800000U > (0x7fffffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x))));
        bufp->chgCData(oldp+470,(((0x3f800000U > (0x7fffffffU 
                                                  & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x))
                                   ? 0x7fU : (0xffU 
                                              & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x 
                                                 >> 0x17U)))),8);
        bufp->chgCData(oldp+471,((0xffU & (((0x3f800000U 
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
        bufp->chgBit(oldp+472,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zs_a));
        bufp->chgCData(oldp+473,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__ze_a),8);
        bufp->chgIData(oldp+474,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__xf1_a),24);
        bufp->chgIData(oldp+475,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__yf1_a),24);
        bufp->chgCData(oldp+476,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__xe_ye_a),8);
        bufp->chgBit(oldp+477,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__xs_ys_a));
        bufp->chgCData(oldp+478,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__xe_ye_a))),5);
        bufp->chgBit(oldp+479,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__xe_ye_a) 
                                             >> 5U)))));
        bufp->chgIData(oldp+480,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__yf2_a0),24);
        bufp->chgIData(oldp+481,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__yf2_a1),24);
        bufp->chgIData(oldp+482,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__yf2_a2),24);
        bufp->chgIData(oldp+483,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__yf2_a3),24);
        bufp->chgIData(oldp+484,((0xffffffU & ((2U 
                                                & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__xe_ye_a))
                                                ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__yf2_a3 
                                                   >> 2U)
                                                : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__yf2_a3))),24);
        bufp->chgBit(oldp+485,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__valid_1));
        bufp->chgBit(oldp+486,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__xs_ys_1));
        bufp->chgIData(oldp+487,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__xf1_1),24);
        bufp->chgIData(oldp+488,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__yf2_1),24);
        bufp->chgCData(oldp+489,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__ze_1),8);
        bufp->chgBit(oldp+490,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zs_1));
        bufp->chgBit(oldp+491,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__valid_2));
        bufp->chgCData(oldp+492,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__ze_2),8);
        bufp->chgBit(oldp+493,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zs_2));
        bufp->chgIData(oldp+494,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2),25);
        bufp->chgBit(oldp+495,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__valid_3));
        bufp->chgCData(oldp+496,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__ze_3),8);
        bufp->chgBit(oldp+497,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zs_3));
        bufp->chgIData(oldp+498,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_3),25);
        bufp->chgCData(oldp+499,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__offset_3),5);
        bufp->chgBit(oldp+500,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__underflow_3));
        bufp->chgBit(oldp+501,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_3 
                                      >> 0x18U))));
        bufp->chgCData(oldp+502,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__underflow_3)
                                   ? 0U : (0xffU & 
                                           ((0x1000000U 
                                             & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_3)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__ze_3))
                                             : ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__ze_3) 
                                                - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__offset_3)))))),8);
        bufp->chgIData(oldp+503,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__underflow_3)
                                   ? 0U : (0x7fffffU 
                                           & ((0x1000000U 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_3)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_3 
                                                  >> 1U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_3 
                                                  << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__offset_3)))))),23);
        bufp->chgBit(oldp+504,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__valid_4));
        bufp->chgCData(oldp+505,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                           >> 0x11U))),7);
        bufp->chgSData(oldp+506,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                             >> 1U))),16);
        bufp->chgBit(oldp+507,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                                >> 0x11U)))));
        bufp->chgCData(oldp+508,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                        >> 0x15U))),3);
        bufp->chgCData(oldp+509,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                          >> 0x11U))),4);
        bufp->chgBit(oldp+510,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                             >> 0x15U)))));
        bufp->chgCData(oldp+511,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                           >> 9U))),8);
        bufp->chgCData(oldp+512,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                           >> 1U))),8);
        bufp->chgBit(oldp+513,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                                >> 9U)))));
        bufp->chgCData(oldp+514,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                          >> 0xdU))),4);
        bufp->chgCData(oldp+515,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                          >> 9U))),4);
        bufp->chgBit(oldp+516,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                               >> 0xdU)))));
        bufp->chgCData(oldp+517,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                          >> 5U))),4);
        bufp->chgCData(oldp+518,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                          >> 1U))),4);
        bufp->chgBit(oldp+519,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder.__PVT__zf_2 
                                               >> 5U)))));
        bufp->chgIData(oldp+520,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                               >> 1U))),23);
        bufp->chgCData(oldp+521,((0x1fU & ((IData)(0x16U) 
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
        bufp->chgBit(oldp+522,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_and_c_r_1 
                                >> 0x1fU)));
        bufp->chgCData(oldp+523,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_and_c_r_1 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+524,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_and_c_r_1)),23);
        bufp->chgBit(oldp+525,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_muler__DOT__io_z_r 
                                >> 0x1fU)));
        bufp->chgCData(oldp+526,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_muler__DOT__io_z_r 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+527,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_muler__DOT__io_z_r)),23);
        bufp->chgBit(oldp+528,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__y_gt_x_0));
        bufp->chgCData(oldp+529,((0xffU & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__y_gt_x_0)
                                            ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_muler__DOT__io_z_r 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_and_c_r_1 
                                               >> 0x17U)))),8);
        bufp->chgCData(oldp+530,((0xffU & (((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_muler__DOT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_and_c_r_1 
                                                >> 0x17U)) 
                                           - ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_and_c_r_1 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_muler__DOT__io_z_r 
                                                  >> 0x17U))))),8);
        bufp->chgBit(oldp+531,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zs_a));
        bufp->chgCData(oldp+532,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__ze_a),8);
        bufp->chgIData(oldp+533,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__xf1_a),24);
        bufp->chgIData(oldp+534,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__yf1_a),24);
        bufp->chgCData(oldp+535,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__xe_ye_a),8);
        bufp->chgBit(oldp+536,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__xs_ys_a));
        bufp->chgCData(oldp+537,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__xe_ye_a))),5);
        bufp->chgBit(oldp+538,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__xe_ye_a) 
                                             >> 5U)))));
        bufp->chgIData(oldp+539,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__yf2_a0),24);
        bufp->chgIData(oldp+540,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__yf2_a1),24);
        bufp->chgIData(oldp+541,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__yf2_a2),24);
        bufp->chgIData(oldp+542,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__yf2_a3),24);
        bufp->chgIData(oldp+543,((0xffffffU & ((2U 
                                                & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__xe_ye_a))
                                                ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__yf2_a3 
                                                   >> 2U)
                                                : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__yf2_a3))),24);
        bufp->chgBit(oldp+544,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__valid_1));
        bufp->chgBit(oldp+545,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__xs_ys_1));
        bufp->chgIData(oldp+546,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__xf1_1),24);
        bufp->chgIData(oldp+547,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__yf2_1),24);
        bufp->chgCData(oldp+548,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__ze_1),8);
        bufp->chgBit(oldp+549,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zs_1));
        bufp->chgBit(oldp+550,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__valid_2));
        bufp->chgCData(oldp+551,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__ze_2),8);
        bufp->chgBit(oldp+552,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zs_2));
        bufp->chgIData(oldp+553,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2),25);
        bufp->chgBit(oldp+554,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__valid_3));
        bufp->chgCData(oldp+555,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__ze_3),8);
        bufp->chgBit(oldp+556,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zs_3));
        bufp->chgIData(oldp+557,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_3),25);
        bufp->chgCData(oldp+558,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__offset_3),5);
        bufp->chgBit(oldp+559,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__underflow_3));
        bufp->chgBit(oldp+560,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_3 
                                      >> 0x18U))));
        bufp->chgCData(oldp+561,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__underflow_3)
                                   ? 0U : (0xffU & 
                                           ((0x1000000U 
                                             & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_3)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__ze_3))
                                             : ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__ze_3) 
                                                - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__offset_3)))))),8);
        bufp->chgIData(oldp+562,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__underflow_3)
                                   ? 0U : (0x7fffffU 
                                           & ((0x1000000U 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_3)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_3 
                                                  >> 1U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_3 
                                                  << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__offset_3)))))),23);
        bufp->chgBit(oldp+563,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__valid_4));
        bufp->chgCData(oldp+564,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                           >> 0x11U))),7);
        bufp->chgSData(oldp+565,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                             >> 1U))),16);
        bufp->chgBit(oldp+566,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                                >> 0x11U)))));
        bufp->chgCData(oldp+567,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                        >> 0x15U))),3);
        bufp->chgCData(oldp+568,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                          >> 0x11U))),4);
        bufp->chgBit(oldp+569,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                             >> 0x15U)))));
        bufp->chgCData(oldp+570,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                           >> 9U))),8);
        bufp->chgCData(oldp+571,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                           >> 1U))),8);
        bufp->chgBit(oldp+572,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                                >> 9U)))));
        bufp->chgCData(oldp+573,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                          >> 0xdU))),4);
        bufp->chgCData(oldp+574,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                          >> 9U))),4);
        bufp->chgBit(oldp+575,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                               >> 0xdU)))));
        bufp->chgCData(oldp+576,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                          >> 5U))),4);
        bufp->chgCData(oldp+577,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                          >> 1U))),4);
        bufp->chgBit(oldp+578,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__zf_2 
                                               >> 5U)))));
        bufp->chgIData(oldp+579,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                               >> 1U))),23);
        bufp->chgCData(oldp+580,((0x1fU & ((IData)(0x16U) 
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
        bufp->chgBit(oldp+581,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__axx_bx_c_r_3 
                                >> 0x1fU)));
        bufp->chgCData(oldp+582,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__axx_bx_c_r_3 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+583,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__axx_bx_c_r_3)),23);
        bufp->chgBit(oldp+584,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__io_z_r 
                                >> 0x1fU)));
        bufp->chgCData(oldp+585,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__io_z_r 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+586,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__io_z_r)),23);
        bufp->chgBit(oldp+587,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__y_gt_x_0));
        bufp->chgCData(oldp+588,((0xffU & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__y_gt_x_0)
                                            ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__io_z_r 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__axx_bx_c_r_3 
                                               >> 0x17U)))),8);
        bufp->chgCData(oldp+589,((0xffU & (((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__axx_bx_c_r_3 
                                                >> 0x17U)) 
                                           - ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__axx_bx_c_r_3 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__io_z_r 
                                                  >> 0x17U))))),8);
        bufp->chgBit(oldp+590,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zs_a));
        bufp->chgCData(oldp+591,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__ze_a),8);
        bufp->chgIData(oldp+592,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__xf1_a),24);
        bufp->chgIData(oldp+593,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__yf1_a),24);
        bufp->chgCData(oldp+594,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__xe_ye_a),8);
        bufp->chgBit(oldp+595,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__xs_ys_a));
        bufp->chgCData(oldp+596,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__xe_ye_a))),5);
        bufp->chgBit(oldp+597,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__xe_ye_a) 
                                             >> 5U)))));
        bufp->chgIData(oldp+598,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__yf2_a0),24);
        bufp->chgIData(oldp+599,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__yf2_a1),24);
        bufp->chgIData(oldp+600,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__yf2_a2),24);
        bufp->chgIData(oldp+601,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__yf2_a3),24);
        bufp->chgIData(oldp+602,((0xffffffU & ((2U 
                                                & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__xe_ye_a))
                                                ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__yf2_a3 
                                                   >> 2U)
                                                : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__yf2_a3))),24);
        bufp->chgBit(oldp+603,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__valid_1));
        bufp->chgBit(oldp+604,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__xs_ys_1));
        bufp->chgIData(oldp+605,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__xf1_1),24);
        bufp->chgIData(oldp+606,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__yf2_1),24);
        bufp->chgCData(oldp+607,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__ze_1),8);
        bufp->chgBit(oldp+608,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zs_1));
        bufp->chgBit(oldp+609,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__valid_2));
        bufp->chgCData(oldp+610,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__ze_2),8);
        bufp->chgBit(oldp+611,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zs_2));
        bufp->chgIData(oldp+612,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2),25);
        bufp->chgBit(oldp+613,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__valid_3));
        bufp->chgCData(oldp+614,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__ze_3),8);
        bufp->chgBit(oldp+615,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zs_3));
        bufp->chgIData(oldp+616,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_3),25);
        bufp->chgCData(oldp+617,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__offset_3),5);
        bufp->chgBit(oldp+618,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__underflow_3));
        bufp->chgBit(oldp+619,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_3 
                                      >> 0x18U))));
        bufp->chgCData(oldp+620,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__underflow_3)
                                   ? 0U : (0xffU & 
                                           ((0x1000000U 
                                             & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_3)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__ze_3))
                                             : ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__ze_3) 
                                                - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__offset_3)))))),8);
        bufp->chgIData(oldp+621,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__underflow_3)
                                   ? 0U : (0x7fffffU 
                                           & ((0x1000000U 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_3)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_3 
                                                  >> 1U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_3 
                                                  << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__offset_3)))))),23);
        bufp->chgBit(oldp+622,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__valid_4));
        bufp->chgCData(oldp+623,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                           >> 0x11U))),7);
        bufp->chgSData(oldp+624,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                             >> 1U))),16);
        bufp->chgBit(oldp+625,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                                >> 0x11U)))));
        bufp->chgCData(oldp+626,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                        >> 0x15U))),3);
        bufp->chgCData(oldp+627,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                          >> 0x11U))),4);
        bufp->chgBit(oldp+628,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                             >> 0x15U)))));
        bufp->chgCData(oldp+629,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                           >> 9U))),8);
        bufp->chgCData(oldp+630,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                           >> 1U))),8);
        bufp->chgBit(oldp+631,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                                >> 9U)))));
        bufp->chgCData(oldp+632,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                          >> 0xdU))),4);
        bufp->chgCData(oldp+633,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                          >> 9U))),4);
        bufp->chgBit(oldp+634,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                               >> 0xdU)))));
        bufp->chgCData(oldp+635,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                          >> 5U))),4);
        bufp->chgCData(oldp+636,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                          >> 1U))),4);
        bufp->chgBit(oldp+637,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder.__PVT__zf_2 
                                               >> 5U)))));
        bufp->chgIData(oldp+638,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                               >> 1U))),23);
        bufp->chgCData(oldp+639,((0x1fU & ((IData)(0x16U) 
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
        bufp->chgBit(oldp+640,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x 
                                >> 0x1fU)));
        bufp->chgCData(oldp+641,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+642,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x)),23);
        bufp->chgBit(oldp+643,((0x3f800000U > (0x7fffffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x))));
        bufp->chgCData(oldp+644,(((0x3f800000U > (0x7fffffffU 
                                                  & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x))
                                   ? 0x7fU : (0xffU 
                                              & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x 
                                                 >> 0x17U)))),8);
        bufp->chgCData(oldp+645,((0xffU & (((0x3f800000U 
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
        bufp->chgBit(oldp+646,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zs_a));
        bufp->chgCData(oldp+647,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__ze_a),8);
        bufp->chgIData(oldp+648,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__xf1_a),24);
        bufp->chgIData(oldp+649,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__yf1_a),24);
        bufp->chgCData(oldp+650,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__xe_ye_a),8);
        bufp->chgBit(oldp+651,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__xs_ys_a));
        bufp->chgCData(oldp+652,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__xe_ye_a))),5);
        bufp->chgBit(oldp+653,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__xe_ye_a) 
                                             >> 5U)))));
        bufp->chgIData(oldp+654,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__yf2_a0),24);
        bufp->chgIData(oldp+655,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__yf2_a1),24);
        bufp->chgIData(oldp+656,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__yf2_a2),24);
        bufp->chgIData(oldp+657,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__yf2_a3),24);
        bufp->chgIData(oldp+658,((0xffffffU & ((2U 
                                                & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__xe_ye_a))
                                                ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__yf2_a3 
                                                   >> 2U)
                                                : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__yf2_a3))),24);
        bufp->chgBit(oldp+659,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__valid_1));
        bufp->chgBit(oldp+660,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__xs_ys_1));
        bufp->chgIData(oldp+661,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__xf1_1),24);
        bufp->chgIData(oldp+662,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__yf2_1),24);
        bufp->chgCData(oldp+663,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__ze_1),8);
        bufp->chgBit(oldp+664,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zs_1));
        bufp->chgBit(oldp+665,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__valid_2));
        bufp->chgCData(oldp+666,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__ze_2),8);
        bufp->chgBit(oldp+667,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zs_2));
        bufp->chgIData(oldp+668,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2),25);
        bufp->chgBit(oldp+669,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__valid_3));
        bufp->chgCData(oldp+670,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__ze_3),8);
        bufp->chgBit(oldp+671,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zs_3));
        bufp->chgIData(oldp+672,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_3),25);
        bufp->chgCData(oldp+673,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__offset_3),5);
        bufp->chgBit(oldp+674,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__underflow_3));
        bufp->chgBit(oldp+675,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_3 
                                      >> 0x18U))));
        bufp->chgCData(oldp+676,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__underflow_3)
                                   ? 0U : (0xffU & 
                                           ((0x1000000U 
                                             & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_3)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__ze_3))
                                             : ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__ze_3) 
                                                - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__offset_3)))))),8);
        bufp->chgIData(oldp+677,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__underflow_3)
                                   ? 0U : (0x7fffffU 
                                           & ((0x1000000U 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_3)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_3 
                                                  >> 1U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_3 
                                                  << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__offset_3)))))),23);
        bufp->chgBit(oldp+678,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__valid_4));
        bufp->chgCData(oldp+679,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                           >> 0x11U))),7);
        bufp->chgSData(oldp+680,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                             >> 1U))),16);
        bufp->chgBit(oldp+681,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                                >> 0x11U)))));
        bufp->chgCData(oldp+682,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                        >> 0x15U))),3);
        bufp->chgCData(oldp+683,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                          >> 0x11U))),4);
        bufp->chgBit(oldp+684,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                             >> 0x15U)))));
        bufp->chgCData(oldp+685,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                           >> 9U))),8);
        bufp->chgCData(oldp+686,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                           >> 1U))),8);
        bufp->chgBit(oldp+687,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                                >> 9U)))));
        bufp->chgCData(oldp+688,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                          >> 0xdU))),4);
        bufp->chgCData(oldp+689,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                          >> 9U))),4);
        bufp->chgBit(oldp+690,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                               >> 0xdU)))));
        bufp->chgCData(oldp+691,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                          >> 5U))),4);
        bufp->chgCData(oldp+692,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                          >> 1U))),4);
        bufp->chgBit(oldp+693,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder.__PVT__zf_2 
                                               >> 5U)))));
        bufp->chgIData(oldp+694,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                               >> 1U))),23);
        bufp->chgCData(oldp+695,((0x1fU & ((IData)(0x16U) 
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
        bufp->chgBit(oldp+696,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_and_c_r_1 
                                >> 0x1fU)));
        bufp->chgCData(oldp+697,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_and_c_r_1 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+698,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_and_c_r_1)),23);
        bufp->chgBit(oldp+699,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_muler__DOT__io_z_r 
                                >> 0x1fU)));
        bufp->chgCData(oldp+700,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_muler__DOT__io_z_r 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+701,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_muler__DOT__io_z_r)),23);
        bufp->chgBit(oldp+702,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__y_gt_x_0));
        bufp->chgCData(oldp+703,((0xffU & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__y_gt_x_0)
                                            ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_muler__DOT__io_z_r 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_and_c_r_1 
                                               >> 0x17U)))),8);
        bufp->chgCData(oldp+704,((0xffU & (((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_muler__DOT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_and_c_r_1 
                                                >> 0x17U)) 
                                           - ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_and_c_r_1 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_muler__DOT__io_z_r 
                                                  >> 0x17U))))),8);
        bufp->chgBit(oldp+705,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zs_a));
        bufp->chgCData(oldp+706,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__ze_a),8);
        bufp->chgIData(oldp+707,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__xf1_a),24);
        bufp->chgIData(oldp+708,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__yf1_a),24);
        bufp->chgCData(oldp+709,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__xe_ye_a),8);
        bufp->chgBit(oldp+710,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__xs_ys_a));
        bufp->chgCData(oldp+711,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__xe_ye_a))),5);
        bufp->chgBit(oldp+712,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__xe_ye_a) 
                                             >> 5U)))));
        bufp->chgIData(oldp+713,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__yf2_a0),24);
        bufp->chgIData(oldp+714,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__yf2_a1),24);
        bufp->chgIData(oldp+715,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__yf2_a2),24);
        bufp->chgIData(oldp+716,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__yf2_a3),24);
        bufp->chgIData(oldp+717,((0xffffffU & ((2U 
                                                & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__xe_ye_a))
                                                ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__yf2_a3 
                                                   >> 2U)
                                                : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__yf2_a3))),24);
        bufp->chgBit(oldp+718,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__valid_1));
        bufp->chgBit(oldp+719,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__xs_ys_1));
        bufp->chgIData(oldp+720,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__xf1_1),24);
        bufp->chgIData(oldp+721,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__yf2_1),24);
        bufp->chgCData(oldp+722,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__ze_1),8);
        bufp->chgBit(oldp+723,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zs_1));
        bufp->chgBit(oldp+724,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__valid_2));
        bufp->chgCData(oldp+725,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__ze_2),8);
        bufp->chgBit(oldp+726,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zs_2));
        bufp->chgIData(oldp+727,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2),25);
        bufp->chgBit(oldp+728,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__valid_3));
        bufp->chgCData(oldp+729,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__ze_3),8);
        bufp->chgBit(oldp+730,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zs_3));
        bufp->chgIData(oldp+731,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_3),25);
        bufp->chgCData(oldp+732,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__offset_3),5);
        bufp->chgBit(oldp+733,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__underflow_3));
        bufp->chgBit(oldp+734,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_3 
                                      >> 0x18U))));
        bufp->chgCData(oldp+735,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__underflow_3)
                                   ? 0U : (0xffU & 
                                           ((0x1000000U 
                                             & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_3)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__ze_3))
                                             : ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__ze_3) 
                                                - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__offset_3)))))),8);
        bufp->chgIData(oldp+736,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__underflow_3)
                                   ? 0U : (0x7fffffU 
                                           & ((0x1000000U 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_3)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_3 
                                                  >> 1U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_3 
                                                  << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__offset_3)))))),23);
        bufp->chgBit(oldp+737,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__valid_4));
        bufp->chgCData(oldp+738,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                           >> 0x11U))),7);
        bufp->chgSData(oldp+739,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                             >> 1U))),16);
        bufp->chgBit(oldp+740,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                                >> 0x11U)))));
        bufp->chgCData(oldp+741,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                        >> 0x15U))),3);
        bufp->chgCData(oldp+742,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                          >> 0x11U))),4);
        bufp->chgBit(oldp+743,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                             >> 0x15U)))));
        bufp->chgCData(oldp+744,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                           >> 9U))),8);
        bufp->chgCData(oldp+745,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                           >> 1U))),8);
        bufp->chgBit(oldp+746,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                                >> 9U)))));
        bufp->chgCData(oldp+747,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                          >> 0xdU))),4);
        bufp->chgCData(oldp+748,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                          >> 9U))),4);
        bufp->chgBit(oldp+749,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                               >> 0xdU)))));
        bufp->chgCData(oldp+750,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                          >> 5U))),4);
        bufp->chgCData(oldp+751,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                          >> 1U))),4);
        bufp->chgBit(oldp+752,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__zf_2 
                                               >> 5U)))));
        bufp->chgIData(oldp+753,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                               >> 1U))),23);
        bufp->chgCData(oldp+754,((0x1fU & ((IData)(0x16U) 
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
        bufp->chgBit(oldp+755,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__axx_bx_c_r_3 
                                >> 0x1fU)));
        bufp->chgCData(oldp+756,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__axx_bx_c_r_3 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+757,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__axx_bx_c_r_3)),23);
        bufp->chgBit(oldp+758,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__io_z_r 
                                >> 0x1fU)));
        bufp->chgCData(oldp+759,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__io_z_r 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+760,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__io_z_r)),23);
        bufp->chgBit(oldp+761,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__y_gt_x_0));
        bufp->chgCData(oldp+762,((0xffU & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__y_gt_x_0)
                                            ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__io_z_r 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__axx_bx_c_r_3 
                                               >> 0x17U)))),8);
        bufp->chgCData(oldp+763,((0xffU & (((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__axx_bx_c_r_3 
                                                >> 0x17U)) 
                                           - ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__axx_bx_c_r_3 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__io_z_r 
                                                  >> 0x17U))))),8);
        bufp->chgBit(oldp+764,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zs_a));
        bufp->chgCData(oldp+765,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__ze_a),8);
        bufp->chgIData(oldp+766,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__xf1_a),24);
        bufp->chgIData(oldp+767,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__yf1_a),24);
        bufp->chgCData(oldp+768,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__xe_ye_a),8);
        bufp->chgBit(oldp+769,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__xs_ys_a));
        bufp->chgCData(oldp+770,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__xe_ye_a))),5);
        bufp->chgBit(oldp+771,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__xe_ye_a) 
                                             >> 5U)))));
        bufp->chgIData(oldp+772,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__yf2_a0),24);
        bufp->chgIData(oldp+773,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__yf2_a1),24);
        bufp->chgIData(oldp+774,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__yf2_a2),24);
        bufp->chgIData(oldp+775,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__yf2_a3),24);
        bufp->chgIData(oldp+776,((0xffffffU & ((2U 
                                                & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__xe_ye_a))
                                                ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__yf2_a3 
                                                   >> 2U)
                                                : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__yf2_a3))),24);
        bufp->chgBit(oldp+777,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__valid_1));
        bufp->chgBit(oldp+778,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__xs_ys_1));
        bufp->chgIData(oldp+779,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__xf1_1),24);
        bufp->chgIData(oldp+780,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__yf2_1),24);
        bufp->chgCData(oldp+781,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__ze_1),8);
        bufp->chgBit(oldp+782,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zs_1));
        bufp->chgBit(oldp+783,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__valid_2));
        bufp->chgCData(oldp+784,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__ze_2),8);
        bufp->chgBit(oldp+785,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zs_2));
        bufp->chgIData(oldp+786,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2),25);
        bufp->chgBit(oldp+787,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__valid_3));
        bufp->chgCData(oldp+788,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__ze_3),8);
        bufp->chgBit(oldp+789,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zs_3));
        bufp->chgIData(oldp+790,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_3),25);
        bufp->chgCData(oldp+791,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__offset_3),5);
        bufp->chgBit(oldp+792,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__underflow_3));
        bufp->chgBit(oldp+793,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_3 
                                      >> 0x18U))));
        bufp->chgCData(oldp+794,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__underflow_3)
                                   ? 0U : (0xffU & 
                                           ((0x1000000U 
                                             & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_3)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__ze_3))
                                             : ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__ze_3) 
                                                - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__offset_3)))))),8);
        bufp->chgIData(oldp+795,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__underflow_3)
                                   ? 0U : (0x7fffffU 
                                           & ((0x1000000U 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_3)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_3 
                                                  >> 1U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_3 
                                                  << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__offset_3)))))),23);
        bufp->chgBit(oldp+796,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__valid_4));
        bufp->chgCData(oldp+797,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                           >> 0x11U))),7);
        bufp->chgSData(oldp+798,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                             >> 1U))),16);
        bufp->chgBit(oldp+799,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                                >> 0x11U)))));
        bufp->chgCData(oldp+800,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                        >> 0x15U))),3);
        bufp->chgCData(oldp+801,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                          >> 0x11U))),4);
        bufp->chgBit(oldp+802,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                             >> 0x15U)))));
        bufp->chgCData(oldp+803,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                           >> 9U))),8);
        bufp->chgCData(oldp+804,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                           >> 1U))),8);
        bufp->chgBit(oldp+805,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                                >> 9U)))));
        bufp->chgCData(oldp+806,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                          >> 0xdU))),4);
        bufp->chgCData(oldp+807,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                          >> 9U))),4);
        bufp->chgBit(oldp+808,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                               >> 0xdU)))));
        bufp->chgCData(oldp+809,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                          >> 5U))),4);
        bufp->chgCData(oldp+810,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                          >> 1U))),4);
        bufp->chgBit(oldp+811,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder.__PVT__zf_2 
                                               >> 5U)))));
        bufp->chgIData(oldp+812,((0x7fffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                               >> 1U))),23);
        bufp->chgCData(oldp+813,((0x1fU & ((IData)(0x16U) 
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
        bufp->chgBit(oldp+814,((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x 
                                >> 0x1fU)));
        bufp->chgCData(oldp+815,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+816,((0x7fffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x)),23);
        bufp->chgBit(oldp+817,((0x3f800000U > (0x7fffffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x))));
        bufp->chgCData(oldp+818,(((0x3f800000U > (0x7fffffffU 
                                                  & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x))
                                   ? 0x7fU : (0xffU 
                                              & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x 
                                                 >> 0x17U)))),8);
        bufp->chgCData(oldp+819,((0xffU & (((0x3f800000U 
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
        bufp->chgBit(oldp+820,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zs_a));
        bufp->chgCData(oldp+821,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__ze_a),8);
        bufp->chgIData(oldp+822,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__xf1_a),24);
        bufp->chgIData(oldp+823,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__yf1_a),24);
        bufp->chgCData(oldp+824,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__xe_ye_a),8);
        bufp->chgBit(oldp+825,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__xs_ys_a));
        bufp->chgCData(oldp+826,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__xe_ye_a))),5);
        bufp->chgBit(oldp+827,((0U != (7U & ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__xe_ye_a) 
                                             >> 5U)))));
        bufp->chgIData(oldp+828,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__yf2_a0),24);
        bufp->chgIData(oldp+829,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__yf2_a1),24);
        bufp->chgIData(oldp+830,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__yf2_a2),24);
        bufp->chgIData(oldp+831,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__yf2_a3),24);
        bufp->chgIData(oldp+832,((0xffffffU & ((2U 
                                                & (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__xe_ye_a))
                                                ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__yf2_a3 
                                                   >> 2U)
                                                : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__yf2_a3))),24);
        bufp->chgBit(oldp+833,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__valid_1));
        bufp->chgBit(oldp+834,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__xs_ys_1));
        bufp->chgIData(oldp+835,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__xf1_1),24);
        bufp->chgIData(oldp+836,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__yf2_1),24);
        bufp->chgCData(oldp+837,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__ze_1),8);
        bufp->chgBit(oldp+838,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zs_1));
        bufp->chgBit(oldp+839,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__valid_2));
        bufp->chgCData(oldp+840,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__ze_2),8);
        bufp->chgBit(oldp+841,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zs_2));
        bufp->chgIData(oldp+842,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2),25);
        bufp->chgBit(oldp+843,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__valid_3));
        bufp->chgCData(oldp+844,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__ze_3),8);
        bufp->chgBit(oldp+845,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zs_3));
        bufp->chgIData(oldp+846,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_3),25);
        bufp->chgCData(oldp+847,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__offset_3),5);
        bufp->chgBit(oldp+848,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__underflow_3));
        bufp->chgBit(oldp+849,((1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_3 
                                      >> 0x18U))));
        bufp->chgCData(oldp+850,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__underflow_3)
                                   ? 0U : (0xffU & 
                                           ((0x1000000U 
                                             & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_3)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__ze_3))
                                             : ((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__ze_3) 
                                                - (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__offset_3)))))),8);
        bufp->chgIData(oldp+851,(((IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__underflow_3)
                                   ? 0U : (0x7fffffU 
                                           & ((0x1000000U 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_3)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_3 
                                                  >> 1U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_3 
                                                  << (IData)(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__offset_3)))))),23);
        bufp->chgBit(oldp+852,(vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__valid_4));
        bufp->chgCData(oldp+853,((0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                           >> 0x11U))),7);
        bufp->chgSData(oldp+854,((0xffffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                             >> 1U))),16);
        bufp->chgBit(oldp+855,((0U != (0x7fU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                                >> 0x11U)))));
        bufp->chgCData(oldp+856,((7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                        >> 0x15U))),3);
        bufp->chgCData(oldp+857,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                          >> 0x11U))),4);
        bufp->chgBit(oldp+858,((0U != (7U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                             >> 0x15U)))));
        bufp->chgCData(oldp+859,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                           >> 9U))),8);
        bufp->chgCData(oldp+860,((0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                           >> 1U))),8);
        bufp->chgBit(oldp+861,((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                                >> 9U)))));
        bufp->chgCData(oldp+862,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                          >> 0xdU))),4);
        bufp->chgCData(oldp+863,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                          >> 9U))),4);
        bufp->chgBit(oldp+864,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                               >> 0xdU)))));
        bufp->chgCData(oldp+865,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                          >> 5U))),4);
        bufp->chgCData(oldp+866,((0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                          >> 1U))),4);
        bufp->chgBit(oldp+867,((0U != (0xfU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder.__PVT__zf_2 
                                               >> 5U)))));
    }
    bufp->chgBit(oldp+868,(vlSelf->clock));
    bufp->chgBit(oldp+869,(vlSelf->reset));
    bufp->chgBit(oldp+870,(vlSelf->resize_load));
    bufp->chgBit(oldp+871,(vlSelf->yolo_finish));
    bufp->chgBit(oldp+872,(vlSelf->conv_finish));
    bufp->chgIData(oldp+873,(vlSelf->dma_raddr),32);
    bufp->chgBit(oldp+874,(vlSelf->dma_rareq));
    bufp->chgSData(oldp+875,(vlSelf->dma_rsize),16);
    bufp->chgBit(oldp+876,(vlSelf->dma_rbusy));
    bufp->chgQData(oldp+877,(vlSelf->dma_rdata),64);
    bufp->chgBit(oldp+879,(vlSelf->dma_rvalid));
    bufp->chgBit(oldp+880,(vlSelf->dma_rready));
    bufp->chgIData(oldp+881,(vlSelf->dma_waddr),32);
    bufp->chgBit(oldp+882,(vlSelf->dma_wareq));
    bufp->chgSData(oldp+883,(vlSelf->dma_wsize),16);
    bufp->chgBit(oldp+884,(vlSelf->dma_wbusy));
    bufp->chgQData(oldp+885,(vlSelf->dma_wdata),64);
    bufp->chgBit(oldp+887,(vlSelf->dma_wvalid));
    bufp->chgBit(oldp+888,(vlSelf->dma_wready));
    bufp->chgIData(oldp+889,((0xffffU & ((IData)(vlSelf->dma_wsize) 
                                         + (IData)(vlSelf->top__DOT__u_Accel_all__DOT___addr_start_T_1)))),17);
    bufp->chgSData(oldp+890,((0xffffU & ((IData)(vlSelf->dma_wsize) 
                                         + (IData)(vlSelf->top__DOT__u_Accel_all__DOT___addr_start_T_1)))),16);
    bufp->chgBit(oldp+891,(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__bias_buf__DOT__rst));
    bufp->chgBit(oldp+892,(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__clr_pool));
    bufp->chgBit(oldp+893,(vlSelf->top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__rst));
    bufp->chgBit(oldp+894,(vlSelf->top__DOT__u_Accel_all__DOT__dma_ddr2accel__DOT__clr));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
