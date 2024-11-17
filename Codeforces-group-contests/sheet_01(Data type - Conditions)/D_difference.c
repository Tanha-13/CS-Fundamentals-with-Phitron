/**
 * Given four numbers A, B, C and D. Print the result of the following equation :

 X = (A * B) - (C * D).

Input
Only one line containing 4 separated numbers A, B, C and D ( - 105  ≤  A, B, C, D  ≤  105).

Output
Print "Difference  =  " without quotes followed by the equation result.
 */

#include <stdio.h>
int main(){
    long long int a,b,c,d,result;
    scanf("%lld %lld %lld %lld", &a,&b, &c,&d);
    result = (a*b) - (c*d);
    printf("Difference = %lld\n", result);
    


    return 0;
}