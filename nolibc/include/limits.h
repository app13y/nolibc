#pragma once

#include <nolibc/numerical/bits.h>
#include <nolibc/numerical/limits.h>

#if !defined CHAR_BIT
    #define CHAR_BIT \
        _Bits_in_byte

#endif

#if !defined RSIZE_MAX
    #define RSIZE_MAX \
        _Maximum_sane_size

#endif
