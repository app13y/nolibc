#pragma once

#include <nolibc/keywords/inline.h>
#include <nolibc/extensions/unmangled.h>

static inline void
abort(
    void
) {
    #if defined NOLIBC_OVERRIDE_ABORT
        _Unmangled void
        abort_override(
            void
        );

        abort_override();
    #else
        // todo: figure out what to do in case there is no external abort
        ;
    #endif
}
