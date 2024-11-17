#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(5 * sizeof(int));
    // int *arr = (int *)calloc(5, sizeof(int)); // all values are zero.
    for(int i =0 ;i < 5; i++){
        arr[i] = i+1;
    }
    for(int i =0 ;i < 5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    int *temp = arr;
    arr = (int *)realloc(arr, 10* sizeof(int));

    if(arr == NULL){
        arr = temp;
    }

    for(int i=5;i<10;i++){
        arr[i] = 100;
    }
    for(int i=0;i<10;i++){
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}