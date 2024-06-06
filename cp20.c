//Write a C program to teake input and print array elements .

#include<stdio.h>
int main() {
    int arr[5] = {};
    
    printf("Enter 5 number:");

    for(int i = 0; i < 5; i++){
    scanf("%d",&arr[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("number is %d\n ",arr[i]);
    }

    return 0; 
}