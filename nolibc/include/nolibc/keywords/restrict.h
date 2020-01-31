#pragma once

#include <nolibc/predefined/compiler.h>
#include <nolibc/predefined/language.h>

/* C++ does not have `restrict` as a keyword, so we no-op it. */
#if _LANGUAGE_IS_CXX
    #define restrict

#endif

/* None of MSVC toolsets recognise this keyword in C mode,
 * MSDN suggests __restrict specifier.
 *
 * See https://docs.microsoft.com/en-us/cpp/cpp/extension-restrict?view=vs-2017.
 */
#if _COMPILER_IS_MSVC && !defined restrict
    /* MSVC 2013 (v120) toolset is known to break certain code with __restrict. */
    #if _MSC_VER <= 1800
        #define restrict

    #else
        #define restrict \
            __restrict

    #endif
#endif
