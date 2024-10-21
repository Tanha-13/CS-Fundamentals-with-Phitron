#include<stdio.h>

int a[100000],b[100000];

int main(){

    int lengthA=0;
    int lengthB=0;
    scanf("%d",&lengthA);

    for(int i=0;i<lengthA;i++){
        scanf("%d",&a[i]);
    }

    printf("Before Copy\n");
    for(int i=0;i<lengthA;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<lengthA;i++){
        printf("%d ",b[i]);
    }

    for(int i=0;i<lengthA;i++){
        b[i] = a[i];
    }
    lengthB = lengthA;

    //update a value in a array
    a[2]= 10;

    printf("\nAfter Copy\n");
    for(int i=0;i<lengthA;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<lengthB;i++){
        printf("%d ",b[i]);
    }

}