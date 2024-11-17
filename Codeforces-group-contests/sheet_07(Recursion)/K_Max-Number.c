/**
 * Given a number N and an array A of N numbers. Print the maximum value in this array.

Note: Solve this problem using recursion.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

Output
Print the maximum value in this array.
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int maxNumber(int a[],int i,int n){
    if(i == n){
        return 0;
    }
    int max = a[0];
    if(max < a[i]){
        max = a[i];
    }
    maxNumber(a,i+1,n);
    return max;

}

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int max = maxNumber(a,0,n);
    printf("%d",max);
    return 0;
}