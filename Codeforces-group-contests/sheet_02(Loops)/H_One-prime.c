/**
 * Given a number X. Determine if the number is prime or not

Note:

A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.

In other words : prime number divisible only by 1 and itself.

Be careful that 1 is not prime .

Input
Only one line containing a number X (2 ≤ X ≤ 105).

Output
print "YES" if the number is prime and "NO" otherwise.
 */

//output: if x is divided by the value of i and the value of i is not same as x, it means the x can be divided by another number other than 1 or x. 
#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int count;
    for (int i = 2; i <= x; i++)
    {
        if (x % i == 0)
        {
            if (i != x)
            {
                count++;
                break;
            }
            else{
                count = 0;
            }
        }
    }
    if (count == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}