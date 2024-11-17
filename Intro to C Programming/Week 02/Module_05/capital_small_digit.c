/**
 * Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.

Note:
Digits in ASCII '0' = 48,'1' = 49 ....etc
Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
Small letters in ASCII 'a' = 97,'b' = 98 ....etc

Input
Only one line containing a character X which will be a capital or small letter or digit.

Output
Print a single line contains "IS DIGIT" if X is digit otherwise, print "ALPHA" in the first line followed by a new line that contains "IS CAPITAL" if X is a capital letter and "IS SMALL" if X is a small letter.
 */

#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if(ch >= '0' && ch <= '9'){
        printf("IS DIGIT\n");
    }
    else{
        printf("ALPHA\n");

        if(ch >= 'a' && ch<='z'){
            printf("IS SMALL");
        }
        // else if(ch >= 'A' && ch <= 'Z'){
        //     printf("IS CAPITAL");
        // }
        else{
            printf("IS CAPITAL");
        }
    }
    
    return 0;
};

// approach 02: converting the character into ascii value and compare the value.
    // char value;
    // scanf("%c", &value);
    // if ((int)value >= 48 && (int)value <= 57)
    // {
    //     printf("IS DIGIT\n");
    // }
    // else{
    //     printf("ALPHA\n");
        
    //     if ((int)value >= 97 && (int)value <= 122){
    //         printf("IS SMALL\n");
    //     }
    //     else if ((int)value >= 65 && (int)value <= 90){
    //         printf("IS CAPITAL\n");
    //     }
    // }