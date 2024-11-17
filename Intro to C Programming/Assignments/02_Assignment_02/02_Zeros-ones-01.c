/**
 * In this problem you will be given an integer N, followed by N numbers.

Each numbers will be either 0 or 1.

You need to print two integers, The first one will be the number of 0's and the second one will be the number of 1' s in the input.

Input Format

The first line will contain a single integer N.
The second line will contain N integers.
Constraints

1 <= N <= 100000
Each N numbers will be either 0 or 1.
Output Format

Print two space separated integers, total number of 0's and 1's.
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d",&n);
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    int numbers;
    int totalZero =0, totalOne =0;
    for(int i=0;i<n;i++){
        scanf("%d",&numbers);
        if(numbers==0){
            totalZero++;
        }
        else if(numbers == 1){
            totalOne++;
        }
    }
    printf("%d %d", totalZero,totalOne);

    return 0;
}