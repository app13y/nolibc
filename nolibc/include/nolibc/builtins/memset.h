#pragma once

#include <nolibc/extensions/check.h>
#include <nolibc/types/size.h>

static inline void *
memset(
    void *dst,
    int chr,
    size_t count
) {
    _Check_addressable(dst, count);
    _Check_in_range(chr, 0x00, 0xff);

    unsigned char *dst_enumerable = (unsigned char *) dst;

    for (size_t i = 0; i < count; ++i) {
        dst_enumerable[i] = chr;
    }

    return dst;
}
