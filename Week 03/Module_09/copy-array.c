// #include<stdio.h>

// int a[100000],b[100000];

// int main(){

//     int lengthA;
//     int lengthB;
//     scanf("%d",&lengthA);

//     for(int i=0;i<lengthA;i++){
//         scanf("%d",&a[i]);
//     }

//     printf("Before Copy\n");
//     for(int i=0;i<lengthA;i++){
//         printf("%d ",a[i]);
//     }
//     printf("\n");
//     for(int i=0;i<lengthA;i++){
//         printf("%d ",b[i]);
//     }

//     for(int i=0;i<lengthA;i++){
//         b[i] = a[i];
//     }
//     lengthB = lengthA;

//     //update a value in a array
//     a[2]= 10;

//     printf("\nAfter Copy\n");
//     for(int i=0;i<lengthA;i++){
//         printf("%d ",a[i]);
//     }
//     printf("\n");
//     for(int i=0;i<lengthB;i++){
//         printf("%d ",b[i]);
//     }

// }

#include<stdio.h>
int arr1[100000],arr2[100000];

int main(){

    int length1,length2;
    scanf("%d",&length1);
    length2 = length1;

    for(int i=0;i<length1;i++){
        scanf("%d",&arr1[i]);
    }
    //before copy of an array
    printf("Before Copy\n");
    for(int i=0;i<length1;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
    for(int i=0;i<length1;i++){
        printf("%d ",arr2[i]);
    }

    //copy values from arr1 to arr2
    for(int i =0;i<length1;i++){
        arr2[i] = arr1[i];
    }

    //after copy
    printf("\nAfter Copy\n");
    for(int i=0;i<length1;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
    for(int i=0;i<length2;i++){
        printf("%d ",arr2[i]);
    }

    //updating an element from arr1
    arr1[2] = 6;

    //after updating any value
    printf("\nAfter Updating values\n");
    for(int i=0;i<length1;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
    for(int i=0;i<length2;i++){
        printf("%d ",arr2[i]);
    }

    return 0;
}