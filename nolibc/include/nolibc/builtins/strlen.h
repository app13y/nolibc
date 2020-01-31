#pragma once

#include <nolibc/keywords/inline.h>
#include <nolibc/types/size.h>

static inline size_t
strlen(
    const char *str
) {
    size_t length = 0;

    while (*str) {
        ++str;
        ++length;
    }

    return length;
}
