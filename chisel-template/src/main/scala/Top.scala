import chisel3._
import chisel3.stage.ChiselGeneratorAnnotation
import circt.stage.{ChiselStage,FirtoolOption}
import chisel3.util._
import chisel3.experimental._

import scala.collection.immutable.Range


class Top() extends Module {
  val io = IO(new Bundle {
    val a = Input(UInt(8.W))
    val b = Input(UInt(8.W))
    val out = Output(UInt(16.W))
  })

  io.out := io.a + io.b

}

object Main{
  def main(args:Array[String]): Unit = {
    (new ChiselStage).execute(
      Array("--target", "systemverilog", "--target-dir", "rtl"),
      Seq(ChiselGeneratorAnnotation(() => new Top()),
        FirtoolOption("--disable-all-randomization"),
        FirtoolOption("--strip-debug-info"))
    )
  }
}

//        --split-verilog
