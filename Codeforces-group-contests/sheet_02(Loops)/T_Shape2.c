/**
 * Given a number N. Print a pyramid that has N rows.

For more clarification see the example below.

Input
Only one line containing a number N (1 ≤ N ≤ 99).

Output
Print the answer according to the required above.
 */
// #include<stdio.h>

// int main(){

//     int n;
//     scanf("%d",&n);

//     int starCount =1;
//     for(int row =1;row<=n;row++){
//         for(int space =1;space<=n-row;space++){
//             printf(" ");
//         }
//         for(int star =1;star<=starCount;star++){
//             printf("*"); 
//         }
//         starCount+=2;
        
//         printf("\n");
//     }
//     return 0;
// }

//different approach
#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int gap = n-1;
    int star = 1;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j<=gap; j++){
            printf(" ");
        }
        for(int j = 1;j<=star;j++){
            printf("*"); 
        }
        gap--;
        star+=2;
        
        printf("\n");
    }
    return 0;
}

