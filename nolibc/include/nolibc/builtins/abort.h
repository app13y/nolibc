#pragma once

#include <nolibc/extensions/unmangled.h>
#include <nolibc/predefined/compiler.h>

_Noreturn static inline void
abort(
    void
) {
    #if defined NOLIBC_OVERRIDE_ABORT
        _Unmangled _Noreturn void
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
