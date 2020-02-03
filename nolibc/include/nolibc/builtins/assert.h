#pragma once

#include <nolibc/keywords/inline.h>
#include <nolibc/keywords/restrict.h>
#include <nolibc/builtins/abort.h>
#include <nolibc/extensions/unmangled.h>
#include <nolibc/types/boolean.h>

static inline void
_Assert(
    bool condition,
    const char * restrict expression,
    const char * restrict location
) {
    if (!condition) {
        #if defined NOLIBC_OVERRIDE_ASSERT
            (void) expression;
            (void) location;

            _Unmangled void
            assert_override(
                bool condition
            );

            assert_override(condition);

        #else
            //fprintf(stderr, "Assertion failed:\n\t%s\n\t%s\n", expression, location);
            abort();

        #endif
    }
}
