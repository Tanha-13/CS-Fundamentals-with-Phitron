/**
 * Given two numbers X and Y, Print their summation.

Note: Solve this problem using function.

Input
Only one line contains two numbers X and Y (0 ≤ X, Y ≤ 105).

Output
Print the summation value
*/

//output: using pointer
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     int x,y;
//     scanf("%d %d",&x,&y);
//     int *a = &x;
//     int *b = &y;
//     printf("%d", *a + *b);
//     return 0;
// }

//output:using function
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int summation(int x,int y){
    int sum = x+y;
    return sum;
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    int result = summation(x,y);
    printf("%d",result);

    return 0;
}