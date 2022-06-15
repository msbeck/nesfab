#ifndef LVAR_HPP
#define LVAR_HPP

#include <vector>

#include "robin/set.hpp"
#include "flat/flat_set.hpp"

#include "bitset.hpp"
#include "ram.hpp"
#include "ir_decl.hpp"
#include "locator.hpp"
#include "span.hpp"

// Tracks all vars used in assembly code, assigning them an index.
class lvars_manager_t
{
public:
    lvars_manager_t() = default;
    lvars_manager_t(fn_ht fn, ir_t const& ir);

    int index(locator_t var) const
    {
        if(auto result = m_map.lookup(var.mem_head()))
            return result - m_map.begin();
        return -1;
    }

    locator_t locator(unsigned i) const 
    { 
        assert(i < m_map.size());
        return m_map.begin()[i];
    }

    unsigned mem_size(unsigned i) const
    { 
        assert(i < m_sizes_and_zp_only.size());
        return m_sizes_and_zp_only[i] >> 1;
    }
    bool mem_zp_only(unsigned i) const
    { 
        assert(i < m_sizes_and_zp_only.size());
        return m_sizes_and_zp_only[i] & 1;
    }

    std::size_t num_this_lvars() const { return m_num_this_lvars; }
    std::size_t num_all_lvars() const { return m_map.size(); }
    std::size_t bitset_size() const { return m_bitset_size; }

    bitset_uint_t const* lvar_interferences(unsigned i) const 
    { 
        assert(i < m_lvar_interferences.size());
        return &m_lvar_interferences[i * bitset_size()]; 
    }

    fc::vector_set<fn_ht> const& fn_interferences(unsigned i) const
    {
        assert(i < m_fn_interferences.size());
        return m_fn_interferences[i];
    }

    void add_lvar_interferences(bitset_uint_t const* bs)
    {
        bitset_for_each(bitset_size(), bs, [this, bs](unsigned i)
        {
            bitset_or(bitset_size(), lvar_interferences(i), bs);
        });
    }

    void add_fn_interference(unsigned i, fn_ht fn)
    { 
        assert(i < m_fn_interferences.size());
        m_fn_interferences[i].insert(fn); 
    }

    static bool is_this_lvar(fn_ht fn, locator_t arg);
    static bool is_call_lvar(fn_ht fn, locator_t arg);
    static bool is_lvar(fn_ht fn, locator_t arg) { return is_this_lvar(fn, arg) || is_call_lvar(fn, arg); }

private:
    bitset_uint_t* lvar_interferences(unsigned i) 
    { 
        assert(i < m_lvar_interferences.size());
        return &m_lvar_interferences[i * bitset_size()]; 

    }

    fc::vector_set<fn_ht>& fn_interferences(unsigned i) 
    { 
        assert(i < m_fn_interferences.size());
        return m_fn_interferences[i]; 
    }

    rh::batman_set<locator_t> m_map;
    std::vector<unsigned> m_sizes_and_zp_only;
    std::vector<bitset_uint_t> m_lvar_interferences;
    std::vector<fc::vector_set<fn_ht>> m_fn_interferences;
    unsigned m_num_this_lvars = 0;
    unsigned m_bitset_size = 0;
};

#endif
