#define OP(name, mode) .op=name##_##mode, .op_name=name, .addr_mode=MODE_##mode

extern constexpr op_def_t op_defs_table[NUM_OPS] =
{
    // BAD_OP
    {
        .op = BAD_OP,
    },

    // ADC
    {
        OP(ADC, IMMEDIATE),
        .op_code = 105,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A | REG_C,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(ADC, ZERO_PAGE),
        .op_code = 101,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A | REG_C,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(ADC, ZERO_PAGE_X),
        .op_code = 117,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A | REG_C | REG_X,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(ADC, ABSOLUTE),
        .op_code = 109,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_A | REG_C,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(ADC, ABSOLUTE_X),
        .op_code = 125,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_A | REG_C | REG_X,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(ADC, ABSOLUTE_Y),
        .op_code = 121,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_A | REG_C | REG_Y,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(ADC, INDIRECT_X),
        .op_code = 97,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A | REG_C | REG_X,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(ADC, INDIRECT_Y),
        .op_code = 113,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A | REG_C | REG_Y,
        .output_regs = REG_A | REG_C,
    },

    // AND
    {
        OP(AND, IMMEDIATE),
        .op_code = 41,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A,
        .output_regs = REG_A,
    },
    {
        OP(AND, ZERO_PAGE),
        .op_code = 37,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A,
        .output_regs = REG_A,
    },
    {
        OP(AND, ZERO_PAGE_X),
        .op_code = 53,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A | REG_X,
        .output_regs = REG_A,
    },
    {
        OP(AND, ABSOLUTE),
        .op_code = 45,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_A,
        .output_regs = REG_A,
    },
    {
        OP(AND, ABSOLUTE_X),
        .op_code = 61,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_A | REG_X,
        .output_regs = REG_A,
    },
    {
        OP(AND, ABSOLUTE_Y),
        .op_code = 57,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_A | REG_Y,
        .output_regs = REG_A,
    },
    {
        OP(AND, INDIRECT_X),
        .op_code = 33,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A | REG_X,
        .output_regs = REG_A,
    },
    {
        OP(AND, INDIRECT_Y),
        .op_code = 49,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A | REG_Y,
        .output_regs = REG_A,
    },

    // ASL
    {
        OP(ASL, IMPLIED),
        .op_code = 10,
        .size = 1,
        .cycles = 1,
        .input_regs = REG_A,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(ASL, ZERO_PAGE),
        .op_code = 6,
        .size = 2,
        .cycles = 2,
        .input_regs = 0,
        .output_regs = REG_C,
    },
    {
        OP(ASL, ZERO_PAGE_X),
        .op_code = 22,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_X,
        .output_regs = REG_C,
    },
    {
        OP(ASL, ABSOLUTE),
        .op_code = 14,
        .size = 3,
        .cycles = 3,
        .input_regs = 0,
        .output_regs = REG_C,
    },
    {
        OP(ASL, ABSOLUTE_X),
        .op_code = 30,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_X,
        .output_regs = REG_C,
    },

    // BCC
    {
        OP(BCC, RELATIVE),
        .op_code = 144,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_C,
        .output_regs = 0,
    },

    // BCS
    {
        OP(BCS, RELATIVE),
        .op_code = 176,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_C,
        .output_regs = 0,
    },

    // BEQ
    {
        OP(BEQ, RELATIVE),
        .op_code = 240,
        .size = 2,
        .cycles = 2,
        .input_regs = 0,
        .output_regs = 0,
    },

    // BIT
    {
        OP(BIT, ZERO_PAGE),
        .op_code = 36,
        .size = 2,
        .cycles = 2,
        .input_regs = 0,
        .output_regs = 0,
    },
    {
        OP(BIT, ABSOLUTE),
        .op_code = 44,
        .size = 3,
        .cycles = 3,
        .input_regs = 0,
        .output_regs = 0,
    },

    // BMI
    {
        OP(BMI, RELATIVE),
        .op_code = 48,
        .size = 2,
        .cycles = 2,
        .input_regs = 0,
        .output_regs = 0,
    },

    // BNE
    {
        OP(BNE, RELATIVE),
        .op_code = 208,
        .size = 2,
        .cycles = 2,
        .input_regs = 0,
        .output_regs = 0,
    },

    // BPL
    {
        OP(BPL, RELATIVE),
        .op_code = 16,
        .size = 2,
        .cycles = 2,
        .input_regs = 0,
        .output_regs = 0,
    },

    // BRK
    {
        OP(BRK, IMPLIED),
        .op_code = 0,
        .size = 1,
        .cycles = 1,
        .input_regs = 0,
        .output_regs = 0,
    },

    // BVC
    {
        OP(BVC, RELATIVE),
        .op_code = 80,
        .size = 2,
        .cycles = 2,
        .input_regs = 0,
        .output_regs = 0,
    },

    // BVS
    {
        OP(BVS, RELATIVE),
        .op_code = 112,
        .size = 2,
        .cycles = 2,
        .input_regs = 0,
        .output_regs = 0,
    },

    // CLC
    {
        OP(CLC, IMPLIED),
        .op_code = 24,
        .size = 1,
        .cycles = 1,
        .input_regs = 0,
        .output_regs = REG_C,
    },

    // CLD
    {
        OP(CLD, IMPLIED),
        .op_code = 216,
        .size = 1,
        .cycles = 1,
        .input_regs = 0,
        .output_regs = 0,
    },

    // CLI
    {
        OP(CLI, IMPLIED),
        .op_code = 88,
        .size = 1,
        .cycles = 1,
        .input_regs = 0,
        .output_regs = 0,
    },

    // CLV
    {
        OP(CLV, IMPLIED),
        .op_code = 184,
        .size = 1,
        .cycles = 1,
        .input_regs = 0,
        .output_regs = 0,
    },

    // CMP
    {
        OP(CMP, IMMEDIATE),
        .op_code = 201,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A,
        .output_regs = REG_C,
    },
    {
        OP(CMP, ZERO_PAGE),
        .op_code = 197,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A,
        .output_regs = REG_C,
    },
    {
        OP(CMP, ZERO_PAGE_X),
        .op_code = 213,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A | REG_X,
        .output_regs = REG_C,
    },
    {
        OP(CMP, ABSOLUTE),
        .op_code = 205,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_A,
        .output_regs = REG_C,
    },
    {
        OP(CMP, ABSOLUTE_X),
        .op_code = 221,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_A | REG_X,
        .output_regs = REG_C,
    },
    {
        OP(CMP, ABSOLUTE_Y),
        .op_code = 217,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_A | REG_Y,
        .output_regs = REG_C,
    },
    {
        OP(CMP, INDIRECT_X),
        .op_code = 193,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A | REG_X,
        .output_regs = REG_C,
    },
    {
        OP(CMP, INDIRECT_Y),
        .op_code = 209,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A | REG_Y,
        .output_regs = REG_C,
    },

    // CPX
    {
        OP(CPX, IMMEDIATE),
        .op_code = 224,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_X,
        .output_regs = REG_C,
    },
    {
        OP(CPX, ZERO_PAGE),
        .op_code = 228,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_X,
        .output_regs = REG_C,
    },
    {
        OP(CPX, ABSOLUTE),
        .op_code = 236,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_X,
        .output_regs = REG_C,
    },

    // CPY
    {
        OP(CPY, IMMEDIATE),
        .op_code = 192,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_Y,
        .output_regs = REG_C,
    },
    {
        OP(CPY, ZERO_PAGE),
        .op_code = 196,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_Y,
        .output_regs = REG_C,
    },
    {
        OP(CPY, ABSOLUTE),
        .op_code = 204,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_Y,
        .output_regs = REG_C,
    },

    // DEC
    {
        OP(DEC, ZERO_PAGE),
        .op_code = 198,
        .size = 2,
        .cycles = 2,
        .input_regs = 0,
        .output_regs = 0,
    },
    {
        OP(DEC, ZERO_PAGE_X),
        .op_code = 214,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_X,
        .output_regs = 0,
    },
    {
        OP(DEC, ABSOLUTE),
        .op_code = 206,
        .size = 3,
        .cycles = 3,
        .input_regs = 0,
        .output_regs = 0,
    },
    {
        OP(DEC, ABSOLUTE_X),
        .op_code = 222,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_X,
        .output_regs = 0,
    },

    // DEX
    {
        OP(DEX, IMPLIED),
        .op_code = 202,
        .size = 1,
        .cycles = 1,
        .input_regs = REG_X,
        .output_regs = REG_X,
    },

    // DEY
    {
        OP(DEY, IMPLIED),
        .op_code = 136,
        .size = 1,
        .cycles = 1,
        .input_regs = REG_Y,
        .output_regs = REG_Y,
    },

    // EOR
    {
        OP(EOR, IMMEDIATE),
        .op_code = 73,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A,
        .output_regs = REG_A,
    },
    {
        OP(EOR, ZERO_PAGE),
        .op_code = 69,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A,
        .output_regs = REG_A,
    },
    {
        OP(EOR, ZERO_PAGE_X),
        .op_code = 85,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A | REG_X,
        .output_regs = REG_A,
    },
    {
        OP(EOR, ABSOLUTE),
        .op_code = 77,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_A,
        .output_regs = REG_A,
    },
    {
        OP(EOR, ABSOLUTE_X),
        .op_code = 93,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_A | REG_X,
        .output_regs = REG_A,
    },
    {
        OP(EOR, ABSOLUTE_Y),
        .op_code = 89,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_A | REG_Y,
        .output_regs = REG_A,
    },
    {
        OP(EOR, INDIRECT_X),
        .op_code = 65,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A | REG_X,
        .output_regs = REG_A,
    },
    {
        OP(EOR, INDIRECT_Y),
        .op_code = 81,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A | REG_Y,
        .output_regs = REG_A,
    },

    // INC
    {
        OP(INC, ZERO_PAGE),
        .op_code = 230,
        .size = 2,
        .cycles = 2,
        .input_regs = 0,
        .output_regs = 0,
    },
    {
        OP(INC, ZERO_PAGE_X),
        .op_code = 246,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_X,
        .output_regs = 0,
    },
    {
        OP(INC, ABSOLUTE),
        .op_code = 238,
        .size = 3,
        .cycles = 3,
        .input_regs = 0,
        .output_regs = 0,
    },
    {
        OP(INC, ABSOLUTE_X),
        .op_code = 254,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_X,
        .output_regs = 0,
    },

    // INX
    {
        OP(INX, IMPLIED),
        .op_code = 232,
        .size = 1,
        .cycles = 1,
        .input_regs = REG_X,
        .output_regs = REG_X,
    },

    // INY
    {
        OP(INY, IMPLIED),
        .op_code = 200,
        .size = 1,
        .cycles = 1,
        .input_regs = REG_Y,
        .output_regs = REG_Y,
    },

    // JMP
    {
        OP(JMP, ABSOLUTE),
        .op_code = 76,
        .size = 3,
        .cycles = 3,
        .input_regs = 0,
        .output_regs = 0,
    },
    {
        OP(JMP, INDIRECT),
        .op_code = 108,
        .size = 3,
        .cycles = 3,
        .input_regs = 0,
        .output_regs = 0,
    },

    // JSR
    {
        OP(JSR, ABSOLUTE),
        .op_code = 32,
        .size = 3,
        .cycles = 3,
        .input_regs = 0,
        .output_regs = 0,
    },

    // LDA
    {
        OP(LDA, IMMEDIATE),
        .op_code = 169,
        .size = 2,
        .cycles = 2,
        .input_regs = 0,
        .output_regs = REG_A,
    },
    {
        OP(LDA, ZERO_PAGE),
        .op_code = 165,
        .size = 2,
        .cycles = 2,
        .input_regs = 0,
        .output_regs = REG_A,
    },
    {
        OP(LDA, ZERO_PAGE_X),
        .op_code = 181,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_X,
        .output_regs = REG_A,
    },
    {
        OP(LDA, ABSOLUTE),
        .op_code = 173,
        .size = 3,
        .cycles = 3,
        .input_regs = 0,
        .output_regs = REG_A,
    },
    {
        OP(LDA, ABSOLUTE_X),
        .op_code = 189,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_X,
        .output_regs = REG_A,
    },
    {
        OP(LDA, ABSOLUTE_Y),
        .op_code = 185,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_Y,
        .output_regs = REG_A,
    },
    {
        OP(LDA, INDIRECT_X),
        .op_code = 161,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_X,
        .output_regs = REG_A,
    },
    {
        OP(LDA, INDIRECT_Y),
        .op_code = 177,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_Y,
        .output_regs = REG_A,
    },

    // LDX
    {
        OP(LDX, IMMEDIATE),
        .op_code = 162,
        .size = 2,
        .cycles = 2,
        .input_regs = 0,
        .output_regs = REG_X,
    },
    {
        OP(LDX, ZERO_PAGE),
        .op_code = 166,
        .size = 2,
        .cycles = 2,
        .input_regs = 0,
        .output_regs = REG_X,
    },
    {
        OP(LDX, ZERO_PAGE_Y),
        .op_code = 182,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_Y,
        .output_regs = REG_X,
    },
    {
        OP(LDX, ABSOLUTE),
        .op_code = 174,
        .size = 3,
        .cycles = 3,
        .input_regs = 0,
        .output_regs = REG_X,
    },
    {
        OP(LDX, ABSOLUTE_Y),
        .op_code = 190,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_Y,
        .output_regs = REG_X,
    },

    // LDY
    {
        OP(LDY, IMMEDIATE),
        .op_code = 160,
        .size = 2,
        .cycles = 2,
        .input_regs = 0,
        .output_regs = REG_Y,
    },
    {
        OP(LDY, ZERO_PAGE),
        .op_code = 164,
        .size = 2,
        .cycles = 2,
        .input_regs = 0,
        .output_regs = REG_Y,
    },
    {
        OP(LDY, ZERO_PAGE_X),
        .op_code = 180,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_X,
        .output_regs = REG_Y,
    },
    {
        OP(LDY, ABSOLUTE),
        .op_code = 172,
        .size = 3,
        .cycles = 3,
        .input_regs = 0,
        .output_regs = REG_Y,
    },
    {
        OP(LDY, ABSOLUTE_X),
        .op_code = 188,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_X,
        .output_regs = REG_Y,
    },

    // LSR
    {
        OP(LSR, IMPLIED),
        .op_code = 74,
        .size = 1,
        .cycles = 1,
        .input_regs = REG_A,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(LSR, ZERO_PAGE),
        .op_code = 70,
        .size = 2,
        .cycles = 2,
        .input_regs = 0,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(LSR, ZERO_PAGE_X),
        .op_code = 86,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_X,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(LSR, ABSOLUTE),
        .op_code = 78,
        .size = 3,
        .cycles = 3,
        .input_regs = 0,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(LSR, ABSOLUTE_X),
        .op_code = 94,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_X,
        .output_regs = REG_A | REG_C,
    },

    // NOP
    {
        OP(NOP, IMPLIED),
        .op_code = 234,
        .size = 1,
        .cycles = 1,
        .input_regs = 0,
        .output_regs = 0,
    },

    // ORA
    {
        OP(ORA, IMMEDIATE),
        .op_code = 9,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A,
        .output_regs = REG_A,
    },
    {
        OP(ORA, ZERO_PAGE),
        .op_code = 5,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A,
        .output_regs = REG_A,
    },
    {
        OP(ORA, ZERO_PAGE_X),
        .op_code = 21,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A | REG_X,
        .output_regs = REG_A,
    },
    {
        OP(ORA, ABSOLUTE),
        .op_code = 13,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_A,
        .output_regs = REG_A,
    },
    {
        OP(ORA, ABSOLUTE_X),
        .op_code = 29,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_A | REG_X,
        .output_regs = REG_A,
    },
    {
        OP(ORA, ABSOLUTE_Y),
        .op_code = 25,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_A | REG_Y,
        .output_regs = REG_A,
    },
    {
        OP(ORA, INDIRECT_X),
        .op_code = 1,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A | REG_X,
        .output_regs = REG_A,
    },
    {
        OP(ORA, INDIRECT_Y),
        .op_code = 17,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A | REG_Y,
        .output_regs = REG_A,
    },

    // PHA
    {
        OP(PHA, IMPLIED),
        .op_code = 72,
        .size = 1,
        .cycles = 1,
        .input_regs = REG_A,
        .output_regs = 0,
    },

    // PHP
    {
        OP(PHP, IMPLIED),
        .op_code = 8,
        .size = 1,
        .cycles = 1,
        .input_regs = REG_C,
        .output_regs = 0,
    },

    // PLA
    {
        OP(PLA, IMPLIED),
        .op_code = 104,
        .size = 1,
        .cycles = 1,
        .input_regs = 0,
        .output_regs = REG_A,
    },

    // PLP
    {
        OP(PLP, IMPLIED),
        .op_code = 40,
        .size = 1,
        .cycles = 1,
        .input_regs = 0,
        .output_regs = REG_C,
    },

    // ROL
    {
        OP(ROL, IMPLIED),
        .op_code = 42,
        .size = 1,
        .cycles = 1,
        .input_regs = REG_A | REG_C,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(ROL, ZERO_PAGE),
        .op_code = 38,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_C,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(ROL, ZERO_PAGE_X),
        .op_code = 54,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_C | REG_X,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(ROL, ABSOLUTE),
        .op_code = 46,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_C,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(ROL, ABSOLUTE_X),
        .op_code = 62,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_C | REG_X,
        .output_regs = REG_A | REG_C,
    },

    // ROR
    {
        OP(ROR, IMPLIED),
        .op_code = 106,
        .size = 1,
        .cycles = 1,
        .input_regs = REG_A | REG_C,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(ROR, ZERO_PAGE),
        .op_code = 102,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_C,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(ROR, ZERO_PAGE_X),
        .op_code = 118,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_C | REG_X,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(ROR, ABSOLUTE),
        .op_code = 110,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_C,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(ROR, ABSOLUTE_X),
        .op_code = 126,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_C | REG_X,
        .output_regs = REG_A | REG_C,
    },

    // RTI
    {
        OP(RTI, IMPLIED),
        .op_code = 64,
        .size = 1,
        .cycles = 1,
        .input_regs = 0,
        .output_regs = 0,
    },

    // RTS
    {
        OP(RTS, IMPLIED),
        .op_code = 96,
        .size = 1,
        .cycles = 1,
        .input_regs = 0,
        .output_regs = 0,
    },

    // SBC
    {
        OP(SBC, IMMEDIATE),
        .op_code = 233,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A | REG_C,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(SBC, ZERO_PAGE),
        .op_code = 229,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A | REG_C,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(SBC, ZERO_PAGE_X),
        .op_code = 245,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A | REG_C | REG_X,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(SBC, ABSOLUTE),
        .op_code = 237,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_A | REG_C,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(SBC, ABSOLUTE_X),
        .op_code = 253,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_A | REG_C | REG_X,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(SBC, ABSOLUTE_Y),
        .op_code = 249,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_A | REG_C | REG_Y,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(SBC, INDIRECT_X),
        .op_code = 225,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A | REG_C | REG_X,
        .output_regs = REG_A | REG_C,
    },
    {
        OP(SBC, INDIRECT_Y),
        .op_code = 241,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_A | REG_C | REG_Y,
        .output_regs = REG_A | REG_C,
    },

    // SEC
    {
        OP(SEC, IMPLIED),
        .op_code = 56,
        .size = 1,
        .cycles = 1,
        .input_regs = 0,
        .output_regs = REG_C,
    },

    // SED
    {
        OP(SED, IMPLIED),
        .op_code = 248,
        .size = 1,
        .cycles = 1,
        .input_regs = 0,
        .output_regs = 0,
    },

    // SEI
    {
        OP(SEI, IMPLIED),
        .op_code = 120,
        .size = 1,
        .cycles = 1,
        .input_regs = 0,
        .output_regs = 0,
    },

    // STA
    {
        OP(STA, ZERO_PAGE),
        .op_code = 133,
        .size = 2,
        .cycles = 2,
        .input_regs = 0,
        .output_regs = REG_A,
    },
    {
        OP(STA, ZERO_PAGE_X),
        .op_code = 149,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_X,
        .output_regs = REG_A,
    },
    {
        OP(STA, ABSOLUTE),
        .op_code = 141,
        .size = 3,
        .cycles = 3,
        .input_regs = 0,
        .output_regs = REG_A,
    },
    {
        OP(STA, ABSOLUTE_X),
        .op_code = 157,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_X,
        .output_regs = REG_A,
    },
    {
        OP(STA, ABSOLUTE_Y),
        .op_code = 153,
        .size = 3,
        .cycles = 3,
        .input_regs = REG_Y,
        .output_regs = REG_A,
    },
    {
        OP(STA, INDIRECT_X),
        .op_code = 129,
        .size = 2,
        .cycles = 2,
        .input_regs = 0 | REG_X,
        .output_regs = REG_A,
    },
    {
        OP(STA, INDIRECT_Y),
        .op_code = 145,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_Y,
        .output_regs = REG_A,
    },

    // STX
    {
        OP(STX, ZERO_PAGE),
        .op_code = 134,
        .size = 2,
        .cycles = 2,
        .input_regs = 0,
        .output_regs = REG_X,
    },
    {
        OP(STX, ZERO_PAGE_Y),
        .op_code = 150,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_Y,
        .output_regs = REG_X,
    },
    {
        OP(STX, ABSOLUTE),
        .op_code = 142,
        .size = 3,
        .cycles = 3,
        .input_regs = 0,
        .output_regs = REG_X,
    },

    // STY
    {
        OP(STY, ZERO_PAGE),
        .op_code = 132,
        .size = 2,
        .cycles = 2,
        .input_regs = 0,
        .output_regs = REG_Y,
    },
    {
        OP(STY, ZERO_PAGE_X),
        .op_code = 148,
        .size = 2,
        .cycles = 2,
        .input_regs = REG_X,
        .output_regs = REG_Y,
    },
    {
        OP(STY, ABSOLUTE),
        .op_code = 140,
        .size = 3,
        .cycles = 3,
        .input_regs = 0,
        .output_regs = REG_Y,
    },

    // TAX
    {
        OP(TAX, IMPLIED),
        .op_code = 170,
        .size = 1,
        .cycles = 1,
        .input_regs = REG_A,
        .output_regs = REG_X,
    },

    // TAY
    {
        OP(TAY, IMPLIED),
        .op_code = 168,
        .size = 1,
        .cycles = 1,
        .input_regs = REG_A,
        .output_regs = REG_Y,
    },

    // TSX
    {
        OP(TSX, IMPLIED),
        .op_code = 186,
        .size = 1,
        .cycles = 1,
        .input_regs = 0,
        .output_regs = REG_X,
    },

    // TXA
    {
        OP(TXA, IMPLIED),
        .op_code = 138,
        .size = 1,
        .cycles = 1,
        .input_regs = REG_X,
        .output_regs = REG_A,
    },

    // TXS
    {
        OP(TXS, IMPLIED),
        .op_code = 154,
        .size = 1,
        .cycles = 1,
        .input_regs = REG_X,
        .output_regs = 0,
    },

    // TYA
    {
        OP(TYA, IMPLIED),
        .op_code = 152,
        .size = 1,
        .cycles = 1,
        .input_regs = REG_Y,
        .output_regs = REG_A,
    },

};

#undef OP
