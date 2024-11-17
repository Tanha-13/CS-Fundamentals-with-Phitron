#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]s",str);

    // int length = strlen(str);

    // int j= length -1;
    // for(int i=0;i<j;i++){
    //     int temp;
    //     temp = str[i];
    //     str[i] = str[j];
    //     str[j] = temp;
    //     j--;
    // }

    // palindrome - reverse array and the original are same.
    strrev(str); //problem: this function is not a part of standard c. so it can work on some compiler or it may not work.
    printf("%s",str);

    return 0;
}