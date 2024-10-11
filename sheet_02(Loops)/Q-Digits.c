/**
 * Given a number N. Print the digits of that number from right to left separated by space.

Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 109)

Output
For each test case print a single line contains the digits of the number separated by space.
 */

#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    for(int i=1;i<=t;i++){

        int n;
        scanf("%d", &n);

        if(n == 0){
            printf("0");
        }

        while(n > 0){
            int digit = n %10;
            printf("%d ", digit);
            n=n/10;
        }
        printf("\n");
    }

    return 0;
}