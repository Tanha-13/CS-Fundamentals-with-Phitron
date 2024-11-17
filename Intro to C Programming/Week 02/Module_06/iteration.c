#include <stdio.h>
int main(){
    int count = 0;

    for(int i=1;i<=5;i++){
        for(int j=1;j<=6;j++){
            for(int k=1;k<=10;k++){
                count++;
            }
        }

    }
    printf("%d", count);


    return 0;
}