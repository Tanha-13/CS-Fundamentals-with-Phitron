/**
 * Given a mathematical expression. The expression will be one of the following expressions:

A + B = C, A - B = C and A * B = C

where A, B, C are three numbers, S is the sign between A and B, and Q the '=' sign

Print "Yes" If the expression is Right , Otherwise print the right answer of the expression.

Input
Only one line containing the expression: A, S, B, Q, C respectively (0 ≤ A, B ≤ 100,  - 105 ≤ C ≤ 105) and S can be ('+', '-', '*') without the quotation.

Output
Output either "Yes" (without the quotation) or the right answer depending on the statement.
 */
#include<stdio.h>
int main(){
    int a,b,c;
    char s,q;
    scanf("%d %c %d %c %d",&a,&s,&b,&q,&c);
    if(s == '+' && q == '='){
        if(a+b == c){
            printf("Yes");
        }
        else{
            printf("%d",a+b);
        }
    }
    else if(s == '-' && q == '='){
        if(a-b == c){
            printf("Yes");
        }
        else{
            printf("%d",a-b);
        }
    }
    else if(s == '*' && q == '='){
        if(a*b == c){
            printf("Yes");
        }
        else{
            printf("%d",a*b);
        }
    }

    return 0;
}