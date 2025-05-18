import chisel3._
import chisel3.stage.ChiselGeneratorAnnotation
import circt.stage.{ChiselStage,FirtoolOption}
import chisel3.util._
import chisel3.experimental._

import scala.collection.immutable.Range


class FSM() extends Module {
  val io = IO(new Bundle {
    val in = Input(UInt(1.W))
    val out = Output(UInt(1.W))
  })

  val s_idle::s_state1::s_state2::Nil = Enum(3)
  val state = RegInit(s_idle)

  io.out := (state === s_state2)

  switch(state) {
    is(s_idle) {
        when(io.in.asBool) {
            state := s_state1
        }
    }
    is(s_state1) {
        when(io.in.asBool) {
            state := s_state2
        }.otherwise {
            state := s_idle
        }
    }
    is(s_state2) {
        when(!io.in.asBool) {
            state := s_idle
        }
    }
  }

}

object FSM{
  def main(args:Array[String]): Unit = {
    (new ChiselStage).execute(
      Array("--target", "systemverilog", "--target-dir", "rtl"),
      Seq(ChiselGeneratorAnnotation(() => new FSM()),
        FirtoolOption("--disable-all-randomization"),
        FirtoolOption("--strip-debug-info"))
    )
  }
}

//        --split-verilog
