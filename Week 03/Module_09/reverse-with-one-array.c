#include <stdio.h>
int a[100000];
int main()
{
    int length;
    scanf("%d", &length);

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }
    // i<length && j>=0
    // for(int i=0,j=length-1;i<=j;i++,j--){
    //     int temp = a[i];
    //     a[i] = a[j];
    //     a[j] = temp;
    // }
    // alternate

    int j = length - 1;
    for (int i = 0; i < j; i++)
    {
        int temp;
        temp = a[j];
        a[j] = a[i];
        a[i] = temp;

        j--;
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}