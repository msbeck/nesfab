#ifndef SSA_OP_HPP
#define SSA_OP_HPP

#include <array>
#include <ostream>
#include <string_view>

// SSA flags:
constexpr unsigned SSAF_TRACE_INPUTS = 1 << 0;

enum ssa_op_t : short
{
#define SSA_DEF(x, ...) SSA_##x,
#include "ssa_op.inc"
    NUM_SSA_OPS,
};

extern std::array<signed char, NUM_SSA_OPS> const ssa_argn_table;
[[gnu::pure]]
inline unsigned ssa_argn(ssa_op_t op) { return ssa_argn_table[op]; }

extern std::array<unsigned, NUM_SSA_OPS> const ssa_flags_table;
[[gnu::pure]]
inline unsigned ssa_flags(ssa_op_t op) { return ssa_flags_table[op]; }

std::string_view to_string(ssa_op_t node_type);
std::ostream& operator<<(std::ostream& o, ssa_op_t node_type);

#endif