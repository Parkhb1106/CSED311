module alu #(parameter data_width = 32) (input [5 : 0] alu_op,      // input
                                         input [data_width - 1 : 0] A,    // input  alu_in_1
                                         input [data_width - 1 : 0] B,    // input  alu_in_2
                                         output reg [data_width - 1 : 0] C,  // output  alu_result
                                         output reg alu_bcond);    // output

wire [3:0] FuncCode;
wire [1:0] btype;
assign FuncCode = alu_op[5:2];
assign btype = alu_op[1:0];

always @(*) begin
    case (FuncCode)
        4'b0000 : C = A + B; // ADD
		4'b0001 : C = A - B; // SUB
        4'b0010 : C = A; // ID
        4'b0011 : C = ~A; // NOT
        4'b0100 : C = A & B; // AND
        4'b0101 : C = A | B; // OR
        4'b0110 : C = ~(A & B); // NAND
        4'b0111 : C = ~(A | B); // NOR
        4'b1000 : C = A ^ B; // XOR
        4'b1001 : C = A ~^ B; // XNOR
        4'b1010 : C = A << B; // Logical Left Shift
        4'b1011 : C = A >> B; // Logical Right Shift
        4'b1100 : C = A <<< B; // Arithmetic Left Shift
        4'b1101 : C = A >>> B; // Arithmetic Right Shift
        4'b1110 : C = ~A + 1; // Two's Complement
        4'b1111 : C = 0; // Zero
        default: C = 0;
    endcase
    alu_bcond = 0;
    case (btype)
        `EQ : begin
            if (C == 0) begin
                alu_bcond = 1;
            end
        end
		`NE : begin
            if (C != 0) begin
                alu_bcond = 1;
            end
        end
        `GE : begin
            if ($signed(C) >= 0) begin
                alu_bcond = 1;
            end
        end
        `LT : begin
            if ($signed(C) < 0) begin
                alu_bcond = 1;
            end
        end
        default : alu_bcond = 0;
    endcase
end

endmodule
