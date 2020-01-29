#pragma once

#include <nolibc/predefined/operating_system.h>

#if !defined _ENDIANNESS_IS_DETECTED
    #if _OS_IS_WINDOWS || defined __LITTLE_ENDIAN__ || defined _LITTLE_ENDIAN
        #define _ENDIANNESS_IS_LE 1
        #define _ENDIANNESS_IS_DETECTED 1

    #elif defined __BYTE_ORDER__ && (__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__)
        #define _ENDIANNESS_IS_LE 1
        #define _ENDIANNESS_IS_DETECTED 1

    #elif defined __BIG_ENDIAN__ || defined BIG_ENDIAN
        #define _ENDIANNESS_IS_BE 1
        #define _ENDIANNESS_IS_DETECTED 1

    #elif defined __BYTE_ORDER__ && (__BYTE_ORDER__ == __ORDER_BIG_ENDIAN__)
        #define _ENDIANNESS_IS_BE 1
        #define _ENDIANNESS_IS_DETECTED 1

    #else
        #define _ENDIANNESS_IS_UNKNOWN 1
        #define _ENDIANNESS_IS_DETECTED 0

    #endif
#endif

#if !defined _ENDIANNESS_IS_LE
    #define _ENDIANNESS_IS_LE 0
#endif

#if !defined _ENDIANNESS_IS_BE
    #define _ENDIANNESS_IS_BE 0
#endif
