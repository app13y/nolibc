#pragma once

#include <nolibc/keywords/inline.h>
#include <nolibc/keywords/restrict.h>
#include <nolibc/types/size.h>
#include <nolibc/types/rsize.h>
#include <nolibc/types/errno.h>
#include <nolibc/errors/contracts.h>

static inline void *
memcpy(
    void * restrict dst,
    const void * restrict src,
    size_t count
) {
    _Check_addressable(dst, count);
    _Check_addressable(src, count);

    unsigned char *enumerable_dst = (unsigned char *) dst;
    const unsigned char *enumerable_src = (const unsigned char *) src;

    for (size_t i = 0; i < count; ++i) {
        enumerable_dst[i] = enumerable_src[i];
    }

    return dst;
}

static inline errno_t
memcpy_s(
    void * restrict dst,
    rsize_t dst_size,
    const void * restrict src,
    rsize_t count
) {
    _Check_addressable(dst, count);
    _Check_addressable(src, count);
    _Check_valid_size(dst_size);
    _Check_valid_size(count);
    _Check_less_or_equal(count, dst_size);

    memcpy(dst, src, count);
    return EOK;
}
