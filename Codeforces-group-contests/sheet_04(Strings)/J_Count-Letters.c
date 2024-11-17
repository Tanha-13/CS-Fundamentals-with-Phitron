/**
 * Given a string S. Determine how many times does each letter occurred in S.

Input
Only one line contains the string S (1 ≤ |S| ≤ 107) where |S| is the length of the string and it consists of only lowercase English letters.

Output
For each character that appears in S, print a single line that contains the following format: "X : Y" where X is the letter and Y is the number of times that letter X occurred in S.

Note: you must print letters in ascending order.
 */
#include<stdio.h>
#include<string.h>
int main(){

    char str[10000001];
    scanf("%s",str);

    int length = strlen(str);

    int f[26] = {0};

    for(int i=0;i<length;i++){
        int val = str[i] - 'a';
        f[val]++;
    }

    for(int i=0;i<26;i++){
        if(f[i] > 0){
            printf("%c : %d\n",i+'a',f[i]);
        }
    }
    return 0;
}