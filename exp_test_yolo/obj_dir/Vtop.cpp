// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop.h"
#include "Vtop__Syms.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vtop::Vtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , resize_load{vlSymsp->TOP.resize_load}
    , yolo_finish{vlSymsp->TOP.yolo_finish}
    , conv_finish{vlSymsp->TOP.conv_finish}
    , dma_rareq{vlSymsp->TOP.dma_rareq}
    , dma_rbusy{vlSymsp->TOP.dma_rbusy}
    , dma_rvalid{vlSymsp->TOP.dma_rvalid}
    , dma_rready{vlSymsp->TOP.dma_rready}
    , dma_wareq{vlSymsp->TOP.dma_wareq}
    , dma_wbusy{vlSymsp->TOP.dma_wbusy}
    , dma_wvalid{vlSymsp->TOP.dma_wvalid}
    , dma_wready{vlSymsp->TOP.dma_wready}
    , dma_rsize{vlSymsp->TOP.dma_rsize}
    , dma_wsize{vlSymsp->TOP.dma_wsize}
    , dma_raddr{vlSymsp->TOP.dma_raddr}
    , dma_waddr{vlSymsp->TOP.dma_waddr}
    , dma_rdata{vlSymsp->TOP.dma_rdata}
    , dma_wdata{vlSymsp->TOP.dma_wdata}
    , __PVT__top__DOT__u_Accel_all__DOT__bn_add_float_result_0_adder{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__bn_add_float_result_0_adder}
    , __PVT__top__DOT__u_Accel_all__DOT__bn_add_float_result_1_adder{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__bn_add_float_result_1_adder}
    , __PVT__top__DOT__u_Accel_all__DOT__bn_add_float_result_2_adder{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__bn_add_float_result_2_adder}
    , __PVT__top__DOT__u_Accel_all__DOT__bn_add_float_result_3_adder{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__bn_add_float_result_3_adder}
    , __PVT__top__DOT__u_Accel_all__DOT__bn_add_float_result_4_adder{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__bn_add_float_result_4_adder}
    , __PVT__top__DOT__u_Accel_all__DOT__bn_add_float_result_5_adder{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__bn_add_float_result_5_adder}
    , __PVT__top__DOT__u_Accel_all__DOT__bn_add_float_result_6_adder{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__bn_add_float_result_6_adder}
    , __PVT__top__DOT__u_Accel_all__DOT__bn_add_float_result_7_adder{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__bn_add_float_result_7_adder}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_0{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_0}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_1{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_1}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_2{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_2}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_3{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_3}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_4{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_4}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_5{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_5}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_6{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_6}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_7{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf__DOT__buf_unit_7}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0__DOT__line_0{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0__DOT__line_0}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0__DOT__line_1{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0__DOT__line_1}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1__DOT__line_0{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1__DOT__line_0}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1__DOT__line_1{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1__DOT__line_1}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2__DOT__line_0{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2__DOT__line_0}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2__DOT__line_1{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2__DOT__line_1}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3__DOT__line_0{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3__DOT__line_0}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3__DOT__line_1{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3__DOT__line_1}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4__DOT__line_0{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4__DOT__line_0}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4__DOT__line_1{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4__DOT__line_1}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5__DOT__line_0{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5__DOT__line_0}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5__DOT__line_1{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5__DOT__line_1}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6__DOT__line_0{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6__DOT__line_0}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6__DOT__line_1{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6__DOT__line_1}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7__DOT__line_0{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7__DOT__line_0}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7__DOT__line_1{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7__DOT__line_1}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_0{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_0}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_1{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_1}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_2{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_2}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_3{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_3}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_4{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_4}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_5{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_5}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_6{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_6}
    , __PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_7{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_7}
    , __PVT__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0}
    , __PVT__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1}
    , __PVT__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2}
    , __PVT__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3}
    , __PVT__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4}
    , __PVT__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5}
    , __PVT__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6}
    , __PVT__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7}
    , __PVT__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_0{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_0}
    , __PVT__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_1{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_1}
    , __PVT__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_2{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_2}
    , __PVT__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_3{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_3}
    , __PVT__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_4{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_4}
    , __PVT__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_5{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_5}
    , __PVT__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_6{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_6}
    , __PVT__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_7{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_7}
    , __PVT__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell}
    , __PVT__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1}
    , __PVT__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2}
    , __PVT__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3}
    , __PVT__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4}
    , __PVT__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5}
    , __PVT__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6}
    , __PVT__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7{vlSymsp->TOP.__PVT__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop::Vtop(const char* _vcname__)
    : Vtop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop::~Vtop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_static(Vtop___024root* vlSelf);
void Vtop___024root___eval_initial(Vtop___024root* vlSelf);
void Vtop___024root___eval_settle(Vtop___024root* vlSelf);
void Vtop___024root___eval(Vtop___024root* vlSelf);

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop___024root___eval_static(&(vlSymsp->TOP));
        Vtop___024root___eval_initial(&(vlSymsp->TOP));
        Vtop___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop::eventsPending() { return false; }

uint64_t Vtop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop___024root___eval_final(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop::final() {
    Vtop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop::hierName() const { return vlSymsp->name(); }
const char* Vtop::modelName() const { return "Vtop"; }
unsigned Vtop::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vtop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtop___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtop::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtop::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtop___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
