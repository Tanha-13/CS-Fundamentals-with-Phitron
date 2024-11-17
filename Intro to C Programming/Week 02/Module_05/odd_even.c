#include <stdio.h>
int main()
{

    int number;
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("EVEN\n");

        // if(number >= 0){
        //     printf("Positive");
        // }
        // else{
        //     printf("Negative");
        // }
    }
    else
    {
        printf("ODD\n");

        // if(number < 0){
        //     printf("Negative");
        // }
        // else{
        //     printf("Positive");
        // }
    }

    if (number >= 0)
    {
        printf("Positive");
    }
    else
    {
        printf("Negative");
    }

    return 0;
}