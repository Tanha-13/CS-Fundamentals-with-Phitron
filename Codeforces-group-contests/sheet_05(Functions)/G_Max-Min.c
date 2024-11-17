/**
 *Given an array A of size N. Print the minimum and the maximum number in the array.

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

int maxValue(int a[], int n){
    int max = a[0];
        for(int i=0;i<n;i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    return max;
}
int minValue(int a[], int n){
    int min = a[0];
        for(int i=0;i<n;i++){
        if(min > a[i]){
            min = a[i];
        }
    }
    return min;
}
void minMax(int a[],int n){

    int max = maxValue(a,n);
    int min = minValue(a,n);
    
    printf("%d %d",min, max);
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    minMax(a,n);
    return 0;
}