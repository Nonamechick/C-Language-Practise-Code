#include <stdlib.h>
#include <stdio.h>

int main() {
    int *ptr = (int*)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    
    *ptr = 42;
    printf("The value is: %d\n", *ptr);
    
    free(ptr);
    return 0;
}
