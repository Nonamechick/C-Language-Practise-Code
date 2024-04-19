#include <stdio.h>
#include <stdlib.h>

int main(){
    char grade = 'F';

    switch(grade){
    case 'A' :
        printf("You did great!");
        break;
    case 'B':
        printf("You did alright!");
        break;
    case 'C':
        printf("You did fine!");
        break;
    case 'D':
        printf("You need to improve your score!");
        break;
    case 'F':
        printf("You fail the test");
        break;
    default :
        printf("invalid stuff");

    }
    return 0;

}
