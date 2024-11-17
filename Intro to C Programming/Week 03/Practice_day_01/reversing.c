/**
Given a number N and an array A of N numbers. Print the array in a reversed order.

Note:

*Don't use built-in-functions.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers (0 ≤ Ai ≤ 109).

Output
Print the array in a reversed order.
 */
#include<stdio.h>
int a[10000000];
int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int middle = n/2;

    for(int i = 0;i<=middle; i++){
        for(int j = n-1;j>=i;j--){
            
        }
    }

    for(int i =0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}