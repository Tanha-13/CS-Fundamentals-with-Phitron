#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    //topic: with fixed checking: 0,1,2

    // int zero=0, one=0, two =0;
    // for(int i=0;i<n;i++){
    //     if(a[i] == 0){
    //         zero++;
    //     }
    //     else if(a[i] == 1){
    //         one++;
    //     }
    //     else if(a[i] == 2){
    //         two++;
    //     }
    // }
    // printf("Zero: %d\n",zero);
    // printf("One: %d\n",one);
    // printf("Two: %d\n",two);

    //topic: with anonymous checking
    int count[7] = {0};
    for(int i=0;i<n;i++){
        int val = a[i];

    }



}