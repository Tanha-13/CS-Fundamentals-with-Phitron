/**
 * Given a number N. Print the digits of N separated by a space.

Note: Solve this problem using recursion.

Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 109).

Output
For each test case print a single line contains the digits of the number separated by space.
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printDigits(int n)
{
    if (n == 0)
    {
        return;
    }

    int value = n % 10;
    printDigits(n / 10);
    printf("%d ", value);
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        printDigits(n);
        if (n == 0)
        {
            printf("%d", n);
        }
        printf("\n");
    }
    return 0;
}