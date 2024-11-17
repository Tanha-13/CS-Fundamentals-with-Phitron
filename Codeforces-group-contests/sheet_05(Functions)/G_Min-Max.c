/**
 * Given an array A of size N. Print the minimum and the maximum number in the array.

Note: Solve this problem using function.

Input
First line will contain a number N (1 ≤ N ≤ 103) number of elements.

Second line will contain N numbers (0 ≤ Xi ≤ 105).

Output
Print the minimum and the maximum number separated by a space.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    int *p = a;

    for(int i = 0;i<n;i++){
        scanf("%d", p+i);
    }
    int min = *p;
    int max = *p;
    for(int i =0;i<n;i++){
        if(min >= *(p+i)){
            min = *(p+i);
        }
        if(max <= *(p+i)){
            max = *(p+i);
        }
    }
    printf("%d %d",min,max);
    return 0;
}