/**
 * Given a string S. Determine whether S is Palindrome or not

Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

Input
Only one line contains a string S (1 ≤ |S| ≤ 1000) where |S| is the length of the string and it consists of lowercase letters only.

Output
Print "YES" if the string is palindrome, otherwise print "NO".
 */

// #include <stdio.h>
// #include <string.h>
// int main()
// {

//     char s[1001];
//     scanf("%s",s);
//     int length = strlen(s);
//     char t[1001];
//     //strcpy
//     strcpy(t,s);

//     int j = length - 1;
//     for (int i = 0; i <= j; i++)
//     {
//         char temp;
//         temp = s[i];
//         s[i] = s[j];
//         s[j] = temp;
//         j--;
//     }

//     int count = 0;
//     int i;
//     for (i = 0; i < length; i++)
//     {
//             if (t[i] == s[i])
//             {
//                 count++;
//             }
//     }
//     if (count == length)
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }

//     return 0;
// }

//two pointer approach
#include <stdio.h>
#include <string.h>
int main()
{

    char s[1001];
    scanf("%s",s);
    int length = strlen(s);

    int palindrome = 1;
    int pointer2 = length-1;
    for(int pointer1=0; pointer1<=pointer2;pointer1++){
        if(s[pointer1] != s[pointer2]){
            palindrome =0;
            break;
        }
        else{
            pointer2--;
        }
    }
        if (palindrome == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}