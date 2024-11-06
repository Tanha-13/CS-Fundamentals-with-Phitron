#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int add(){
    int a,b;
    scanf("%d %d", &a, &b);
    int sum = a+b;
    // printf("%d",sum);
    return sum;
}

void mul(int x,int y){
    int multiplication = x * y;
    printf("%d", multiplication);
}
int main() { 
    mul(add(), 10);
    return 0;
}