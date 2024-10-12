/**
 * Given a lowercase alphabet character. You have to print the next character in the alphabet.

Input
Only one line containing a lowercase English letter C
.

Output
Print the next letter to C
 in the alphabet.
 */
#include<stdio.h>
int main(){
    char c;
    scanf("%c", &c);
    if(c>='a' && c<'z'){
        printf("%c", c+1);
    }
    else if(c == 'z'){
        printf("%c", c-25);
    }

    return 0;
}