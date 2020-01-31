#pragma once

#include <nolibc/predefined/compiler.h>
#include <nolibc/predefined/language.h>
#include <nolibc/predefined/build_flavour.h>

/* Deals with MSVC not supporting `inline` keyword in C mode:
 *   https://stackoverflow.com/a/2765211
 *
 * Note that in C++ mode keywords macroising is forbidden:
 *   keywords: xkeycheck.h, error C1189.
 */
#if _COMPILER_IS_MSVC && !_LANGUAGE_IS_CXX
    #define inline \
        __inline

#endif

/* Declares `_Force_inline` function specifier.
 *
 * This forces compiler to inline function body at every invocation point
 * in current translation unit.
 *
 * Use with *ultimate care* and when you *absolutely have to*.
 * Abuse of force inlining might produce performace degradation (due to cache misses).
 */
#if !defined _Force_inline
    #if _COMPILER_IS_MSVC
        #define _Force_inline \
            __forceinline

    #elif _COMPILER_IS_GCC || _COMPILER_IS_CLANG
        #define _Force_inline \
            __attribute__((__always_inline__))

    #else
        #define _Force_inline

    #endif
#endif

/* Declares `force_inline` convenience macros. */
#if !defined force_inline && !defined NOLIBC_NO_FORCE_INLINE
     #define force_inline \
        _Force_inline

#endif
