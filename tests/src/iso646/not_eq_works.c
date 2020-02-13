#include <helpers.h>
#include nolibc_header(iso646.h)
#include nolibc_header(stdbool.h)

static inline bool
does_not_eq_work(
    void
) {
    return
        (false == (false not_eq false)) &&
        (true == (false not_eq true)) &&
        (true == (true not_eq false)) &&
        (false == (true not_eq true));
}

int
main(
    void
) {
    return does_not_eq_work()
        ? 0
        : 1;
}
