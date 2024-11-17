/**
 * You will be given a 2D matrix of N * M size. The matrix will contain integer values only. You need to print the matrix after doing the following operations.

Firstly you will swap all the elements of the first column with the elements of the last column.

After that you will swap the elements of the first row with elements of the last row.

Input Format

First line will contain N and M the row and column respectively.
Then the 2D matrix will be given.
Constraints

2 <= N,M <= 100
0 <= Element <= 100
Output Format

Print the matrix after the required operations.
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, m;
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    //swapping between columns
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = matrix[i][j];
        matrix[i][j] = matrix[i][m - 1];
        matrix[i][m - 1] = temp;
    }

    //swapping between rows
    int i=0;
    for(int j=0;j<m;j++){
        int temp = matrix[i][j];
        matrix[i][j] = matrix[n-1][j];
        matrix[n-1][j] = temp;
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
