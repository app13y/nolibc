#pragma once

#include <nolibc/predefined/compiler.h>
#include <nolibc/predefined/language.h>

#if _COMPILER_IS_MSVC
    #define _Align_as(boundary) \
        __declspec(align(boundary))

#else
    #define _Align_as(boundary) \
        __attribute__((__aligned__(boundary)))

#endif
