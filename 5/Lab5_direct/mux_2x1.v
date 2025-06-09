module mux_2x1 #(parameter data_width = 32) (input [data_width - 1 : 0] in_1,    // input
                                         input [data_width - 1 : 0] in_2,    // input
                                         input ctrl,                      //control input
                                         output reg [data_width - 1 : 0] out  ); // output
    always @(*) begin
        if (ctrl) begin
            out = in_2;
        end
        else begin
            out = in_1;
        end
    end

endmodule
