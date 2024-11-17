/**
 * Given a number N. Print a diamond that has 2N rows.

For more clarification see the example below.

Input
Only one line containing number N (1 ≤ N ≤ 99).

Output
Print the answer according to the required above.
 */

// output: merging two different patterns 
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int count = 1;
//     for (int row = 1; row <= n; row++)
//     {
//         for (int space = 1; space <= n - row; space++)
//         {
//             printf(" ");
//         }
//         for (int star = 1; star <= count; star++)
//         {
//             printf("*");
//         }
//         count += 2;
//         printf("\n");
//     }

//     count = (2 * n) - 1;
//     for (int row = n; row >= 1; row--)
//     {
//         for (int space = 1; space <= n - row; space++)
//         {
//             printf(" ");
//         }

//         for (int star = 1; star <= count; star++)
//         {
//             printf("*");
//         }
//         count -= 2;
//         printf("\n");
//     }

//     return 0;
// }

// output: creating them in one loop
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int space = n-1;
    int star =1;
    for(int row =1;row <= 2*n; row++){
        for(int j=1;j<=space;j++){
            printf(" ");
        }
        for(int j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
        
        if(row < n){
            space--;
            star+=2;
        }
        else if(row > n){
            space++;
            star-=2;
        }
    }

    return 0;
}