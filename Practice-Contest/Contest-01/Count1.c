/**
 * Problem Statement

You will be given an integer array A of size N. You need to count the number of elements that are divided by 2 and number of elements that are divided by 3. If any number is divided by both 2 and 3, then consider it only for 2.

Input Format

First line will contain N, the size of the array
Second line will contain the array A.
Constraints

1 <= N <= 10^5
0 <= A[i] <= 10^9; here 0 <= i < N
Output Format

Output the number of elements that are divided by 2 first, then print the number of elements that are divided by 3.
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    return 0;
}