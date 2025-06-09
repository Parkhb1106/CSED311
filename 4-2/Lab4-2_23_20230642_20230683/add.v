module add #(parameter data_width = 32) (input [data_width - 1 : 0] A,    // input
                                         input [data_width - 1 : 0] B,    // input
                                         output [data_width - 1 : 0] C);  // output

  assign C = A + B;

endmodule
