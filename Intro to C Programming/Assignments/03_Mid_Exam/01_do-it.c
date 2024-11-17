/**
 * Problem Statement

You will be given two positive integer N and K. You need to print from 1 to K, and you need to do this N times.

Please look at the sample input output.

Input Format

Input will contain N and K.
Constraints

1 <= N,K <= 100
Output Format

You need to print fron 1 to K, N times. Don't forget to print new line after printing from 1 to K.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            printf("%d ",j);
        }
        printf("\n");
    }  
    return 0;
}
