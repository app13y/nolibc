#include <helpers.h>
#include nolibc_header(iso646.h)
#include nolibc_header(stdbool.h)

static inline bool
does_not_work(
    void
) {
    return
        (true == (not false)) &&
        (false == (not true));
}

int
main(
    void
) {
    return does_not_work()
        ? 0
        : 1;
}
