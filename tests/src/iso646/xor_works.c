#include <helpers.h>
#include nolibc_header(iso646.h)
#include nolibc_header(stdbool.h)

static inline bool
does_or_work(
    void
) {
    return
        (false == (false xor false)) &&
        (true == (false xor true)) &&
        (true == (true xor false)) &&
        (false == (true xor true));
}

int
main(
    void
) {
    return does_or_work()
        ? 0
        : 1;
}
