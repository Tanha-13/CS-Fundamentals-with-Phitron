/**
 * Given a number N, and N numbers, find maximum number in these N numbers.

Input
First line contains a number N (1 ≤ N ≤ 103).

Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

Output
Print the maximum number.
 */
#include<stdio.h>
#include <limits.h>
int main(){

    int n;
    scanf("%d",&n);
    int x, max = INT_MIN;
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(x > max){
            max = x;
        }
    }
    printf("%d", max);
    return 0;
}