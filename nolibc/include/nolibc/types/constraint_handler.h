#pragma once

#include <nolibc/keywords/restrict.h>
#include <nolibc/types/errno.h>

#if !defined NOLIBC_NO_CONSTRAINT_HANDLER
    typedef
        void
        (*constraint_handler_t)(
            const char * restrict msg,
            void * restrict ptr,
            errno_t error
        );

#endif
