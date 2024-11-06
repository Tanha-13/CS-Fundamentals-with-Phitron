#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// void fun(int a[], int length){
//     for(int i=0;i<length;i++){
//         printf("%d\n",a[i]);
//     }
//     a[0] = -100;
// }
void fun(int *a, int length){
    for(int i=0;i<length;i++){
        printf("%d\n",*(a+i));
    }
    a[0] = -100;
}

int main() {
    int a[5] = {1,2,3,4,5};
    fun(a,5);
    for(int i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}