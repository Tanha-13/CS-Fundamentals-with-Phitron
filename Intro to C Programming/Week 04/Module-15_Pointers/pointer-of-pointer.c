#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a = 5;
    int *x = &a;
    int **y = &x;
    printf("%d %d\n", y, &x);
    printf("%d %d\n", **y, a);
    return 0;
}