#include "lt.hpp"

#include <iostream> // TODO

#include "eval.hpp"

lt_ht alloc_lt_value(type_t type, ast_node_t const& expr)
{
    lt_value_t* ptr;
    return lt_ht::pool_emplace(ptr, lt_value_t{ type, expr });
}

void lt_value_t::resolve(romv_t romv)
{
    auto rpair = interpret_lt(romv, ast, type);

    assert(rpair.type == type);
    passert(rpair.value.size(), lex::token_name(ast.token.type));

    results[romv].bytes.clear();
    append_locator_bytes(results[romv].bytes, rpair.value, type, ast.token.pstring);
    assert(resolved(romv));

    results[romv].rval = std::move(rpair.value);

    /* TODO
    std::cout << "LT\n";
    for(auto loc : result[romv])
        std::cout << loc << std::endl;
    std::cout << "\n";
    */

}
