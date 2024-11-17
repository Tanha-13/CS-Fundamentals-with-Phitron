#include <stdio.h>
int main(){

    int number;
    scanf("%d", &number);
    // for(int i = 1; i<=10;i++){
    //     printf("%d X %2d = %2d\n", number,i,number*i);
    // }

    for(int i = 1; i<=number;i++){
        for(int j = 1; j<=10; j++){
            printf("%d X %3d = %3d\n", i,j,i*j);
        }
        printf("\n\n");
    }
    return 0;
}