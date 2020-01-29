#pragma once

#include <nolibc/numerical/bits.h>

#if !defined CHAR_BIT
    #define CHAR_BIT \
        _Bits_in_byte

#endif
