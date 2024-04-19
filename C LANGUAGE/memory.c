#include <stdio.h>

int main() {
 int myInt;
 float myFloat;
 double myDouble;
 char myChar;

 printf("%lu\n", sizeof(myInt));
 printf("%lu\n", sizeof(myFloat));
 printf("%lu\n", sizeof(myDouble));
 printf("%lu\n", sizeof(myChar));


 // Create variables of different data types
  int items = 50;
  float cost_per_item = 9.99;
  float total_cost = items * cost_per_item;
  char currency = '$';

  // Print variables
  printf("Number of items: %d\n", items);
  printf("Cost per item: %.2f %c\n", cost_per_item, currency);
  printf("Total cost = %.2f %c\n", total_cost, currency);
  


  // Manual conversion: int to float
  float sum = (float) 5 / 2;

  printf("%f\n", sum);



  // Set the maximum possible score to 500
  int maxScore = 500;

  // The actual score of the user
  int userScore = 420;

  // Calculate the percantage of the user's score in relation to the maximum available score
  float percentage = (float) userScore / maxScore * 100.0;

  // Print the percentage
  printf("User's percentage is %.2f\n", percentage);



  return 0;
}
