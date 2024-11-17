/**
 * In this problem you will be given an integer N, followed by an array containing N numbers.

Each numbers will be either 0 or 1.

You will also be an integer X.

You will have to toggle the X_th value in the array. Toggle means if the value is 0, you will make it 1 and if it is 1 you have to make it 0.

Then you have to print the array.

Input Format

The first line will contain a single integer N.
The second line will contain N integers.
The third line will contain a single integer X.
Constraints

1 <= N, X <= 100000
Each N numbers will be either 0 or 1.
Output Format

Print the array after updating.
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(i+1 == x){
            if(arr[i] == 0){
                arr[i]=1;
            }
            else if(arr[i] == 1){
                arr[i] = 0;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}