#include <assert.h>
#include <stdio.h>

int main() {
    int x = 5;
    assert(x == 10); // This assertion will fail since x is not equal to 10
    printf("Program continues after assert\n");
    return 0;
}
//dc