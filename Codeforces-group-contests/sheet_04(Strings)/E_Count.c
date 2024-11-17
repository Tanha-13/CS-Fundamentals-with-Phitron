/**
 * Given a string S. Print the summation of its digits.

Input
Only one line contains a string S (1 ≤ |S| ≤ 106) where |S| is the length of the string.

It's guaranteed that S contains only digits from 0 to 9.

Output
Print the answer required above.
 */
#include<stdio.h>
#include<string.h>
int main(){

    char s[1000001];
    scanf("%s",s);

    int length = strlen(s);
    int sum =0;
    for(int i=0;i<length;i++){
        int value = s[i] - '0';
        sum +=value;
    }
    printf("%d",sum);
    return 0;
}