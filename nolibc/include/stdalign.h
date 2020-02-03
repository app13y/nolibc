#pragma once

#include <nolibc/keywords/alignas.h>
#include <nolibc/keywords/alignof.h>
#include <nolibc/predefined/language.h>

#if !_LANGUAGE_IS_CXX
    #if !defined alignas && !define NOLIBC_NO_ALIGNAS
        #define alignas \
            _Align_as

        #define __alignas_is_defined \
            1

    #endif

    #if !defined alignof && !define NOLIBC_NO_ALIGNOF
        #define alignof \
            _Alignment_of

        #define __alignof_is_defined \
            1

    #endif

#endif
