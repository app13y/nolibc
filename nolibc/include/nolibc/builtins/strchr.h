#pragma once

#include <nolibc/extensions/check.h>
#include <nolibc/types/size.h>
#include <nolibc/null.h>

static inline char *
strchr(
    const char str[],
    int chr
) {
    _Check_not_null(str);
    _Check_in_range(chr, 0x00, 0xff);

    for (; *str != 0; ++str) {
        if (*str == chr) {
            return (char *) str;
        }
    }

    return NULL;
}
