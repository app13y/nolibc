#pragma once

#if !defined _ARCHITECTURE_IS_DETECTED
    #if defined i386 || defined __i386__ || defined __i386 || \
        defined __i486__ || defined __i586__ || defined __i686__ || \
        defined _M_IX86 || defined _X86_ || defined __I86__ || \
        defined __THW_INTEL__ || defined __INTEL__
        #define _ARCHITECTURE_IS_X86_32 1
        #define _ARCHITECTURE_IS_DETECTED 1

    #elif defined __x86_64 || defined __x86_64__ || \
        defined __amd64__ || defined __amd64 || \
        defined _M_X64
        #define _ARCHITECTURE_IS_X86_64 1
        #define _ARCHITECTURE_IS_DETECTED 1

    #elif defined __arm__ || defined __arm64 || \
        defined __thumb__ || \
        defined __TARGET_ARCH_ARM || defined __TARGET_ARCH_THUMB || \
        defined _M_ARM || defined __aarch64__
        #define _ARCHITECTURE_IS_ARM 1
        #define _ARCHITECTURE_IS_DETECTED 1

    #elif defined __mips__ || defined __mips || defined __MIPS__
        #define _ARCHITECTURE_IS_MIPS 1
        #define _ARCHITECTURE_IS_DETECTED 1

    #elif defined __e2k__ || defined __elbrus_4c__
        #define _ARCHITECTURE_IS_ELBRUS_4C 1
        #define _ARCHITECTURE_IS_DETECTED 1

    #else
        #define _ARCHITECTURE_IS_UNKNOWN 1
        #define _ARCHITECTURE_IS_DETECTED 0

    #endif
#endif

#if !defined _ARCHITECTURE_IS_X86_32
    #define _ARCHITECTURE_IS_X86_32 0
#endif

#if !defined _ARCHITECTURE_IS_X86_64
    #define _ARCHITECTURE_IS_X86_64 0
#endif

#if !defined _ARCHITECTURE_IS_ARM
    #define _ARCHITECTURE_IS_ARM 0
#endif

#if !defined _ARCHITECTURE_IS_MIPS
    #define _ARCHITECTURE_IS_MIPS 0
#endif

#if !defined _ARCHITECTURE_IS_ELBRUS_4C
    #define _ARCHITECTURE_IS_ELBRUS_4C 0
#endif

#if !defined _ARCHITECTURE_IS_UNKNOWN
    #define _ARCHITECTURE_IS_UNKNOWN 0
#endif
