#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

//topic: array as parameter
// int add(int a[], int length){
//     int sum=0;
//     for(int i=0;i<length;i++){
//         sum+=a[i];
//     }
//     return sum;
// }
// int main() {
//     int a[10] = {1,2,3,4,5,6,7,8,9,10};

//     int sum = add(a, 10);
//     printf("%d",sum);
//     return 0;
// }


//topic: string as parameter
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int length(char str[]){
    printf("Word: %s",str);
    int length = strlen(str);
    return length;
}
char makeFirstCharUpper(char str[]){
    //manual process
    // if(str[0] >= 'a' && str[0] <= 'z'){
    //     char ch= str[0] - 32;
    //     return ch;
    // }
    // else{
    //     return str[0];
    // }

    //using string built in methods
    char ch = toupper(str[0]);
    return ch;
}

int main() {
    char str[100] = "programming";

    int result = length(str);
    printf("\nLength: %d\n",result);

    char firstUpper = makeFirstCharUpper(str);
    printf("First Letter in Uppercase: %c",firstUpper);
    return 0;
}