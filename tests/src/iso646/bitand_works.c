#include <helpers.h>
#include nolibc_header(iso646.h)
#include nolibc_header(stdbool.h)

static inline bool
does_bitand_work(
    void
) {
    enum {
        zero,
        one,
        two,
    };

    return zero == (one bitand two);
}

int
main(
    void
) {
    return does_bitand_work()
        ? 0
        : 1;
}
