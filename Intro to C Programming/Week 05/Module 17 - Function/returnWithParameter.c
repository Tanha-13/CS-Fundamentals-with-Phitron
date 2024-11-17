#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int add(int num1,int num2){
    printf("Function Called\n");
    int sum = num1 + num2;
    return sum;
}

int main() {

    int a,b;
    scanf("%d %d", &a, &b);
    // int result = add(a,b);
    // printf("%d",result);
    printf("%d", add(a,b));

    return 0;
}