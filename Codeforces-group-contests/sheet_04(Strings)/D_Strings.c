/**
 * Given two strings A and B. Print three lines contain the following:

The size of the string A and size of the string B separated by a space
The string produced by concatenating A and B (A + B).
The two strings separated by a single space respectively, after swapping their first character.
For more clarification see the example below.

Input
The first line contains a string A (1 ≤ |A| ≤ 10) where |A| is the length of A.

The second line contains a string B (1 ≤ |B| ≤ 10) where |B| is the length of B.

Output
Print the answer required above.
 */
#include<stdio.h>
#include<string.h>

int main(){

    char a[11],b[11];
    scanf("%[^\n]s",a);
    getchar();
    scanf("%[^\n]s",b);

    printf("%d %d\n",strlen(a),strlen(b));
    printf("%s%s\n",a,b);
    char temp;
    temp = a[0];
    a[0] = b[0];
    b[0] =temp;

    printf("%s %s",a,b);
    return 0;
}