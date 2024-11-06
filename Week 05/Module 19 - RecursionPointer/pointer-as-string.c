#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(char *str){
    printf("%s",str);
}
int main() {
    char str[10] = "world";
    fun(str);
    return 0;
}