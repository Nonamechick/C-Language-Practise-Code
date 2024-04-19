#include <stdio.h>

int main() {
  // Create an integer variable that will store the number we get from the user and a char variable
  int myNum;
  char myChar;
  char firstName[30];

  // Ask the user to type a number and a character
  printf("Type a number and a character press enter: \n");

  // Ask the user to input some text (name)
  printf("Enter your first name and press enter: \n");

  // Get and save the number and character the user types
  scanf("%d" "%c", &myNum, &myChar);

  // Get and save the text
  scanf("%s", firstName);

  // Print the number the user typed
  printf("Your number is: %d\n", myNum);

  // Print the character
  printf("Your character is: %d\n", myChar);

  // Output the text
  printf("Hello %s", firstName);

  return 0;
}