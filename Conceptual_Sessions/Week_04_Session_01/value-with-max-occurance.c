#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int frequency[6] = {0};
    for (int i = 0; i < n; i++)
    {
        frequency[arr[i]]++;
    }

    int max = -1 , pos= -1;
    for (int i = 0; i < 6; i++)
    {
        if (frequency[i] > 0)
        {
            if (max < frequency[i])
            {
                max = frequency[i];
                pos=i;
            }
        }
    }
    printf("%d : %d",pos,max);
    return 0;
}