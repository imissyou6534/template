import chisel3._
import chisel3.util._
import chisel3.experimental._

class Mux21(width:Int) extends BlackBox(
    Map("WIDTH" -> width)
) with HasBlackBoxResource  {
    val io = IO(new Bundle {
        val a = Input(UInt(width.W))
        val b = Input(UInt(width.W))
        val sel = Input(UInt(1.W))
        val q = Output(UInt(width.W))
    })

    addResource("Mux21.v")

}

object Mux21 {
    def apply(data_width: Int) = Module(new Mux21(data_width)).io
}

class Mux21_Over(data_width:Int) extends Module {
    val io = IO(new Bundle {
        val in_a = Input(UInt(data_width.W))
        val in_b = Input(UInt(data_width.W))
        val sel = Input(UInt(1.W))
        val out = Output(UInt(data_width.W))
    })

    // <> 是 Chisel 中的双向连接运算符，用于连接两个信号
    val u_mux = Module(new Mux21(data_width))
    u_mux.io.a <> io.in_a 
    u_mux.io.b <> io.in_b
    u_mux.io.sel <> io.sel 
    u_mux.io.q <> io.out


}

object Mux21_Over {
    def apply(data_width: Int) = Module(new Mux21_Over(data_width)).io
}