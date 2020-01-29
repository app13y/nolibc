#pragma once

#include <nolibc/predefined/language.h>

#if _LANGUAGE_IS_CXX
    #define _Null \
        0L

#else
    #define _Null \
        ((void *) 0)

#endif

#if !defined NULL && !defined NOLIBC_NO_NULL
    #define NULL \
        _Null

#endif
