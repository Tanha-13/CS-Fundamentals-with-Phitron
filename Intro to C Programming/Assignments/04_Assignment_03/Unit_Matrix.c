/**
 *Problem Statement

You will be given a matrix of size N * N. You need to tell if it is unit matrix or not.

Note: A matrix is called a unit matrix if all the primary diagonal elements are 1 and all the non-diagonal elements are 0.

Input Format

First line will contain N, the row and column of the square matrix.
Then the N * N sized matrix will be given where the values are integer only.
Constraints

1 <= N <= 100
0 <= Values <= 100
Output Format

Ouput "YES" if the matrix is unit matrix, otherwise output "NO" without the quotation marks. 
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    int m[n][n];
    for(int row = 0;row < n;row++){
        for(int col = 0;col < n; col++){
            scanf("%d", &m[row][col]);
        }
    }

    int count = 1;
    for(int row = 0;row < n;row++){
        for(int col = 0;col < n; col++){
            if(row == col){
                if(m[row][col] != 1){
                    count = 0;
                    break;
                }
            }
            else{
                if(m[row][col] != 0){
                    count = 0;
                }
            }
        }
    }
    if(count == 1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    

    return 0;
}

