#pragma once

#include <nolibc/extensions/check.h>
#include <nolibc/types/size.h>
#include <nolibc/types/rsize.h>
#include <nolibc/types/errno.h>

static inline char *
strcpy(
    char * restrict dst,
    const char * restrict src
) {
    _Check_not_null(dst);
    _Check_not_null(src);

    size_t i = 0;

    while (src[i] != 0) {
        dst[i] = src[i];
        ++i;
    }

    dst[i] = 0;
    return dst;
}

static inline errno_t
strcpy_s(
    char * restrict dst,
    rsize_t dst_size,
    const char * restrict src
) {
    _Check_not_null(dst);
    _Check_not_null(src);
    _Check_valid_size(dst_size);
    _Check_greater(dst_size, 0);

    size_t i = 0;

    while (src[i] != 0 && i < dst_size) {
        _Check_less(i, dst_size);
        dst[i] = src[i];
        ++i;
    }

    dst[i] = 0;
    return EOK;
}
