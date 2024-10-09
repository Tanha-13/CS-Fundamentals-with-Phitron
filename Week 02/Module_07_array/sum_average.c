#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int i;
    long long int sum=0;
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    printf("sum of the array: %lld\n",sum);
    double average = (double) sum/n;
    printf("average of the array: %.2lf\n", average);

    return 0;
}