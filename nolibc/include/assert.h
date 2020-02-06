#pragma once

#include <nolibc/builtins/assert.h>
#include <nolibc/extensions/stringify.h>
#include <nolibc/extensions/location.h>
#include <nolibc/predefined/build_flavour.h>

#if !defined assert && !defined NOLIBC_NO_ASSERT
    #if _BUILD_FLAVOUR_IS_DEBUG
        #define assert(expr) \
            _Assert((expr), _Stringify(expr), _Location)

    #else
        #define assert(expr) \
            (void) (expr)

    #endif

#endif

#if !defined static_assert && !defined NOLIBC_NO_STATIC_ASSERT
    #define static_assert \
        _Static_assert

#endif
