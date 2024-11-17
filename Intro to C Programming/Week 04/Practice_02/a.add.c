/**
 * Given two numbers X and Y, Print their summation.

Note: Solve this problem using function.

Input
Only one line contains two numbers X and Y (0 ≤ X, Y ≤ 105).

Output
Print the summation value
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x,y;
    scanf("%d %d",&x,&y);
    int *a = &x;
    int *b = &y;
    printf("%d", *a + *b);
    return 0;
}