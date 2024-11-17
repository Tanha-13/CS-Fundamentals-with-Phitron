/**
 * Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.

Input
Only one line containing three numbers A, B, C ( - 106  ≤  A, B, C  ≤  106)

Output
Print the values in ascending order followed by a blank line and then the values in the sequence as they were read.
 */
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a <= b && a <= c){
        // a is min
        if(b <= c){
            // c max
            printf("%d\n%d\n%d\n",a,b,c);
        }
        else{
            // b max
            printf("%d\n%d\n%d\n",a,c,b);

        }
    }
    else if(b <= a && b <= c){
        // b is min
        if(a <= c){
            // c is max
            printf("%d\n%d\n%d\n",b,a,c);
        }  
        else{
            // a is max
            printf("%d\n%d\n%d\n",b,c,a);

        }      
    }
    else{
        // c is minimum
        if(a<=b){
            // b is max
            printf("%d\n%d\n%d\n",c,a,b);
            
        }
        else{
            // a is max
            printf("%d\n%d\n%d\n",c,b,a);

        }
    }
    printf("\n");
    printf("%d\n%d\n%d",a,b,c);
    
    return 0;
}