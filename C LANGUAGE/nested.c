#include <stdio.h>


int main() {
  int i, j;


  //outer loop 
  for (i = 1; i <= 2; ++i) {
    printf("Outer: %d\n", i); //Exevutes 2 times


    //inner loop
    for (j = 1; j <= 3; ++j) {
      printf("Inner: %d\n", j); //Executes 6 times ( 2 * 3)
    }
  }

  return 0;
}
