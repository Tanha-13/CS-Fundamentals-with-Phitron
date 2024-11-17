/**
 * You will be given a 2D matrix of N * M size. You will also be given X numbers. For each of the Number you have to print how many times the Number have appeared in the matrix.

Input Format

First line will contain N and M the number of row and column respectively and X,the number of integers we are going to search.
Then the 2D matrix will be given.
Then X lines will contain X integer Numbers.
Constraints

2 <= N,M,X <= 100
0 <= Element <= 1000
0 <= Number <=1000
Output Format

For each of the x integers print a single line with how many times that number have appeared.
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, m, x;
    scanf("%d %d %d", &n, &m, &x);

    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int frequency[1005] = {0};
    for (int i = 1; i <= x; i++)
    {
        int value;
        scanf("%d", &value);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == value)
                {
                    frequency[value]++;
                }
            }
        }
        printf("%d\n",frequency[value]);
    }
    return 0;
}
