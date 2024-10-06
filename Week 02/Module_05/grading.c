#include <stdio.h>
int main(){

    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

// imp: approach 01 for validation
    // if(marks < 0 || marks > 100){
    //     printf("Please enter a valid number\n");
    // }
    // else if(marks>=80 && marks <=100){
    //     printf("You have got A+\n");
    // }

    if(marks>=80 && marks <=100){
        printf("You have got A+\n");
    }
    else if(marks>=70 && marks <=79){
        printf("You have got A Grade\n");
    }
    else if(marks>=60 && marks<=69){
        printf("You have got A- Grade\n");
    }
    else if(marks >= 50 && marks <= 59){
        printf("You have got B Grade\n");
    }
    else if(marks >= 40 && marks <= 49){
        printf("You have got C Grade\n");
    }
    else if(marks >=33 && marks <=39){
        printf("You have got D Grade\n");
    }
    else if(marks >=0 && marks<=32){
        printf("You have got F Grade\n");
    }
    // imp: approach 02 for validation
    else{
        printf("Enter a valid number");
    }

    return 0;
}