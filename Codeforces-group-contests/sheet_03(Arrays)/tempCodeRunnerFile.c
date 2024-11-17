#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    char a[n+1];
    scanf("%s",a);
    int sum=0;
    for(int i=0;i<n;i++){
        int value = a[i] - '0';
        sum+=value;
    }
    printf("%d",sum);
    return 0;
}