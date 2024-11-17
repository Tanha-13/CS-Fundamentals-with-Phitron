#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int arr[5] = {1,2,3,4,5};
    int *p = arr;

    printf("%d %d\n", &arr[0],p);

    printf("%d\n", (p+1));

    // int a = 6;
    // int *x =&a;
    char a = '6';
    char *x =&a;
    printf("%d %d", x,x+1);
    return 0;
}