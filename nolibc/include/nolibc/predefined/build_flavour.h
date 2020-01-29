#pragma once

#include <nolibc/predefined/compiler.h>

#if !defined _BUILD_FLAVOUR_IS_DETECTED
    #if _COMPILER_IS_MSVC && defined _DEBUG
        #define _BUILD_FLAVOUR_IS_DEBUG 1
        #define _BUILD_FLAVOUR_IS_DETECTED 1

    #elif (_COMPILER_IS_GCC || _COMPILER_IS_CLANG) && !defined NDEBUG
        #define _BUILD_FLAVOUR_IS_DEBUG 1
        #define _BUILD_FLAVOUR_IS_DETECTED 1

    #else
        #define _BUILD_FLAVOUR_IS_RELEASE 1
        #define _BUILD_FLAVOUR_IS_DETECTED 1

    #endif
#endif

#if !defined _BUILD_FLAVOUR_IS_DEBUG
    #define _BUILD_FLAVOUR_IS_DEBUG 0
#endif

#if !defined _BUILD_FLAVOUR_IS_RELEASE
    #define _BUILD_FLAVOUR_IS_RELEASE 0
#endif
