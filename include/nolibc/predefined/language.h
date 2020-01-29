#pragma once

#include <nolibc/predefined/compiler.h>

#if defined __cplusplus
    #define _LANGUAGE_IS_CXX 1

    #if (__cplusplus >= 201703L) || _COMPILER_IS_MSVC && (_MSVC_LANG > 201703L)
        #define _LANGUAGE_IS_CXX17 1
        #define _LANGUAGE_STRING "C++17"
        #define _LANGUAGE_IS_DETECTED 1

    #elif (__cplusplus >= 201402L) || _COMPILER_IS_MSVC && (_MSVC_LANG > 201402L)
        #define _LANGUAGE_IS_CXX14 1
        #define _LANGUAGE_STRING "C++14"
        #define _LANGUAGE_IS_DETECTED 1

    #elif (__cplusplus >= 201103L) || _COMPILER_IS_MSVC && (_MSVC_LANG > 201103L)
        #define _LANGUAGE_IS_CXX11 1
        #define _LANGUAGE_STRING "C++11"
        #define _LANGUAGE_IS_DETECTED 1

    #elif (__cplusplus >= 199711L) || _COMPILER_IS_MSVC && (_MSVC_LANG > 199711L)
        #define _LANGUAGE_IS_CXX98 1
        #define _LANGUAGE_STRING "C++98"
        #define _LANGUAGE_IS_DETECTED 1

    #else
        #define _LANGUAGE_IS_UNKNOWN 1
        #define _LANGUAGE_STRING "Unknown version of C++"
        #define _LANGUAGE_IS_DETECTED 0

    #endif

#elif defined __STDC__
    #define _LANGUAGE_IS_C 1

    #if defined __STDC_VERSION__
        #if (__STDC_VERSION__ >= 201112L) || defined _ISOC11_SOURCE
            #define _LANGUAGE_IS_C11 1
            #define _LANGUAGE_STRING "C11"
            #define _LANGUAGE_IS_DETECTED 1

        #elif (__STDC_VERSION__ >= 199901L) || defined _ISOC99_SOURCE
            #define _LANGUAGE_IS_C99 1
            #define _LANGUAGE_STRING "C99"
            #define _LANGUAGE_IS_DETECTED 1

        #else
            #define _LANGUAGE_IS_UNKNOWN 1
            #define _LANGUAGE_STRING "Unknown version of C"
            #define _LANGUAGE_IS_DETECTED 0

        #endif

    #else
        #define _LANGUAGE_IS_C89 1
        #define _LANGUAGE_STRING "C89"
        #define _LANGUAGE_IS_DETECTED 1

    #endif

#else
    #define _LANGUAGE_STRING "Unknown _LANGUAGE"
    #define _LANGUAGE_IS_DETECTED 0

#endif


#if !defined _LANGUAGE_IS_CXX
    #define _LANGUAGE_IS_CXX 0
#endif

#if !defined _LANGUAGE_IS_CXX14
    #define _LANGUAGE_IS_CXX14 0
#endif

#if !defined _LANGUAGE_IS_CXX11
    #define _LANGUAGE_IS_CXX11 0
#endif

#if !defined _LANGUAGE_IS_CXX17
    #define _LANGUAGE_IS_CXX17 0
#endif

#if !defined _LANGUAGE_IS_CXX98
    #define _LANGUAGE_IS_CXX98 0
#endif

#if !defined _LANGUAGE_IS_C
    #define _LANGUAGE_IS_C 0
#endif

#if !defined _LANGUAGE_IS_C11
    #define _LANGUAGE_IS_C11 0
#endif

#if !defined _LANGUAGE_IS_C99
    #define _LANGUAGE_IS_C99 0
#endif

#if !defined _LANGUAGE_IS_C89
    #define _LANGUAGE_IS_C89 0
#endif

#if !defined _LANGUAGE_IS_UNKNOWN
    #define _LANGUAGE_IS_UNKNOWN 0
#endif