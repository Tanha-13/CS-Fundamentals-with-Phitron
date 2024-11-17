#include<stdio.h>
#include<string.h>
int main(){

    char a[20] = "Hello ";
    char b[20] = "World";

    // int length_a = strlen(a);
    // int length_b = strlen(b);
    // int length = length_a + length_b;
    // for(int i = length_a,j=0;i <length ; i++,j++){
    //     a[i] = b[j];
    // }
    // a[length] = '\0';

    //built in method
    strcat(a,b);
    printf("%s",a);
    return 0;
}