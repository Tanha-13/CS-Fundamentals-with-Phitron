/**
 * Given String S
. Determine if there is a Subsequence in S
 that is equal to "hello" or not.

Note: A subsequence is a sequence that can be derived from another sequence by deleting some elements without changing the order of the remaining elements.

For example: The list of all subsequence for the word "apple" would be "a", "ap", "al", "ae", "app", "apl", "ape", "ale", "appl", "appe", "aple", "apple", "p", "pp", "pl", "pe", "ppl", "ppe", "ple", "pple", "l", "le", "e".

Input
Only one line contains a string S
 (5≤|S|≤104)
 where |S| is the length of the string and it consists of lowercase English letters.

Output
Print "YES" if there exists an Subsequence equal to "hello" otherwise, print "NO".
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

    char s[10001];
    scanf("%s",s);
    int length = strlen(s);

    char sub[] = "hello";

    int j=0;
    int flag =0;
    for(int i=0;i<length;i++){
       if(sub[j] == s[i]){
        j++;
        flag++;
       }
    }
    int len = strlen(sub);
    if(flag == len){
        printf("YES");
    }
    else{
       printf("NO"); 
    }
    return 0;
}