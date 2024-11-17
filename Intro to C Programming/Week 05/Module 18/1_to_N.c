#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printNumbers(int x,int n){
    if(x > n){
        return;
    }
    printf("%d\n",x);
    printf("Before calling function,Current X = %d\n",x);
    printNumbers(x+1,n);
    printf("After calling function,Current X = %d\n",x);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Before function call in main\n");
    printNumbers(1,n);
    printf("After function call in main\n");
    return 0;
}