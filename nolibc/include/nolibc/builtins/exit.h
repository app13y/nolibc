#pragma once

#include <nolibc/extensions/unmangled.h>
#include <nolibc/predefined/compiler.h>

_Noreturn static inline void
exit(
    int code
) {
    #if defined NOLIBC_OVERRIDE_EXIT
        _Unmangled _Noreturn void
        exit_override(
            int code
        );

        exit_override(code);

    #else
        __builtin_exit(code);

    #endif
}
