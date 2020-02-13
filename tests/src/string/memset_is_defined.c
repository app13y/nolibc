#include <helpers.h>
#include nolibc_header(string.h)

int main(
    void
) {
    unsigned char dummy;

    memset(&dummy, 0x00, sizeof(dummy));
    return 0;
}
