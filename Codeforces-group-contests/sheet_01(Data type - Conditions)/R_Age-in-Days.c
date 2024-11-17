/**
 * Given a Number N corresponding to a person's age (in days). Print his age in years, months and days, followed by its respective message "years", "months", "days".

Note: consider the whole year has 365 days and 30 days per month.

Input
Only one line containing a number N (0 ≤ N ≤ 106).

Output
Print the output, like the following examples.
 */
#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int years = n/365;
    int months = (n-years*365)/30;
    int days = n-(years*365)-(months*30);
    printf("%d years\n",years);
    printf("%d months\n",months);
    printf("%d days",days);
    return 0;
}