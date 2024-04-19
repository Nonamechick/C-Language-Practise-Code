#include <stdio.h>

int main() {
  int myNumbers[] = {10,25,50,75,100};
  int lenght = sizeof(myNumbers) / sizeof(myNumbers[0]);
  printf("%lu bytes\n", sizeof(myNumbers));

  printf("%d lenght\n", lenght);

  return 0;
}