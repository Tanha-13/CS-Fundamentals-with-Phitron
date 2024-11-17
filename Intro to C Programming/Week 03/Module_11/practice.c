#include<stdio.h>
#include<string.h>
int main(){
    char a[200];
    char b[200];
    scanf("%s %s",a,b);
    strcat(a,b);
    
    printf("%s",a);

    return 0;
}