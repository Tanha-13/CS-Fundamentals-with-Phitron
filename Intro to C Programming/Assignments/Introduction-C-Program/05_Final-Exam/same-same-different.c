/**
 * You will be given 3 strings each of same length consisting of only small case letters. In one operation you can change a letter to any other letter of one of the strings.

You have to find out the minimum number of operations to make all 3 strings same.

Input Format

The input will contain 3 Strings.

Constraints

1 <= Length of each string <= 100

Output Format

Print an integer, the minimum number of operations to make the strings same.
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int totalOperation(char a[], char b[], char c[], int i){
    int length = strlen(a);
    if(i == length){
        return 0;
    }

    if((a[i] == b[i]) && (b[i] == c[i]) && (c[i] == a[i])){
        return 0 + totalOperation(a,b,c,i+1);
    }
    else if((a[i] != b[i]) && (b[i] != c[i]) && (c[i] != a[i])){
        return 2 + totalOperation(a,b,c,i+1);
    }
    else{
        return 1 + totalOperation(a,b,c,i+1);
    }
}

int main() {

    char str1[101],str2[101],str3[101];
    scanf("%s %s %s",str1,str2,str3);
    int operation = totalOperation(str1,str2,str3,0);
    printf("%d",operation);


    return 0;
}
