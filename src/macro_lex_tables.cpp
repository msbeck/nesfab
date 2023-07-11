#include "macro_lex_tables.hpp"
namespace macro_lex
{
extern unsigned const lexer_ec_table[256] = {
    0, 61, 61, 61, 61, 61, 61, 61, 61, 61, 122, 61, 61, 183, 61, 61,
    61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
    61, 61, 244, 305, 61, 61, 61, 366, 61, 61, 427, 61, 61, 488, 61, 549,
    610, 610, 610, 610, 610, 610, 610, 610, 610, 610, 671, 61, 61, 732, 61, 61,
    61, 793, 793, 793, 793, 793, 793, 793, 793, 793, 793, 793, 793, 793, 793, 793,
    793, 793, 793, 793, 793, 793, 793, 793, 793, 793, 793, 61, 61, 61, 61, 610,
    854, 915, 915, 915, 915, 915, 915, 915, 915, 915, 915, 915, 915, 915, 915, 915,
    915, 915, 915, 915, 915, 915, 915, 915, 915, 915, 915, 61, 61, 61, 61, 61,
    61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
    61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
    61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
    61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
    61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
    61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
    61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
    61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
};
extern token_type_t const lexer_transition_table[976] = {

    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 33, 0, 0,
    0, 1, 3, 0, 4, 0, 2, 8, 7, 0, 9, 0, 5, 5, 5, 0,
    10, 0, 0, 12, 0, 0, 13, 0, 0, 0, 11, 16, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 1, 3,
    0, 4, 0, 2, 8, 7, 0, 9, 0, 5, 5, 5, 0, 10, 0, 0,
    12, 0, 0, 13, 0, 0, 0, 11, 16, 6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 1, 3, 0, 4, 0,
    2, 8, 7, 0, 9, 0, 5, 5, 44, 0, 10, 0, 0, 12, 0, 0,
    13, 0, 0, 0, 11, 16, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 46, 0, 0, 0, 0, 0, 1, 3, 0, 4, 0, 2, 8, 7,
    0, 9, 0, 5, 44, 5, 0, 10, 0, 0, 12, 0, 0, 13, 0, 0,
    0, 11, 16, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 32, 32, 0, 0, 0, 0, 0, 0, 0, 27,
    0, 34, 0, 0, 0, 1, 3, 30, 4, 0, 2, 8, 7, 0, 9, 0,
    5, 5, 5, 0, 10, 0, 0, 12, 0, 0, 13, 0, 0, 0, 11, 16,
    6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    40, 16, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 27, 0, 35, 0,
    0, 39, 1, 3, 0, 4, 0, 2, 8, 7, 42, 9, 0, 5, 5, 5,
    48, 10, 0, 51, 12, 0, 54, 13, 0, 0, 58, 11, 16, 6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 16, 41,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 36, 0, 0, 0, 1,
    3, 31, 4, 0, 2, 8, 7, 0, 9, 0, 5, 5, 5, 0, 10, 0,
    0, 12, 0, 0, 13, 0, 0, 0, 11, 16, 6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 1, 3, 0, 4,
    16, 2, 8, 7, 0, 9, 0, 5, 5, 5, 0, 10, 0, 0, 12, 0,
    0, 13, 0, 0, 0, 11, 16, 6, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 27, 0, 0, 0, 0, 0, 1, 3, 20, 4, 0, 2, 8,
    7, 0, 9, 0, 5, 5, 5, 0, 10, 0, 0, 12, 0, 0, 13, 57,
    57, 0, 11, 16, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    27, 0, 37, 0, 0, 0, 1, 3, 0, 4, 27, 2, 8, 7, 0, 9,
    0, 5, 5, 5, 0, 10, 0, 0, 12, 0, 0, 13, 0, 0, 0, 11,
    60, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 15, 16, 17, 18, 19, 0, 0, 0, 23, 0, 25, 26, 27, 28, 0,
    0, 0, 0, 1, 3, 0, 4, 0, 2, 8, 7, 0, 9, 43, 5, 5,
    5, 0, 10, 49, 0, 12, 52, 0, 13, 55, 56, 0, 11, 16, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0,
    1, 3, 21, 4, 0, 2, 8, 7, 0, 9, 53, 5, 5, 5, 0, 10,
    0, 0, 12, 53, 0, 13, 0, 0, 0, 11, 16, 6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 50, 27, 0, 0, 0, 0, 0, 1, 3, 22,
    4, 0, 2, 8, 7, 0, 9, 0, 5, 5, 5, 0, 10, 50, 0, 12,
    0, 0, 13, 0, 0, 0, 11, 16, 6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 14, 15, 16, 0, 0, 19, 55, 52, 49,
    0, 28, 0, 0, 27, 28, 0, 19, 14, 0, 1, 3, 15, 4, 0, 2,
    8, 7, 0, 9, 0, 5, 5, 5, 0, 10, 49, 0, 12, 52, 0, 13,
    55, 0, 0, 11, 16, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 47, 0, 0,
    0, 27, 47, 38, 0, 0, 0, 1, 3, 24, 4, 0, 2, 8, 7, 0,
    9, 0, 5, 5, 5, 0, 10, 0, 0, 12, 0, 0, 13, 0, 0, 0,
    11, 16, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 16, 17, 18, 0, 56, 43, 26, 23, 23, 25, 26, 27, 0,
    0, 18, 17, 0, 1, 3, 25, 4, 0, 2, 8, 7, 0, 9, 43, 5,
    5, 5, 0, 10, 0, 0, 12, 0, 0, 13, 0, 56, 0, 11, 16, 6,
};
} // namespace macro_lex
