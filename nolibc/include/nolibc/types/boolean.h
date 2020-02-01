#pragma once

typedef
    enum {
        _False = 0,
        _True = 1,
    }
    _Boolean;

#if !defined true && !defined NOLIBC_NO_TRUE
    #define true \
        _True
#endif

#if !defined false && !defined NOLIBC_NO_FALSE
    #define false \
        _False
#endif

#if !defined bool && !defined NOLIBC_NO_BOOL
    #define bool \
        _Boolean
#endif
