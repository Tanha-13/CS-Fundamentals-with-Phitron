/**
 * Given a number N. Print first N numbers of the Fibonacci sequence.

Note: In order to create the Fibonacci sequence use the following function:

fib(1) = 0.
fib(2) = 1.
fib(n) = fib(n - 1) + fib(n - 2).
Input
Only one line containing a number N (1 ≤ N ≤ 45).

Output
Print the first N numbers from the Fibonacci Sequence .
 */

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int first = 0;
    int second = 1;
    if (n == 1)
    {
        printf("%d", first);
    }
    else
    {
        printf("%d %d", first, second);
        for (int i = 3; i <= n; i++)
        {
            int fib = first + second;
            printf(" %d", fib);
            first = second;
            second = fib;
        }
    }

    return 0;
}