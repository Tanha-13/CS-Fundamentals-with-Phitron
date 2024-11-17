/**
 * Abul is plannig to by a smartphone. He has N smartphones available to buy of different prices. But he wants to buy a smartphone in a range between X and Y.

He has given you the price list.

Can you tell him how many smartphones are available in that price range.

Input Format

The first line of input will contain 3 integers N, X, Y, the number of phones and the range.

The next line will contain N numbers p1, p2, p3, ... , pn, the prices of N phones.

Constraints

1 <= N <= 10^5
1 <= pi, X, Y <= 10^9
Output Format

Print an integer, the number of phones available in his preferred range.
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,x,y;
    scanf("%d %d %d",&n,&x,&y);
    
    int count=0;
    for(int i=1;i<=n;i++){
        int price;
        scanf("%d",&price);
        if(price >=x && price<=y){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
