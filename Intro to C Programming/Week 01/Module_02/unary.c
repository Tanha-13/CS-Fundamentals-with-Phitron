//imp: a=a+1 is similar to ++a
#include <stdio.h>
int main(){
    int a = 50;
    // topic:prefix
    // printf("%d\n", a); //output:50
    // printf("%d\n", ++a); //output:51
    // ++a;
    // printf("%d\n", a); //output:52

    //topic: postfix
    printf("%d\n", a); //output:50
    a++;
    printf("%d\n", a); //output:51

    
    return 0;
}