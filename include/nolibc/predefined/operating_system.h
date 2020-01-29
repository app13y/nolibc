#pragma once

#if !defined _OS_IS_DETECTED
    #if defined UEFI
        #define _OS_IS_UEFI 1
        #define _OS_IS_DETECTED 1

    #elif defined _WIN32 || defined _WIN64 || defined __WIN32__ || defined __TOS_WIN__ || defined __WINDOWS__
        #define _OS_IS_WINDOWS 1

        #if defined __KERNEL__
            #define _OS_IS_WINDOWS_KERNEL_MODE 1
            #define _OS_STRING "Windows (kernel-mode)"
            #define _OS_IS_DETECTED 1

        #else
            #define _OS_IS_WINDOWS_USER_MODE 1
            #define _OS_STRING "Windows (user-mode)"
            #define _OS_IS_DETECTED 1

        #endif

    #elif defined __ANDROID__
        #define _OS_IS_ANDROID 1
        #define _OS_STRING "Android"
        #define _OS_IS_DETECTED 1

    #elif defined unix || defined __unix || defined __unix__
        #define _OS_IS_UNIX 1

        #if defined __KERNEL__
            #define _OS_IS_UNIX_KERNEL_MODE 1
            #define _OS_STRING "UNIX (kernel-mode)"
            #define _OS_IS_DETECTED 1

        #else
            #define _OS_IS_UNIX_USER_MODE 1
            #define _OS_STRING "UNIX (user-mode)"
            #define _OS_IS_DETECTED 1

        #endif

    #elif defined linux || defined __linux || defined __linux__
        #define _OS_IS_LINUX 1
        #define _OS_STRING "Linux"
        #define _OS_IS_DETECTED 1

    #elif defined __APPLE__
        #define _OS_IS_APPLE 1

        #include "TargetConditionals.h"
        #if defined TARGET_OS_IPHONE
            #define _OS_IS_IOS 1
            #define _OS_STRING "Apple iOS"
            #define _OS_IS_DETECTED 1

        #elif defined TARGET_OS_MAC
            #define _OS_IS_MACOS 1
            #define _OS_STRING "Apple macOS"
            #define _OS_IS_DETECTED 1

        #else
            #define _OS_IS_UNKNOWN 1
            #define _OS_STRING "Uknown Apple OS"
            #define _OS_IS_DETECTED 0
        #endif

    #else
        #define _OS_IS_UNKNOWN 1
        #define _OS_STRING "Uknown OS"
        #define _OS_IS_DETECTED 0

    #endif
#endif

#if !defined _OS_IS_UEFI
    #define _OS_IS_UEFI 0
#endif

#if !defined _OS_IS_WINDOWS
    #define _OS_IS_WINDOWS 0
#endif

#if !defined _OS_IS_WINDOWS_KERNEL_MODE
    #define _OS_IS_WINDOWS_KERNEL_MODE 0
#endif

#if !defined _OS_IS_WINDOWS_USER_MODE
    #define _OS_IS_WINDOWS_USER_MODE 0
#endif

#if !defined _OS_IS_ANDROID
    #define _OS_IS_ANDROID 0
#endif

#if !defined _OS_IS_UNIX
    #define _OS_IS_UNIX 0
#endif

#if !defined _OS_IS_UNIX_KERNEL_MODE
    #define _OS_IS_UNIX_KERNEL_MODE 0
#endif

#if !defined _OS_IS_UNIX_USER_MODE
    #define _OS_IS_UNIX_USER_MODE 0
#endif

#if !defined _OS_IS_LINUX
    #define _OS_IS_LINUX 0
#endif

#if !defined _OS_IS_APPLE
    #define _OS_IS_APPLE 0
#endif

#if !defined _OS_IS_IOS
    #define _OS_IS_IOS 0
#endif

#if !defined _OS_IS_MACOS
    #define _OS_IS_MACOS 0
#endif

#if !defined _OS_IS_UNKNOWN
    #define _OS_IS_UNKNOWN 0
#endif