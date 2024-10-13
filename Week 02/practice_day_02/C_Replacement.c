/**
 * Given a number N and an array A of N numbers. Print the array after doing the following operations:

Replace every positive number by 1.
Replace every negative number by 2.
Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-105  ≤  Ai  ≤  105).

Output
Print the array after the replacement and it's values separated by space.
 */

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i] > 0){
            a[i] = 1;
        }
        else if(a[i] < 0){
            a[i] = 2;
        }
        printf("%d ",a[i]);
    }
    

    return 0;
}