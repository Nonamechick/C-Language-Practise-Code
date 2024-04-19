#include <stdio.h>

int main()
{
    sayHi("Xasan",40); // if you did not put it here it is not work
    return 0;
}
void sayHi(char name[], int age)
{
    printf("Hello %s you are %d\n", name, age);
}
