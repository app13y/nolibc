#pragma once

#include <nolibc/extensions/stringify.h>
#include <nolibc/errors/handlers/ignore.h>

#define _Location \
    __FILE__ ":" _Stringify(__LINE__)

#define _Check(cnd, error, msg) { \
    if (!(cnd)) \
        _Ignore((msg), _Location, (error)); \
}

#define _Check_allocated(ptr) \
    _Check((ptr), ENOMEM, \
    "failed to allocate " _Stringify(ptr))

#define _Check_value(cnd, error, msg) \
    _Check((cnd), EINVAL, (msg))

#define _Check_true(value) \
    _Check_value((value) == true, c_error_unexpected, \
    _Stringify(value) " was not set")

#define _Check_false(value) \
    _Check_value((value) == false, c_error_unexpected, \
    _Stringify(value) " was not reset")

#define _Check_castable(item, type) \
    _Check_value((item).ptr && (item).size == sizeof (type), c_error_unexpected, \
    _Stringify(item) " was not castable to " _Stringify(type))

#define _Check_not_null(value) \
    _Check_value((value), c_error_null_pointer, \
    _Stringify(value) " was null")

#define _Check_addressable(ptr, size) \
    _Check_value((ptr) || (size) == 0, c_error_null_pointer, \
    _Stringify(ptr) " was not addressable for size " _Stringify(size))

#define _Check_divisible(value, divisor) \
    _Check_value((value) % (divisor) == 0, c_error_unexpected, \
    _Stringify(value) " was not a multiple of " _Stringify(divisor))

#define _Check_power_of_2(value) \
    _Check_value(!((value) & ((value) - 1)), c_error_unexpected, \
    _Stringify(value) " was not a power of 2")

#define _Check_range(cnd, msg) \
    _Check((cnd), c_range_error_handler, c_error_out_of_range, (msg))

#define _Check_valid_size(value) \
    _Check_range((value) < _Maximum_size, \
    _Stringify(value) " is not a valid size value")

#define _Check_in_range(value, low, high) \
    _Check_range((low) <= (value) && (value) <= (high), \
    _Stringify(value) " was not in range " _Stringify(low) ".." _Stringify(high))

#define _Check_greater(value, low) \
    _Check_range((value) > (low), \
    _Stringify(value) " was less than or equal to " _Stringify(low))

#define _Check_greater_or_equal(value, low) \
    _Check_range((value) >= (low), \
    _Stringify(value) " was less than " _Stringify(low))

#define _Check_less(value, high) \
    _Check_range((value) < (high), \
    _Stringify(value) " was greater than or equal to " _Stringify(high))

#define _Check_less_or_equal(value, high) \
    _Check_range((value) <= (high), \
    _Stringify(value) " was greater than " _Stringify(high))

#define _Check_equal(x, y) \
    _Check_range((x) == (y), \
    _Stringify(x) " was not equal to " _Stringify(y))
