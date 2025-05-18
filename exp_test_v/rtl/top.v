module top 
(
  input clock,
  input reset,
  input[31:0] in1,
  input[31:0] in2,
  output[31:0] out
);
reg[31:0] r_in1;
reg[31:0] r_in2;
always @(posedge clock) begin
  if(reset)
    r_in1<=0;
  else
    r_in1<=in1;
end

always @(posedge clock) begin
  if(reset)
    r_in2<=0;
  else
    r_in2<=in2;
end
assign out = r_in1+r_in2;
endmodule

