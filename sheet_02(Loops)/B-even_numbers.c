/**
 * Given a number N. Print all even numbers between 1 and N inclusive in separate lines.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print the answer according to the required above. If there are no even numbers print -1.
 */
#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    if(n==1){
        printf("-1");
    }
    else{
        for(int i=1;i<=n;i++){
            if(i%2 == 0){
                printf("%d\n", i);
            }
        }
    }

    //info:my solution using count
    // int count = 0;
    // for(int i=1;i<=n;i++){
    //     if(i%2 == 0){
    //         printf("%d\n",i);
    //         count++;
    //     }
    // }
    // if(count == 0){
    //     printf("-1");
    // }
    return 0;
}