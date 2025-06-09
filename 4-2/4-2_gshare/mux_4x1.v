module mux_4x1 #(parameter data_width = 32) (input [data_width - 1 : 0] in_1,    // input
                                         input [data_width - 1 : 0] in_2,    // input
                                         input [data_width - 1 : 0] in_3,   // input
                                         input [data_width - 1 : 0] in_4,   //input
                                         input [1:0] ctrl,                      //control input
                                         output reg [data_width - 1 : 0] out  ); // output
    always @(*) begin
        if (ctrl == 2'b00) begin
            out = in_1;
        end
        
        else if (ctrl == 2'b01) begin
            out = in_2;
        end

        else if (ctrl == 2'b10) begin
            out = in_3;
        end

        else begin
            out = in_4;
        end
    end

endmodule
