#include<stdio.h>
#include<string.h>
int main(){
    char str[20] = "apple";
    int length = strlen(str);
    int f[26] = {0};

    for(int i=0;i<length;i++){
        int value = str[i] - 'a';
        f[value] = 1;
    }
    int count=0;
    for(int i=0;i<=25;i++){
        if(f[i] == 1){
            count++;
            printf("%c\t", i + 'a');
        }
    }
    printf("\n%d",count);


    return 0;
}