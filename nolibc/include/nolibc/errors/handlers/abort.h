#pragma once

#include <nolibc/builtins/abort.h>
#include <nolibc/types/constraint_handler.h>
#include <nolibc/types/errno.h>

static inline void
_Abort(
    const char * restrict msg,
    void * restrict ptr,
    errno_t error
) {
    abort();
}

static constraint_handler_t
abort_handler_s = &_Abort;
