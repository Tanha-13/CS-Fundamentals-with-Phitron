/**
 * You have already solved a problem where you had to find minimum and maximum value among 3 integer numbers.

Now you will be given 3 strings you have to find lexicographically minimum and maximum string among them.

Input Format

The first line will contain 3 strings, S1, S2, S3 containing only lowercase letters.

Constraints

1 <= |S1|, |S2|, |S3| <= 1000

Output Format

In the first line print the lexicographically minimum string.

In the second line print the lexicographically maximum string.
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char s1[1001], s2[1001], s3[1001];
    scanf("%s %s %s", s1, s2, s3);

    if ((strcmp(s1, s2) < 0) && (strcmp(s1, s3) < 0))
    {
        printf("%s", s1);
    }
    else if (strcmp(s2, s3) < 0)
    {
        printf("%s", s2);
    }
    else
    {
        printf("%s", s3);
    }
    printf("\n");

    // maximum
    if ((strcmp(s1, s2) > 0) && (strcmp(s1, s3) > 0))
    {
        printf("%s", s1);
    }
    else if (strcmp(s2, s3) > 0)
    {
        printf("%s", s2);
    }
    else
    {
        printf("%s", s3);
    }

    return 0;
}
