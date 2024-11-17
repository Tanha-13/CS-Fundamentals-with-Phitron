/**
 * Given two numbers X and Y. Print X and Y after swapping them.

Note: Solve this problem using function.

Input
Only one line contains two numbers X and Y (0 ≤ X, Y ≤ 105).

Output
Print X and Y separated by a space after swapping.
 */
//output: Using pointers
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     int x,y;
//     scanf("%d %d",&x,&y);
//     int *a = &x;
//     int *b = &y;

//     int temp = *a;
//     *a = *b;
//     *b = temp;

//     printf("%d %d",x,y);
//     return 0;
// }

//output: using function and call by reference
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;  
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d %d\n", x,y);

    int *a = &x;
    int *b = &y;
    swap(a,b);
    printf("%d %d", x,y);
    return 0;
}