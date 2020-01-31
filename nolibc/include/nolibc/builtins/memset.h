#pragma once

#include <nolibc/keywords/inline.h>
#include <nolibc/types/size.h>

static inline void *
memset(
    void *dst,
    int chr,
    size_t count
) {
    // todo: check arguments

    unsigned char *dst_enumerable = (unsigned char *) dst;

    for (size_t i = 0; i < count; ++i) {
        dst_enumerable[i] = chr;
    }

    return dst;
}
