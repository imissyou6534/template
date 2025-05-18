import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class TopTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "Top"
  it should "get right results" in {
    test(new Top) { c => 
      c.io.a.poke(1.U)
      c.io.b.poke(2.U)
      c.io.out.expect(3.U)
      c.clock.step(1)
      c.io.a.poke(4.U)
      c.io.b.poke(8.U)
      c.io.out.expect(12.U)
      c.clock.step(1)
    }
    println("SUCCESS!!")
  }
}
