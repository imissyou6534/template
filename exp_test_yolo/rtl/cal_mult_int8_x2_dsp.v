(*use_dsp="yes"*)
module cal_mult_int8_x2_dsp
(
	input clk,
	input signed [7:0]a,
	input signed [7:0]b,
	input signed [7:0]c,
	
	output signed [15:0]ac,
	output signed [15:0]bc
);
	wire signed [23:0]A_PORT;
	wire signed [23:0]D_PORT;
	wire signed [15:0]B_PORT;
	
	reg signed [23:0]A_PORT_REG;
	reg signed [23:0]D_PORT_REG;
	reg signed [15:0]B_PORT_REG_1;
	reg signed [15:0]B_PORT_REG_2;
	reg signed [24:0]A_Plus_D;
	reg signed [40:0]MULT_RES;
	reg signed [40:0]DOUT;
	
	assign A_PORT={a[7:0],{16{1'b0}}};
	assign D_PORT={{16{b[7]}},b[7:0]};
	assign B_PORT={{8{c[7]}},c[7:0]};
	
	always@(posedge clk) begin
		A_PORT_REG<=A_PORT;
		D_PORT_REG<=D_PORT;
		B_PORT_REG_1<=B_PORT;
		B_PORT_REG_2<=B_PORT_REG_1;
		A_Plus_D<=A_PORT_REG+D_PORT_REG;
		MULT_RES<=A_Plus_D*B_PORT_REG_2;
		DOUT<=MULT_RES;
	end
	assign ac=DOUT[31:16];
	assign bc=DOUT[15:0];
endmodule
