#include <stdio.h>
int main(){
    // printf("%d", 3+5);
    // printf("%d", 3 - 5);
    // printf("%d", 5-3);
    // printf("%d", 3 * 5);
    // printf("%.2f", 5 / 3.0);
    // printf("%d", 5 % 3);

    //topic: using variables and inputs
    // int a = 5, b = 3;
    int a,b;
    scanf("%d %d", &a, &b);
    // printf("%d\n", a+b);
    // printf("%d\n", a-b);
    // printf("%d\n", a*b);
    // printf("%.2f\n", a/b);
    // printf("%d", a % b);

    int num1 = 10000, num2 = 10000;
    // int result = num1*num2;
    // long long result = num1*num2;
    long long result = 1LL * num1 * num2;
    // printf("%lld", result); //output: 100000000


    //topic: diving 0 with any number
    int number1 = 100;
    // printf("%d", 0/number1); //output: 0

    //topic: diving any number with 0
    int number2 = 100;
    // printf("%d", number1/0); //output: empty





    return 0;
}