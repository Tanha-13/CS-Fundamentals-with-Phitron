/**
 * Given a string S. Print the origin string after replacing the following:

Replace every comma character ',' with a space character.
Replace every capital character in S with its respective small character and Vice Versa.
Input
Only one line contains a string S (1 ≤ |S| ≤ 105) where |S| is the length of the string and it consists of lower and upper English letters and comma character ','.

Output
Print the string after the conversion
 */
#include<stdio.h>
#include<string.h>
int main(){

    char s[100001];
    fgets(s,sizeof(s),stdin);

    int length = strlen(s);
    for(int i=0;i<length;i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            printf("%c",s[i]+32);
        }
        else if(s[i] >= 'a' && s[i] <= 'z'){
            printf("%c",s[i]-32);
        }
        else if(s[i] == ','){
            printf(" ");
        }
    }

    return 0;
}