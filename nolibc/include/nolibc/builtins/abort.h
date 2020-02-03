#pragma once

#include <nolibc/keywords/inline.h>
#include <nolibc/keywords/noreturn.h>
#include <nolibc/extensions/unmangled.h>
#include <nolibc/predefined/compiler.h>

_No_return static inline void
abort(
    void
) {
    #if defined NOLIBC_OVERRIDE_ABORT
        _Unmangled _No_return void
        abort_override(
            void
        );

        abort_override();

    #else
        #if _COMPILER_IS_MSVC
            __debugbreak();

        #else
            __builtin_trap();

        #endif

    #endif
}
