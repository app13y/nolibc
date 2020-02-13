#include <helpers.h>
#include nolibc_header(iso646.h)
#include nolibc_header(stdbool.h)

static inline bool
does_or_work(
    void
) {
    return
        (false == (false or false)) &&
        (true == (false or true)) &&
        (true == (true or false)) &&
        (true == (true or true));
}

int
main(
    void
) {
    return does_or_work()
        ? 0
        : 1;
}
