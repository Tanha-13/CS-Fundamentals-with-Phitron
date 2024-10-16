/**
 * Given a number N. Print the factorial of number N.

Input
First line contains a number T (1 ≤ T ≤ 15) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 20)

Output
For each test case print a single line contains the factorial of N.
 */


//problem faced: final output will be out of the range of int type. So use long long instead int.
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        long long int fac = 1;
        for (int j = 2; j <= n; j++)
        {
            fac *= j;
        }

        printf("%lld\n", fac);
    }

    return 0;
}