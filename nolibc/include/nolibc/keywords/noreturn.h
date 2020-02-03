#pragma once

#include <nolibc/predefined/compiler.h>

#if _COMPILER_IS_MSVC
    #define _No_return \
        __declspec(noreturn)

#elif _COMPILER_IS_GCC || _COMPILER_IS_CLANG
    #define _No_return \
        __attribute__ ((noreturn))

#else
    #define _No_return

#endif
