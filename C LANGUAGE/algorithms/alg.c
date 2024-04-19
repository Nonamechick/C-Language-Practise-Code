#include <stdio.h>
#include <string.h>

int main(void) 
{
    int numbers[] = {10,20,100,400,500,1,40,700};
    char strings[] = {"add"};
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
    char v;
    printf("Enter string: ");
    scanf("%s",&v);
    for(int i =0; i < 8; i++)
    {
        if(numbers[i] == n && strings[i] == v )
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("NOt found\n");
    return 1;
}
