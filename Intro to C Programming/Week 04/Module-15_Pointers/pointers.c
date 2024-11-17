#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    // int a = 5;
    // int *b = &a;

    // int value = *b;
    

    // printf("%d\n",a);
    // printf("%d\n",&a);
    // printf("%d\n",b);
    // printf("%d\n",value);


    //swapping two values using pointers
    int a=5, b=6;
    int *x = &a, *y= &b;
    printf("%d %d\n",a,b);
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("%d %d",a,b);

    return 0;
}