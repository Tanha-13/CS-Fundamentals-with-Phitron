#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // creating an array
    // int n;
    // scanf("%d",&n);
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    // for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }


    //creating a dynamic array
    // int n;
    // int *ptr = &n;
    // scanf("%d",ptr);
    
    // int *arr;
    // // memory allocation - malloc(). Initial values are garbage value.
    // // contiguous allocation - calloc(). Initial values are zero.
    // // arr = (int *)malloc(n*sizeof(int));
    // arr = (int *)calloc(n,sizeof(int));

    // // for(int i=0;i<n;i++){
    // //     scanf("%d",&arr[i]);
    // // }
    // // for(int i=0;i<n;i++){
    // //     printf("%d ",arr[i]);
    // // }

    // for(int i=0;i<n;i++){
    //     scanf("%d",arr+i);
    // }

    // // Reallocation - realloc();
    // arr = (int *)realloc(arr, (n+5)*sizeof(int));

    // for(int i=0;i<n+5;i++){
    //     scanf("%d",arr+i);
    // }
    // //problem: while creating an extended array from the existing array, if the memory space is not free, it returns NULL.
    // if(arr == NULL){
    //     printf("It is not possible to realloc.");
    // }

    // for(int i=0;i<n+5;i++){
    //     printf("%d\n",*(arr+i));
    // }



    // //memory leak
    // free(arr);

    
    return 0;
}