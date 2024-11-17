/**
 * You will be given two integer numbers A and B , you need to print the difference between these two numbers. Remember, difference is always positive.

Note: Use pointers to solve this Problem.

Input Format

Input will contain two integers A and B.
Constraints

0 <= A <= 100
0 <= B <= 100
Output Format

Print a single integer representing the absolute difference between A and B.
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b;
    scanf("%d %d",&a,&b);

    int *x = &a;
    int *y = &b;

    int difference = abs(*x - *y);
    printf("%d",difference); 
    return 0;
}

