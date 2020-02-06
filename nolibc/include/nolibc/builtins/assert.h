#pragma once

#include <nolibc/extensions/unmangled.h>
#include <nolibc/builtins/abort.h>

static inline void
_Assert(
    _Bool condition,
    const char * restrict expression,
    const char * restrict location
) {
    #if defined NOLIBC_OVERRIDE_ASSERT
        (void) expression;
        (void) location;

        _Unmangled void
        assert_override(
            bool condition
        );

        assert_override(condition);

    #else
        if (!condition) {
            //fprintf(stderr, "Assertion failed:\n\t%s\n\t%s\n", expression, location);
            abort();
        }

    #endif

}
