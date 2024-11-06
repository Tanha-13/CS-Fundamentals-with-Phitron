#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void printNumbers(int x,int n){
    if(x > n){
        return;
    }
    printNumbers(x+1,n);
    printf("x = %d\n",x);
}

int main() {
    int n;
    scanf("%d",&n);
    printNumbers(1,n);
    return 0;
}