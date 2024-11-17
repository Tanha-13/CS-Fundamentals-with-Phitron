/**
 * Problem Statement

Given the multiplication of four numbers and three of those numbers, find the missing number.

Note: If the missing number could not be found for the given input, print -1. All numbers are non-negative integers.

Input Format

The first line will contain T, number of test cases.
For every test case, the input will contain one integer M (the multiplication of the four numbers), A, B, C (three of those four numbers).
Constraints

1 < T <= 100000
0 <= M <= 10^18
1 <= A, B, C <= 10^6
Output Format

Print the missing number. Don't forget to print a new line after it.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        long long int m;
        scanf("%lld", &m);
        long int a, b, c;
        scanf("%ld %ld %ld", &a, &b, &c);

        long int four;
        long long int total = a * b * c;
        if (m == 0)
        {
            four = 0;
        }
        else if (total == m)
        {
            four = 1;
        }
        else if (total > m)
        {
            four = -1;
        }
        else
        {
            if (m % total == 0)
            {
                four = m / total;
            }
            else
            {
                four = -1;
            }
        }

        printf("%ld\n", four);
    }
    return 0;
}