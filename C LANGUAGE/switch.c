#include <stdio.h>

int main() {
  int day = 4;
  
  switch (day) {
    case 1:
      printf("Monday");
      break;
    case 2:
      printf("Tuesday");
      break;
    case 3:
      printf("Wednesday");
      break;
    //case 4:
      //printf("Thursday");
      //break;
    case 5:
      printf("Friday");
      break;
    case 6:
      printf("Saturday");
      break;
    case 7:
      printf("Sunday");
      break;
    
    case 8:
      printf("Today is Saturday");
      break;
    case 9:
      printf("Today is Sunday");
      break;
    default:
      printf("Looking forward to the Weekend or Thursday");
  }
    
  return 0;
}