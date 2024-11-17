/**
 * Babul likes to read books. He has N books and they take different times to finish each. He has arranged all the books in a order of finishing time to read them. So the first book will need the least time to finish and the last book will take the most time. He as T time to read.

He has given how a list of N number in increasing order. The numbers are the times to finish the books.

You have to tell him how many books he can finish reading at most in T time.

Input Format

The first line of input will contain two integers N and T, the number of books and the time he has in total. The next line will contain N numbers in increasing order.

Constraints

1 <= N <= 10^5
0 <= T <= 10^9
Output Format

Print a single integer, the maximum number of books babul can finish reading in T time.
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,t;
    scanf("%d %d",&n,&t);

    int sum =0,count=0;
    for(int i=1;i<=n;i++){
        int time;
        scanf("%d",&time);
        sum += time;
        if(sum <= t){
            count++;
        }
        else{
            break;
        }
    }
    printf("%d",count);
       
    return 0;
}