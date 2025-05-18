import chisel3._
import chisel3.stage.ChiselGeneratorAnnotation
import circt.stage.{ChiselStage,FirtoolOption}
import chisel3.util._
import chisel3.experimental._


class Counter() extends Module {
  val io = IO(new Bundle {
    val read_addrA = Input(UInt(log2Ceil(1024).W))
    val read_dataA = Output(UInt(32.W))
    val write_dataA = Input(UInt(32.W))
    val write_addrA = Input(UInt(log2Ceil(1024).W))
    val read_addrB = Input(UInt(log2Ceil(1024).W))
    val read_dataB = Output(UInt(32.W))
    val write_dataB = Input(UInt(32.W))
    val write_addrB = Input(UInt(log2Ceil(1024).W))
    val en_A = Input(UInt(1.W))
    val en_B = Input(UInt(1.W))
    val wr_A = Input(UInt(1.W))
    val wr_B = Input(UInt(1.W))
  })
  val read_dataA = RegInit(0.U(32.W))
  val write_dataA = Wire(UInt(32.W))
  val read_dataB = RegInit(0.U(32.W))
  val write_dataB = Wire(UInt(32.W))
  val mem = SyncReadMem(1024,UInt(32.W))

  write_dataA := io.write_dataA
  write_dataB := io.write_dataB

  when(io.en_A.asBool) {
    when(io.wr_A.asBool) {
      mem.write(io.write_addrA,write_dataA)
    }
    read_dataA := mem.read(io.read_dataA)
  }
  when(io.en_B.asBool) {
    when(io.wr_B.asBool) {
      mem.write(io.write_addrB,write_dataB)
    }
    read_dataB := mem.read(io.read_dataB)
  }

  io.read_dataA := read_dataA 
  io.read_dataB := read_dataB

}

object Counter{
  def main(args:Array[String]): Unit = {
    (new ChiselStage).execute(
      Array("--target", "systemverilog", "--target-dir", "rtl"),
      Seq(ChiselGeneratorAnnotation(() => new Counter()),
        FirtoolOption("--disable-all-randomization"),
        FirtoolOption("--strip-debug-info"))
    )
  }
}

//        --split-verilog
