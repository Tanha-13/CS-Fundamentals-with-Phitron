#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void add(int a,int b){
    int result = a+b;
    printf("%d\n",result);
    return;
}

void alphaCheck(char ch){
    if(ch >= 'a' && ch <='z'){
        printf("Lower");
    }
    else{
        printf("Upper");
    }
}

int main() {

    int a,b;
    char ch;
    scanf("%d %d", &a,&b);
    scanf("%c",&ch);
    add(a,b);
    alphaCheck(ch);
    return 0;
}