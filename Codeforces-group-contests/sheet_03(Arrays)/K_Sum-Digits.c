/**
 * Given a number N and an array A of N digits (not separated by space). Print the summation of these digits.

Input
First line contains a number N (1  ≤  N  ≤  106) number of digits.

Second line contains N digits (0 ≤ Ai ≤ 9).

Output
Print the summation of these digits.
 */

#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    char a[n+1];
    scanf("%s",a);
    int sum=0;
    for(int i=0;i<n;i++){
        int value = a[i] - '0';
        sum+=value;
    }
    printf("%d",sum);
    return 0;
}