/**
 * Problem Statement

You will be given a non-negative integer N, you need to print all numbers from 1 to N that are divisible by both 3 and 7.

Input Format

Input will contain N.
Constraints

21 <= N <= 10000
Output Format

Output all numbers from 1 to N that are divisible by both 3 and 7. Don't forget to print a new line after every number.
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%3 == 0 && i%7 == 0){
            printf("%d\n",i);
        }
    }
    return 0;
}