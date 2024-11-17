/**
 * Given a number N
 and an array A
 of N
 numbers. Determine if it's palindrome or not.

Note:

An array is called palindrome if it reads the same backward and forward, for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.

Input
First line contains a number N
 (1≤N≤105)
 number of elements.

Second line contains N
 numbers (1≤Ai≤109)
.

Output
 */
#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int b[n];

    for(int i=0;i<n;i++){
        b[i] = a[i];
    }

    int j=n-1;
    for(int i=0;i<j;i++){
        int temp = b[j];
        b[j] = b[i];
        b[i] =temp;
        j--;
    }

    int count =0;

    for(int i=0;i<n;i++){
        if(a[i] == b[i]){
            count++;
        }
    }
    if(count == n){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}