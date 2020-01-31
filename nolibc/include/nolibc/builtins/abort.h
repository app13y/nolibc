#pragma once

#include <nolibc/keywords/inline.h>
#include <nolibc/keywords/noreturn.h>

noreturn static inline void
abort(
    void
) {
    return __builtin_abort();
}
