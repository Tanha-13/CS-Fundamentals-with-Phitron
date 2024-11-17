#include<stdio.h>
#include<string.h>
int main(){
    char a[10];
    char b[10] = "abcdef";

    // int length = strlen(b);

    // for(int i=0; i < length; i++){
    //     a[i] = b[i];
    // }

    // a[length] = '\0';


    //topic: using built in methods - strcpy
    // b -> a
    strcpy(a,b);
    printf("%s %s",a,b);
    // printf("%d\n%s %s",length,a,b);


    //
    char c[10];
    strcpy(c,"welcome");
    printf("\n%s", c);



    return 0;
}