/**
 * Given a number N and an array A of N numbers. Print the array after doing the following operations:

Find minimum number in these numbers.
Find maximum number in these numbers.
Swap minimum number with maximum number.
Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers ( - 105 ≤ Ai ≤ 105)

It's guaranteed that all numbers are distinct.

Output
Print the array after the replacement operation.
 */
#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int max = a[0];
    int min = a[0];
    int minPos =0, maxPos=0;

    for(int i=0;i<n;i++){
        if(a[i] >= max){
            max = a[i];
            maxPos = i;
            
        }
        else if(a[i] <= min){
            min = a[i];
            minPos = i;
        }
    }
   
   int temp = a[minPos];
   a[minPos] = a[maxPos];
   a[maxPos] =temp;

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
    return 0;
}