#include <helpers.h>
#include nolibc_header(stddef.h)
#include nolibc_header(stdbool.h)

static inline bool
is_null_defined(
    void
) {
    #if defined NULL
        return true;
    #else
        return false;
    #endif
}

int main(void) {
    return is_null_defined()
        ? 0
        : 1;
}
