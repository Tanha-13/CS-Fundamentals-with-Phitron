#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    scanf("%s %s",a,b);

    // checking the first value of two strings
    int i=0;
    while(1){
        //checking till the last value
        // will be the same value of each value
        if(a[i] == '\0' && b[i] == '\0'){
            printf("Same\n");
            break;
        }
        else if(a[i] == '\0'){
            printf("a is smaller");
            break;
        }
        else if(b[i] == '\0'){
            printf("b is smaller");
            break;
        }

        // difference checking
        if(a[i] > b[i]){
            printf("b is smaller");
            break;
        }
        else if(a[i] < b[i]){
            printf("a is smaller");
            break;
        }
        else if(a[i] == b[i]){
            i++;
        }
        
    }

    return 0;
}