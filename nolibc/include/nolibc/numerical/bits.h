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
};
