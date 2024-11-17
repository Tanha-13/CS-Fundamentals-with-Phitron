/**
 * In your company you have been given a task to sort out the job applications according to the candidates experience.

If experience is less than 1, it's "Entry-level candidate".
If experience is between 1 and 3 (inclusive), it's "Junior candidate".
If experience is between 4 and 7 (inclusive), it's "Mid-level candidate".
If experience is greater than 7, it's "Senior candidate".
You will be given list of N candidates experience. For each of them print what kind of candidate he/she is according the the experience.

Input Format

The first line will contain an integer N, the number of candidates.
The next line will contain N numbers, the experiences of the candidates.
Constraints

1 <= N <= 10^5
You can assume no candidate has experience more than 20.
Output Format

For each experience, print one of these strings (without quotes) "Entry-level candidate", "Junior candidate", "Mid-level candidate" and "Senior candidate" according to the category.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int experience;
        scanf("%d",&experience);

        if(experience < 1){
            printf("Entry-level candidate\n");
        }
        else if(experience >=1 && experience <=3){
            printf("Junior candidate\n");
        }
        else if(experience >=4 && experience <=7){
            printf("Mid-level candidate\n");
        }
        else if(experience > 7){
            printf("Senior candidate\n");
        }
    }
       
    return 0;
}
