/**
 * You will be given N integer Numbers.

You will initialy declare an array with length 1.

After taking input of each numbers you will insert the number in the end and increase the array length by one.

Finally, print all N numbers in the array in a single line, separated by spaces.

Note: The solution must be implemented with dynamic array.

Input Format

The first line will contain an integer N, the number of elements.
The second line will contain N integers.
Constraints

1 <= N <= 1000
1 <= Each integers <= 10^9
Output Format

Print the array of N integers in a single line, with all the elements separated by spaces.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);

    int *array = (int *)malloc(1*sizeof(int));

    for(int i=0;i<n;i++){
        scanf("%d",array+i);
        array = (int *)realloc(array, (i+2)*sizeof(int));
        if(array == NULL){
            printf("Error");
            break;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(array+i));
    }
    free(array);
    return 0;
}
