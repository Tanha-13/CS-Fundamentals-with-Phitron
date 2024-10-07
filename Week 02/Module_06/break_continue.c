// #include<stdio.h>
// int main(){
//     for(int i = 100; i<=300;i++){
//         if(i%2 == 0 && i%3 == 0 && i%5 == 0){
//             printf("%d", i);
//             break;
//         }
//     }
// }


//continue statement
#include<stdio.h>
int main(){
    for(int i=1;i<=10;i++){
        // if(i%2 == 0 && i%3 == 0 && i%5 == 0){
        //     printf("%d is the number\n", i);
        //     continue;
        // }
        // // else{
        // //     printf("%d is not the number\n",i);
        // // }
        // printf("%d is not the number\n",i);

        printf("%d\n", i);
        printf("Line 1\n");
        printf("Line 2\n");
        
        if(i == 5){
            continue;
        }
        printf("Line 3\n");
        printf("Line 4\n");
    }
}