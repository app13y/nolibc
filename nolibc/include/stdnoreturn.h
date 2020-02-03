#pragma once

#include <nolibc/keywords/noreturn.h>

#if !defined noreturn && !defined NOLIBC_NO_NORETURN
    #define noreturn \
        _No_return

#endif
