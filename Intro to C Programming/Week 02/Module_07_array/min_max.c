#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    printf("Enter the number of array:");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // int min = INT_MAX;
    // int max = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > max)
    //     {
    //         max = arr[i];
    //     }
    //     if(arr[i] < min){
    //         min = arr[i];
    //     }
    // }

    //different approach
    int min = arr[0];
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > max){
            max=arr[i];
        }
        if(arr[i] < min){
            min=arr[i];
        }
    }
    printf("minimum: %d\n", min);
    printf("Maximum: %d", max);

    return 0;
}