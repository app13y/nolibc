#pragma once

enum {

    /// Maximum byte value.
    ///
    /// @note
    /// Useful for checking the ranges of values that are expected to fit in a byte.
    _Maximum_byte = 0xff,

    /* 4 GiB should be enough for all valid size_t values */
    _Maximum_sane_size = 0x100000000ull,
};
