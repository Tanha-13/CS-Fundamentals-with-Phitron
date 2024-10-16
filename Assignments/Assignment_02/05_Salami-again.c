/**
 * This year abul is giving his cusins salami.

But one of his cusin has came to him and complained that he gave everyone different amounts of salami, so some got more and some got less.

So abul decided he will give everyone equal salami. He told his cousins to find out who got the maximum salami and to tell him how much more everyone else need to get equal salami. They came to you for help. Now you have an array containing N integers, the amount of salami of each cousin.

You need to print N integers in a line, for each salami amount, the difference of it from the maximum amount.

Input Format

The first line of input will contain an integer N.
The second line of input will contain N integers.
Constraints

1 <= N <= 100000
Each salami amount will be positive and less than 10^9
Output Format

Print N space separated integers, i_th of which will be the difference of the maximum amount and i_th cousin's salami amount.
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int salami[n];
    //taking input
    for(int i=0;i<n;i++){
        scanf("%d",&salami[i]);
    }
    int maximum=salami[0];
    //find the maximum value
    for(int i=0;i<n;i++){
        if(salami[i] > maximum){
            maximum = salami[i];
        }
    }
    
    //print the output
    for(int i=0;i<n;i++){
        printf("%d ",maximum-salami[i]);
    }
    return 0;
}