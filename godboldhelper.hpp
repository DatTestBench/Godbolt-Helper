#ifndef GODBOLTHELPER_HPP
#define GODBOLTHELPER_HPP
/*
 * A header file to be used in godbolt that adds some useful helper libraries.
 * The main goal is to provide single include to clean up a lot of the boilerplate 
 * that can pop up from more complex godbolt examples.
 * 
 * Here are also some examples setup with trunk versions of their respective compilers, and all the libraries,
 * as well as max optimization and warning flags:
 * Clang: https://godbolt.org/z/fvWs5v
 * GCC: https://godbolt.org/z/od7rv4
 * MSVC: https://godbolt.org/z/7Goqx6
 */

// Some general C++ includes
// Deliberatly not including stl stuff like vector and string
#include <cstdint>

#ifdef GH_INCLUDE_INDIVIDUAL
// Some helper libraries present in godbolt
#   ifdef GH_FORMAT
    #include <fmt/core.h>
#   endif // !GH_FORMAT
#   ifdef GH_GLM
    #include <glm/glm.hpp>
#   endif // !GH_GLM
#   ifdef GH_JSON
    #include <nlohmann/json.hpp>
#   endif // !GH_JSON

#else // GH_INCLUDE_INDIVIDUAL

#include <fmt/core.h>
#include <glm/glm.hpp>
#include <nlohmann/json.hpp>

#endif // !GH_INCLUDE_INDIVIDUAL

// Defines to clean up fixed size types
using u32 = uint32_t;
using u64 = uint64_t;

using i32 = int32_t;
using i64 = int32_t;

using f32 = float;
using f64 = double;

#endif // !GODBOLTHELPER_HPP