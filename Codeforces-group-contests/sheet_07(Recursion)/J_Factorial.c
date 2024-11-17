/**
 * Given a number N. Print factorial of N.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 20).

Output
Print the factorial of the number N.
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int factorial(int n){
    if(n == 1){
        return 1;
    }
    return n*factorial(n-1);
}


int main() {
    int n;
    scanf("%d",&n);

    long long int result = factorial(n);
    printf("%lld",result);
    return 0;
}