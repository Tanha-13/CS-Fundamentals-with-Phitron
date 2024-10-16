/**
 * A number of two digits is lucky if one of its digits is divisible by the other.

For example, 39, 82, and 55 are lucky, while 79 and 43 are not.

Given a number between 10 and 99, determine whether it is lucky or not.

Input
Only one line containing a single number N
 (10≤N≤99)
.

Output
Print "YES" if the given number is lucky, otherwise print "NO".
 */
#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int first = n / 10;
    int second = n % 10;
    if (second == 0)
    {
        if (second % first == 0)
        {
            printf("YES");
        }
    }

    else if (first % second == 0 || second % first == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}