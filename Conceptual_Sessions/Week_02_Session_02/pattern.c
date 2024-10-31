// topic: reverse
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int star =(2*n) -1;

    for(int row = n;row >= 1;row--){
        for(int space = 1; space <= n-row;space++){
            printf(" ");
        }

        for(int j= star;j>=1;j--){
            printf("*");
        }
        star-=2;
        printf("\n");
    }

    return 0;
}