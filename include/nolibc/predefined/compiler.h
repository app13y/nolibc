#pragma once

#if !defined _COMPILER_IS_DETECTED
    #if defined __clang__
        #define _COMPILER_IS_CLANG 1
        #define _COMPILER_IS_DETECTED 1

    #elif defined __GNUC__
        #define _COMPILER_IS_GCC 1
        #define _COMPILER_IS_DETECTED 1

    #elif defined _MSC_VER
        #define _COMPILER_IS_MSVC 1
        #define _COMPILER_IS_DETECTED 1

    #elif defined __INTEL_COMPILER || defined __ICC || defined __ECC || defined __ICL
        #define _COMPILER_IS_ICC 1
        #define _COMPILER_IS_DETECTED 1

    #else
        #define _COMPILER_IS_UNKNOWN 1
        #define _COMPILER_IS_DETECTED 0

    #endif
#endif

#if !defined _COMPILER_IS_CLANG
    #define _COMPILER_IS_CLANG 0
#endif

#if !defined _COMPILER_IS_GCC
    #define _COMPILER_IS_GCC 0
#endif

#if !defined _COMPILER_IS_MSVC
    #define _COMPILER_IS_MSVC 0
#endif

#if !defined _COMPILER_IS_ICC
    #define _COMPILER_IS_ICC 0
#endif

#if !defined _COMPILER_IS_UNKNOWN
    #define _COMPILER_IS_UNKNOWN 0
#endif
