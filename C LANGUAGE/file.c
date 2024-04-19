#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * fpointer = fopen("employees.txt", "w");

    fprintf(fpointer, "Jim Salesman\nPam, REcepptionist");

    fclose(fpointer);
    return 0;
}
