#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void distribution(int roll, int x){
    if(roll == 4){
        return;
    }
    printf("Roll %d received 1 Chocolate\n",roll);
    distribution(roll+1,x-1);
}

int main() {
    int roll,chocolate;
    scanf("%d %d",&roll,&chocolate);
    distribution(roll,chocolate);

    return 0;
}