# nolibc

[![Travis](https://travis-ci.org/aprelev/nolibc.svg?branch=master)](https://travis-ci.org/aprelev/nolibc)

## Mission

_nolibc_ is a tweakable header-only implementation of a standard C library subset,
which helps to build lean binaries without linking against the runtime.

## Coverage

_nolibc_ provides necessary built-in functions, macros and type aliases
to facilitate most needs a lean binary might have.

### Standard library headers

- `assert.h`:
    - overridable `assert` macro;
- `errno.h`:
    - `errno_t` type alias,
    - basic errno codes including `EOK`,
    - `strerror` and `strerror_s` functions;
- `limits.h`:
    - `CHAR_BIT`,
    - `RSIZE_MAX` for probabilistic validation of `size_t` values;
- `stdalign.h`:
    - `alignof`, `alignas`, etc.;
- `stdbool.h`:
    - `bool` type,
    - `true` and `false` boolean values;
- `stddef.h`:
    - `NULL`,
    - `size_t` and `rsize_t` standard types;
- `stdlib.h`:
    - overridable `abort` function,
    - `constraint_handler_t` type;
- `stdnoreturn.h`:
    - `noreturn` function qualifier;
- `string.h`:
    - `memcpy`, and `memcpy_s`,
    - `memset`,
    - `strlen`.
