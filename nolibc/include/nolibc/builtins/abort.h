#pragma once

#include <nolibc/keywords/inline.h>
#include <nolibc/keywords/noreturn.h>
#include <nolibc/extensions/unmangled.h>

noreturn static inline void
abort(
    void
) {
    #if defined NOLIBC_OVERRIDE_ABORT
        _Unmangled noreturn static inline void
        abort_override(
            void
        );

        abort_override();
    #else
        // todo: figure out what to do in case there is no external abort
        ;
    #endif
}
