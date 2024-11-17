/**
 * Given a number N and an array A of N numbers. Determine if it's palindrome or not.

Note:

An array is called palindrome if it reads the same backward and forward, for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.

NOTE: Solve it using recursion.

Input
First line contains a number N (1 ≤ N ≤ 105) number of elements.

Second line contains N numbers (1 ≤ Ai ≤ 109).

Output
Print "YES" (without quotes) if A is a palindrome array, otherwise, print "NO" (without quotes).
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int palindrome(int *a,int i,int j){
    if(i > j){
        return 1;
    }
    return a[i] == a[j] && palindrome(a,i+1,j-1);
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n+5];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(palindrome(a,0,n-1)){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}