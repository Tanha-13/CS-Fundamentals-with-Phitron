/**
 * Given an array A
 of size N
. Print the array elements after shifting all zeroes in array A
 to the right.

Note: Solve this problem using function.

Input
First line will contain a number N
 (1≤N≤103)
 number of elements.

Second line will contain N
 numbers (0≤Ai≤103)
.

Output
Print the array after shifting right all its zeros.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void shiftZeros(int a[], int length)
{
    for (int i = length - 1; i >= 0; i--)
    {
        if (a[i] == 0)
        {
            int pos = i;
            int temp = a[i];
            for (int j = pos; j < length - 1; j++)
            {
                a[j] = a[j + 1];
            }
            a[length - 1] = temp;
        }
    }
    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    shiftZeros(a, n);
    return 0;
}