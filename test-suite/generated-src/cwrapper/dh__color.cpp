// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enum.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "color.hpp"

int32_t int32_from_enum_color(std::experimental::optional<::testsuite::color> e) {
    if (e) {
        return static_cast<int32_t>(* e);
    }
    return -1; // -1 to signal null boxed enum
}

int32_t int32_from_enum_color(::testsuite::color e) {
    return static_cast<int32_t>(e);
}
std::experimental::optional<::testsuite::color> get_boxed_enum_color_from_int32(int32_t e) {
    if (e == -1) { // to signal null enum
        return std::experimental::nullopt;
    }
    return std::experimental::optional<::testsuite::color>(static_cast<::testsuite::color>(e));
}