/**
 * Given a number N and an array A of N numbers. Determine if the number X exists in array A or not and print its position (0-index).

Note: X may be found once or more than once and may not be found.

Input
First line contains a number N (1 ≤ N ≤ 105) number of elements.

Second line contains N numbers (0 ≤ Ai ≤ 109).

Third line contains a number X (0 ≤ X ≤ 109).

Output
Print the position of X in the first time you find it. If it doesn't exist print -1.
 */
#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d", &n);
    int a[n],x;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    //output: using a count variable
    // for(int i=0;i<n;i++){
    //     if(a[i] == x){
    //         printf("%d", i);
    //         count++;
    //         break;
    //     }
    // }
    // if(count == 0){
    //     printf("-1");
    // }
    // output: using the last index+1
    // int i;
    // for(i=0;i<n;i++){
    //     if(a[i] == x){
    //         printf("%d", i);
    //         break;
    //     }
    // }
    // if(i == n){
    //     printf("-1");
    // }

    //output: solution from session
    int search = -1;
    for(int i=0;i<n;i++){
        if(a[i] == x){
            search = i;
            break;
        }
    }
    printf("%d",search);
    return 0;
}