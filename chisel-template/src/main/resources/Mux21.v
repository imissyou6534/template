module Mux21
#(
    parameter DATA_WIDTH = 8
)
(
    input [DATA_WIDTH-1:0] a,
    input [DATA_WIDTH-1:0] b,
    input sel,
    output q
);

    assign q = sel?a:b;

endmodule