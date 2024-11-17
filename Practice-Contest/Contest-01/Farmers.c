/**
 * Problem Statement

Suppose there are M1 farmers who can complete a work in D days. Fortunately, some other farmers appeared in the village before the start of the work, and now there are M2 additional farmers. Can you determine how many fewer days it will take for them to complete the task?

Note: If the answer is a floating value, take the integer part of the answer.

Input Format

First line will contain T, the number of test cases.
For each test case, input will contain three positive integers M1, M2 and D.
Constraints

1 <= T <= 1000
1 <= M1 <= 1000
0 <= M2 <= 1000
1 <= D <= 100
Output Format

Output how many fewer days it will take them to complete the work. Don't forget to put a new line after each test case.
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);
        int time = d - (((m1*d)/(m1+m2)));
        if(d > time){
            printf("%d\n",time);
        }
        else{
            printf("%d\n",d);
        }
    }
    return 0;
}