/**
 * Given a number N and an array A of N numbers. Determine if the array is lucky or not.

Note: the array is lucky if the frequency (number of occurrence) of the minimum element is odd.

Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers ( - 105 ≤ Ai ≤ 105).

Output
Print "Lucky" (without quotes) if the frequency of the minimum element is odd, otherwise print "Unlucky"(without quotes).
 */
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int min =a[0];
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i] <min){
            min = a[i];
        }
    }

    for(int i=0;i<n;i++){
        if(a[i] == min){
            count++;
        }
    }
    if(count%2 != 0){
        printf("Lucky");
    }
    else{
        printf("Unlucky");
    }

    return 0;
}