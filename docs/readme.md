# nolibc

[![Travis](https://travis-ci.org/aprelev/nolibc.svg?branch=master)](https://travis-ci.org/aprelev/nolibc)

## Mission

_nolibc_ is a tweakable header-only implementation of a standard C library subset,
which helps to build lean binaries without linking against the runtime.

## Coverage

_nolibc_ provides necessary built-in functions, macros and type aliases
to facilitate most needs a lean binary might have.

### Standard library headers

- [X] `errno.h`:
    - `errno_t` type alias,
    - basic errno codes including `EOK`,
    - `strerror` and `strerror_s` functions;
- [ ] `limits.h` (has `CHAR_BIT` and `RSIZE_MAX` only),
- [X] `stdalign.h`,
- [X] `stdbool.h`,
- [ ] `stddef.h`,
- [ ] `stdlib.h`,
- [X] `stdnoreturn.h`,
- [ ] `string.h` (does not support some functions).
