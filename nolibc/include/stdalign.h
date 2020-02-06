#pragma once

#include <nolibc/predefined/language.h>

#if !_LANGUAGE_IS_CXX
    #if !defined alignas && !define NOLIBC_NO_ALIGNAS
        #define alignas \
            _Alignas

        #define __alignas_is_defined \
            1

    #endif

    #if !defined alignof && !define NOLIBC_NO_ALIGNOF
        #define alignof \
            _Alignof

        #define __alignof_is_defined \
            1

    #endif

#endif
