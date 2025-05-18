import chisel3._
import chisel3.stage.ChiselGeneratorAnnotation
import circt.stage.{ChiselStage,FirtoolOption}
import chisel3.util._
import chisel3.experimental._

import scala.collection.immutable.Range


class LFSR() extends Module {
  val io = IO(new Bundle {
    val en = Input(UInt(1.W))
    val out = Output(UInt(16.W))
    // val valid = Output(UInt(1.W))
  })

  io.out := random.LFSR(16,io.en.asBool,Some(1))

}

object LFSR{
  def main(args:Array[String]): Unit = {
    (new ChiselStage).execute(
      Array("--target", "systemverilog", "--target-dir", "rtl"),
      Seq(ChiselGeneratorAnnotation(() => new LFSR()),
        FirtoolOption("--disable-all-randomization"),
        FirtoolOption("--strip-debug-info"))
    )
  }
}

//        --split-verilog
