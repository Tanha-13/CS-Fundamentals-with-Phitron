/**
 * Given a number N and a 2D array A of size N * N. Print the absolute difference between the summation of its two diagonals (primary diagonal and secondary diagonal).

Input
First line contains a number N (1 ≤ N ≤ 100) described above.

Each of the next N lines will contain N numbers ( - 100 ≤ Ai ≤ 100).

Output
Print the absolute difference between the summation of the matrix main diagonals.
 */
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // int sum1 = 0;
    // int sum2 = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i == j)
    //         {
    //             sum1 += a[i][j];
    //         }
    //         if (i + j == n - 1)
    //         {
    //             sum2 += a[i][j];
    //         }
    //     }
    // }
    int main_diagonal = 0;
    int sec_diagonal = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                main_diagonal += a[i][j];
            }
            if (i + j == n - 1)
            {
                sec_diagonal += a[i][j];
            }
        }
    }

    // int difference = sum1 - sum2;
    // if (difference < 0)
    // {
    //     printf("%d", difference * (-1));
    // }
    // else
    // {
    //     printf("%d", difference);
    // }

    int diff = abs(main_diagonal - sec_diagonal);
    printf("%d", diff);

    return 0;
}