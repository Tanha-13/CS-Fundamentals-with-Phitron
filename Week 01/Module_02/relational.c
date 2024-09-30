#include<stdio.h>
#include<stdbool.h>
int main(){
    int a = 25;
    int b = 5;
    // printf("%d\n", a>b); //output: 1
    // printf("%d\n", a<b); //output: 0
    // printf("%d\n", a>=b); //output: 1
    // printf("%d\n", a<=b); //output: 0
    // printf("%d\n", a==b); //output: 0
    // printf("%d\n", a!=b); //output: 1

    //topic: using boolean value
    int num1 = 3, num2 = 5;
    bool result1 = num1>num2;
    bool result2 = num1<num2;
    bool result3 = num1>=num2;
    bool result4 = num1<=num2;
    bool result5 = num1==num2;
    bool result6 = num1!= num2;
    printf("%d\n", result1); //output: 0
    printf("%d\n", result2); //output: 1
    printf("%d\n", result3); //output: 0
    printf("%d\n", result4); //output: 1
    printf("%d\n", result5); //output: 0
    printf("%d\n", result6); //output: 1



    return 0;
}