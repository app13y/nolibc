#pragma once

#include <nolibc/extensions/check.h>
#include <nolibc/types/size.h>

static inline size_t
strlen(
    const char *str
) {
    _Check_not_null(str);

    size_t length = 0;

    while (*str) {
        ++str;
        ++length;
    }

    return length;
}
