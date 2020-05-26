#ifndef SIMDJSON_WESTMERE_PARSER_STATE
#define SIMDJSON_WESTMERE_PARSER_STATE

#include "simdjson.h"

TARGET_WESTMERE
namespace simdjson {
namespace westmere {

#include "generic/stage2/stage2_state.h"

struct parser_state : stage2::stage2_state {
  really_inline error_code allocate(parser &parser, size_t capacity, size_t max_depth);
}; // struct parser_state

really_inline error_code parser_state::allocate(parser &parser, size_t capacity, size_t max_depth) {
  return allocate_stage2(parser, capacity, max_depth);
}

} // namespace westmere
} // namespace simdjson
UNTARGET_REGION

#endif // SIMDJSON_WESTMERE_PARSER_STATE