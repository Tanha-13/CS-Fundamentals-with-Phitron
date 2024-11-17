/**
 * Given a name S. Print "Hello, (name)" without parentheses.

Input
Only one line containing a string S.

Output
Print "Hello, " without quotes, then print name.
 */

#include <stdio.h>
int main(){

    char s[100];
    scanf("%s", &s);
    printf("Hello, %s",s );

    return 0;
}