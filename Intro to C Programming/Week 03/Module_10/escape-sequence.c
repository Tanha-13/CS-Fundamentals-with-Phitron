#include<stdio.h>
int main(){
    char str[] = "Bangladesh is a \"beautiful\" cou\\ntry";
    fputs(str,stdout);
    return 0;
}


// escape sequence - special character
/**
 * 1. \n
 * 2. \t
 * 3. \0
 * 4. \"\"
 */