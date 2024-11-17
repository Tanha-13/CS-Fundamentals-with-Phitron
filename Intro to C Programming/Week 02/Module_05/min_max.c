/**
 * Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

Input
Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

Output
Print the minimum number followed by a single space then print the maximum number.
 */

#include <stdio.h>
int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    // minimum
     if(A<=B && A<=C){
         printf("%d ", A);
     }
     else if(B<=A && B<=C){
         printf("%d ", B);
     }

     else{
         printf("%d ", C);
     }

    // maximum
     if(A>=B && A>=C){
         printf("%d", A);
     }
     else if(B>=A && B>=C){
         printf("%d", B);
     }
     else{
         printf("%d", C);
     }


// imp: approach 02
    //minimum
    // if (A <= B){
    //     // A,C
    //     if (A <= C){
    //         printf("%d ", A);
    //     }
    //     else{
    //         printf("%d ", C);
    //     }
    // }
    // else{
    //     if (B <= C){
    //         printf("%d ", B);
    //     }
    //     else{
    //         printf("%d ", C);
    //     }
    // }

    // //maximum
    // if (A >= B){
    //     // A,C
    //     if (A >= C){
    //         printf("%d ", A);
    //     }
    //     else{
    //         printf("%d ", C);
    //     }
    // }
    // else{
    //     if (B >= C){
    //         printf("%d ", B);
    //     }
    //     else{
    //         printf("%d ", C);
    //     }
    // }
}