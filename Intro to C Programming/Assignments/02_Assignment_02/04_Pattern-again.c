/*
In this problem you will be given an integer N and you will have to print a pattern with N numbers.

for example if N = 4, the pattern will be.

1
12
123
1234
 123
  12
   1
See input samples for better understanding.

Input Format

The input will contain a single integer N.
Constraints

1 <= N <= 9
Output Format

Print a pattern with N numbers according to the description.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--){
        for (int j = 1; j <= n - i; j++){
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
