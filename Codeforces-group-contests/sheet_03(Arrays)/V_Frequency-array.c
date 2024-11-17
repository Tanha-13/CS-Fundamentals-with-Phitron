/**
 * Given 2 numbers N
, M
 and an array A
 of N
 numbers. For every number from 1 to M
, print how many times this number appears in this array.

Input
First line contains two numbers N
, M
 (1≤N≤105,1≤M≤105)
.

Second line contains N
 numbers (1≤Ai≤M)
.

Output
Print M
 lines, the ith
 line should contain number of times that the number i
 appears in A
 */
// output: taking 402 ms
#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
 
    int a[n + 5];
 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
 
    int f[m+1];
    for(int i=0;i<=m;i++){
        f[i] = 0;
    }
 
    for (int i = 0; i < n; i++)
    {
        int value = a[i];
        f[value]++;
    }
 
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", f[i]);
    }
    return 0;
}
//output: taking 452 ms
// #include <stdio.h>
// int main()
// {
//     int n, m;
//     scanf("%d %d", &n, &m);

//     int a[n + 5];

//     // declaring and initializing the value of the frequency array to 0
//     int f[m + 1];
//     for (int i = 0; i <= m; i++)
//     {
//         f[i] = 0;
//     }

//     // taking input and changing the counting in the frequency array
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//         int value = a[i];
//         f[value]++;
//     }

//     for (int i = 1; i <= m; i++)
//     {
//         printf("%d\n", f[i]);
//     }
//     return 0;
// }