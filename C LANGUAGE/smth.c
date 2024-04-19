#include <stdio.h>

int main()
{
    sayHi("Xasan"); // if you did not put it here it is not work
    return 0;
}
void sayHi(char nama[])
{
    printf("Hello %s\n", nama);
}
