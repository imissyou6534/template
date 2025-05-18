module top 
(
  input         clock,
  input         reset,
  output        resize_load,
  output        yolo_finish,
  output        conv_finish,
  output [31:0] dma_raddr,
  output        dma_rareq,
  output [15:0] dma_rsize,
  input         dma_rbusy,
  input  [63:0] dma_rdata,
  input         dma_rvalid,
  output        dma_rready,
  output [31:0] dma_waddr,
  output        dma_wareq,
  output [15:0] dma_wsize,
  input         dma_wbusy,
  output [63:0] dma_wdata,
  output        dma_wvalid,
  input         dma_wready
);


wire        io_resize_load;
wire        io_yolo_finish;
wire        io_conv_finish;
wire [31:0] io_dma_raddr  ;
wire        io_dma_rareq  ;
wire [15:0] io_dma_rsize  ;
wire        io_dma_rbusy  ;
wire [63:0] io_dma_rdata  ;
wire        io_dma_rvalid ;
wire        io_dma_rready ;  
wire [31:0] io_dma_waddr  ;
wire        io_dma_wareq  ;
wire [15:0] io_dma_wsize  ;
wire        io_dma_wbusy  ;
wire [63:0] io_dma_wdata  ;
wire        io_dma_wvalid ;
wire        io_dma_wready ;





// in
reg        r_io_dma_rbusy ;
reg [63:0] r_io_dma_rdata ;
reg        r_io_dma_rvalid;
reg        r_io_dma_wbusy ;
reg        r_io_dma_wready;
wire         io_dma_rbusy ;
wire  [63:0] io_dma_rdata ;
wire         io_dma_rvalid;
wire         io_dma_wbusy ;
wire         io_dma_wready;
always @(posedge clock) begin
  if(reset) begin
    r_io_dma_rbusy <='d0;
    r_io_dma_rdata <='d0;
    r_io_dma_rvalid<='d0;
    r_io_dma_wbusy <='d0;
    r_io_dma_wready<='d0;
  end
  else begin
    r_io_dma_rbusy <=dma_rbusy ;
    r_io_dma_rdata <=dma_rdata ;
    r_io_dma_rvalid<=dma_rvalid;
    r_io_dma_wbusy <=dma_wbusy ;
    r_io_dma_wready<=dma_wready;
  end
end
// out
assign io_dma_rbusy  = r_io_dma_rbusy ;
assign io_dma_rdata  = r_io_dma_rdata ;
assign io_dma_rvalid = r_io_dma_rvalid;
assign io_dma_wbusy  = r_io_dma_wbusy ;
assign io_dma_wready = r_io_dma_wready;

assign resize_load =  io_resize_load;
assign yolo_finish =  io_yolo_finish;
assign conv_finish =  io_conv_finish;
assign dma_raddr   =  io_dma_raddr  ;
assign dma_rareq   =  io_dma_rareq  ;
assign dma_rsize   =  io_dma_rsize  ;
assign dma_rready  =  io_dma_rready ;
assign dma_waddr   =  io_dma_waddr  ;
assign dma_wareq   =  io_dma_wareq  ;
assign dma_wsize   =  io_dma_wsize  ;
assign dma_wdata   =  io_dma_wdata  ;
assign dma_wvalid  =  io_dma_wvalid ;



Accel_all u_Accel_all(
  .clock          (clock         ),
  .reset          (reset         ),
  .io_resize_load (io_resize_load),
  .io_yolo_finish (io_yolo_finish),
  .io_conv_finish (io_conv_finish),
  .io_dma_raddr   (io_dma_raddr  ),
  .io_dma_rareq   (io_dma_rareq  ),
  .io_dma_rsize   (io_dma_rsize  ),
  .io_dma_rbusy   (io_dma_rbusy  ),
  .io_dma_rdata   (io_dma_rdata  ),
  .io_dma_rvalid  (io_dma_rvalid ),
  .io_dma_rready  (io_dma_rready ),
  .io_dma_waddr   (io_dma_waddr  ),
  .io_dma_wareq   (io_dma_wareq  ),
  .io_dma_wsize   (io_dma_wsize  ),
  .io_dma_wbusy   (io_dma_wbusy  ),
  .io_dma_wdata   (io_dma_wdata  ),
  .io_dma_wvalid  (io_dma_wvalid ),
  .io_dma_wready  (io_dma_wready )
);
endmodule

