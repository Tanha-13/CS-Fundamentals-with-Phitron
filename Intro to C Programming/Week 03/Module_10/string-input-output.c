// #include<stdio.h>
// int main(){

//     return 0;
// }
#include <stdio.h>
int main()
{
    // char str[10] = "abcd";
    // for(int i=0;i<4;i++){
    //     printf("%c", str[i]);
    // }

    char str[100];
    scanf("%s",&str);
    // scanf("%[^\n]s",str);
    // gets(str); //problem: overflow of text
    fgets(str, sizeof(str), stdin);
    // puts(str); //problem: deprecated
    // fputs(str,stdout);
    printf("%s", str);

    return 0;
}