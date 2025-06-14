// FuncCodes
`define FUNC_ADD    4'b0000
`define FUNC_SUB    4'b0001
`define FUNC_ID     4'b0010
`define FUNC_NOT    4'b0011
`define FUNC_AND    4'b0100
`define FUNC_OR     4'b0101
`define FUNC_NAND   4'b0110
`define FUNC_NOR    4'b0111
`define FUNC_XOR    4'b1000
`define FUNC_XNOR   4'b1001
`define FUNC_LLS    4'b1010
`define FUNC_LRS    4'b1011
`define FUNC_ALS    4'b1100
`define FUNC_ARS    4'b1101
`define FUNC_TCP    4'b1110
`define FUNC_ZERO   4'b1111

// NOT_BRANCH일 경우엔 그냥 2'b00으로 설정(BRANCH(branch 여부 나타냄)와 어차피 AND gate를 지나기 때문에)
`define EQ  2'b00
`define NE  2'b01
`define GE  2'b10
`define LT  2'b11
