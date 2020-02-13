#pragma once

#if !defined and && !defined NOLIBC_NO_AND
    #define and \
        &&

#endif

#if !defined and_eq && !defined NOLIBC_NO_AND_EQ
    #define and_eq \
        &=

#endif

#if !defined bitand && !defined NOLIBC_NO_BITAND
    #define bitand \
        &

#endif

#if !defined bitor && !defined NOLIBC_NO_BITOR
    #define bitor \
        |

#endif

#if !defined compl && !defined NOLIBC_NO_COMPL
    #define compl \
        ~

#endif

#if !defined not && !defined NOLIBC_NO_NOT
    #define not \
        !

#endif

#if !defined not_eq && !defined NOLIBC_NO_NOT_EQ
    #define not_eq \
        !=

#endif

#if !defined or && !defined NOLIBC_NO_OR
    #define or \
        ||

#endif

#if !defined or_eq && !defined NOLIBC_NO_OR_EQ
    #define or_eq \
        |=

#endif

#if !defined xor && !defined NOLIBC_NO_XOR
    #define xor \
        ^

#endif

#if !defined xor_eq && !defined NOLIBC_NO_XOR_EQ
    #define xor_eq \
        ^=

#endif
