#include<stdio.h>
int main(){
    int num[10] = {1,2,3,4,5,6,7,8,9,10};
    char ch[] = {'a','b','c'};



    int allZero[5] = {0};
    //using loop
    for(int i=0;i<5;i++){
        printf("%d\t",allZero[i]);
    }
    return 0;
}