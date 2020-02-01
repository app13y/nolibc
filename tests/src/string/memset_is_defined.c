#include <string.h>

int main(
    void
) {
    unsigned char dummy;

    memset(&dummy, 0x00, sizeof(dummy));
    return 0;
}
