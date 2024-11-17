#include<stdio.h>
int main(){

    int arr[5];
    int i;
    printf("Enter the values: \n");
    for(i=0;i<5;i++){
        scanf("%d", &arr[i]);
    }
    //
    for(i=0;i<5;i++){
        arr[i]+=5;
    }
    printf("Display the values: \n");
    for(i=0;i<5;i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}