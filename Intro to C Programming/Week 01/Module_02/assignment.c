#include <stdio.h>
int main(){
    int a = 10;

    printf("%d\n", a+=5); //output:15
    printf("%d\n", a-=5); //output:10
    printf("%d\n", a*=5); //output:50
    printf("%d\n", a / 5); //output: 10
    printf("%d", a%=5); //output: 0
    return 0;
}

