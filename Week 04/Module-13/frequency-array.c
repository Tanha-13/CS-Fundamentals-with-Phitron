#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int a[n+5];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int f[100000] = {0};
    for(int i=0;i<n;i++){
        // int value = a[i];
        // f[value]++;

        // f[a[i]]++;
        f[a[i]] = 1;
    }

    //printing frequency array
    for(int i=0;i<=n;i++){
        printf("%d %d\n",i,f[i]);
    }
    
    return 0;
}