/**
 * Given two strings X and Y . Print the smallest lexicographical one.

Note: Lexicographical is the way of ordering the words based on the alphabetical order of their component letters.

Input
Only one line contains two strings X, Y(1 ≤ |X|, |Y| ≤ 20) consists of lowercase English letters.

Output
Print the smallest lexicographical string.

Note: If both of X and Y are equal, print any of them.
 */
#include<stdio.h>
#include<string.h>
int main(){
    char x[20],y[20];
    scanf("%s %s",&x,&y);

    int result = strcmp(x,y);
    if(result == 0){
        printf("%s",x);
    }
    else if(result < 0){
        printf("%s",x);
    }
    else{
        printf("%s",y);
    }

    return 0;
}