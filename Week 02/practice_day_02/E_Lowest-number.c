/**
 * Given a number N and an array A of N numbers. Print the lowest number and its position.

Note: if there are more than one answer print first one's position.

Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-105  ≤  Ai  ≤  105).

Output
Print the lowest number and its position (1-index)
 */
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], i,pos=0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int min = a[0];

    for (i = 0; i < n; i++)
    {

        if (min > a[i])
        {
            min = a[i];
            pos=i;
        }
        
    }
    printf("%d %d", min, pos+1);

    return 0;
}