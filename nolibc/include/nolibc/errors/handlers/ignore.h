#pragma once

#include <nolibc/keywords/inline.h>
#include <nolibc/keywords/restrict.h>
#include <nolibc/types/constraint_handler.h>
#include <nolibc/types/errno.h>

static inline void
_Ignore(
    const char * restrict msg,
    void * restrict ptr,
    errno_t error
) {
    (void) msg;
    (void) ptr;
    (void) error;
}

static constraint_handler_t
ignore_handler_s = &_Ignore;
