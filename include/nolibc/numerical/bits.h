#pragma once

enum {

    /// Number of bits in byte.
    ///
    /// @details
    /// C language specification requires CHAR_BIT >= 8, while POSIX specification requires CHAR_BIT == 8.
    /// Most of the systems have CHAR_BIT == 8 and a lot of code depends on it.
    ///
    /// @see
    /// `CHAR_BIT`
    _Bits_in_byte = 8,

    /// Number of different values a byte has.
    ///
    /// @note
    /// Useful for computing the dimensions of byte-mapping tables.
    _Bytes_count = (1 << _Bits_in_byte),

    /// Maximum byte value.
    ///
    /// @note
    /// Useful for checking the ranges of values that are expected to fit in a byte.
    _Maximum_byte = (_Bytes_count - 1),
};
