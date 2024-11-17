/**
 * Given two strings S and T. Print a new string that contains the following:

The first letter of the string S followed by the first letter of the string T.
the second letter of the string S followed by the second letter of the string T.
and so on...
In other words, the new string should be ( S0 + T0 + S1 + T1 + .... ).
Note: If the length of S is greater than the length of T then you have to add the rest of S letters at the end of the new string and vice versa.

Input
The first line contains a number N (1 ≤ N ≤ 50) the number of test cases.

Each of the N following lines contains two string S, T (1 ≤ |S|, |T| ≤ 50) consists of lower and upper English letters.

Output
For each test case, print the required string.


 */
#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char s[51],t[51];
        scanf("%s",s);
        scanf("%s",t);

        int lengthS = strlen(s);
        int lengthT = strlen(t);
        
        int j=0;
        for(int i=0;i<lengthS;i++){
            printf("%c",s[i]);
        }
    }

    return 0;
}