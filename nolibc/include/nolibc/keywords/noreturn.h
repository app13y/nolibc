#pragma once

#if !defined noreturn && !define NOLIBC_NO_NORETURN
    #define noreturn \
        _Noreturn

#endif
