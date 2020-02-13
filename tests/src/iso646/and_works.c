#include <helpers.h>
#include nolibc_header(iso646.h)
#include nolibc_header(stdbool.h)

static inline bool
does_and_work(
    void
) {
    return
        (false == (false and false)) &&
        (false == (false and true)) &&
        (false == (true and false)) &&
        (true == (true and true));
}

int
main(
    void
) {
    return does_and_work()
        ? 0
        : 1;
}
