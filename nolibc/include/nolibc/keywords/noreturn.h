#pragma once

#if !defined noreturn && !defined NOLIBC_NO_NORETURN
    #define noreturn \
        _Noreturn

#endif
