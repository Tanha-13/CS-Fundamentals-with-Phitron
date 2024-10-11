/**
 * The winter sale began, and Mrs. Sarah wants to buy a T-shirt for her son. The T-shirt has a ticket that indicates a discount of X%
 and its price P
 after the discount. She now wants to know the price before the discount to know if the discount was worthy. Help her!

Input
Only one line containing two numbers X
 and P
 (1≤X≤99,1≤P≤4×104
) – the discount percentage, and the price of the T-shirt after the discount.

Output
Print the price of the T-shirt before the discount rounded up to two decimal places.
 */
#include<stdio.h>
int main(){

    double x,p;
    scanf("%lf %lf", &x,&p);
    x=(1-(x/100));
    printf("%.2lf",p/x);


    return 0;
}