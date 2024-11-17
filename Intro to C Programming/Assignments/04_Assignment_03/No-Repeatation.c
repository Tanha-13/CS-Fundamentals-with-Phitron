/**
 * You will be given an Array of N integers, print the count of numbers that have appeared only once.

Input Format

The first line will contain an integer N.
The next line will contain N integers.
Constraints

1 <= N <= 10^5
1 <= A[i] <= 10^5
Output Format

Print a single integer,the count of numbers that have appeared only once in the array.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    int frequency[100005] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        frequency[a[i]]++;
    }

    int count = 0;
    for (int i = 0; i < 100005; i++)
    {
        if(frequency[i] == 1){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
