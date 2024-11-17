#include<stdio.h>
#include<string.h>
int main(){
    char a[10] = "apples";
    char b[10] = "apply";

    int result = strcmp(a,b);
    printf("%d\n",result);

    if(result == 0){
        printf("a and b are same");
    }
    else if(result < 0){
        printf("a is smaller than b");
    }
    else{
        printf("a is larger than b");
    }
    

    return 0;
}