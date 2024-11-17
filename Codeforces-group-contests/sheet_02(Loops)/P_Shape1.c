/**
 * Given a number N. Print a face down right angled triangle that has N rows.

For more clarification see the example below.

Input
Only one line containing a number N (1 ≤ N ≤ 99).

Output
Print the answer according to the required above.
 */
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int row = n;row>=1;row--){
        for(int col=1;col<=row;col++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}