#include <stdint-gcc.h>
#include <stdio.h>

int main() {
    int16_t a = 30000;
    uint16_t b = 60000; //here's 16 it's bytes

    printf("a: %d\n", a);
    printf("b: %u\n", b);

    return 0;
}
