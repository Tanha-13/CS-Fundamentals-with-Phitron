#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// int a[10000], add = 0;
int a[10000];

// void sum(int i,int n){
//     if(i == n){
//         return;
//     }
//     add += a[i];
//     sum(i+1,n);
// }

int getSum(int i,int n){
    if(i == n){
        return 0;
    }
    return a[i] + getSum(i+1,n);
}
int main() {

    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int add = getSum(0,n);

    printf("%d",add);
    return 0;
}