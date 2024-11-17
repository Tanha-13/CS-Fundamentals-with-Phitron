#include<stdio.h>
#include<string.h>
int main(){
    // char str[10] = "abcde ab";
    char str[20];
    scanf("%[^\n]s",&str);

    // fgets(str,sizeof(str),stdin); //output: it will print one extra length.


    //manual
    // int length =0;
    // for(int i=0;str[i] != '\0';i++){
    //     length++;
    // }

    //using built in methods
    int length = strlen(str);
    printf("%d",length);


    return 0;
}