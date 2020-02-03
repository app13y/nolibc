#pragma once

#include <nolibc/extensions/stringify.h>

#define _Location \
    __FILE__ ":" _Stringify(__LINE__)
