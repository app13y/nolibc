#pragma once

#include <commute/libc/stdlib.h> /* RSIZE_MAX */
#include <commute/libc/limits.h> /* CHAR_BIT */

enum {
    _Bits_in_byte = CHAR_BIT,
    _Maximum_size = RSIZE_MAX,
    _Maximum_byte = (1 << _Bits_in_byte) - 1,
};
