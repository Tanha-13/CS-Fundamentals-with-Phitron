/**
 * Given two numbers X and Y. Print the sum of all odd numbers between them, excluding X and Y.

Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain two numbers X and Y (0 ≤ X, Y ≤ 104).

Output
Print the sum of all odd numbers between X and Y (excluding X and Y).
 */
#include <stdio.h>
int main()
{

    int t;
    scanf("%d", &t);
    int x, y;
    for (int j = 1; j <= t; j++)
    {
        int sum=0,flag=0;
        scanf("%d %d", &x, &y);
        if(x > y){
            for(int i = y;i<x;i++){
                flag++;
                if(i%2 != 0){
                    sum+=i;
                }
            }
        }
        else if(y > x){
            for(int i = x+1;i<y;i++){
                flag++;
                if(i%2 != 0){
                    sum+=i;
                }
            }
        }
        
        if(flag == 0){
            printf("0\n");
        }
        else{
            printf("%d\n",sum);
        }
    }

    return 0;
}