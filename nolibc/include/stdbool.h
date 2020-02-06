#pragma once

#if !defined bool && !defined NOLIBC_NO_BOOL
    typedef
        _Bool
        bool;
#endif

#if !defined true && !defined NOLIBC_NO_TRUE
    #define true \
        (bool) 1

#endif

#if !defined false && !defined NOLIBC_NO_FALSE
    #define false \
        (bool) 0

#endif
