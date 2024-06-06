//Write a C program to check whether a number is negative, positive or zero using else if.
#include<stdio.h>
int main() {
    int num;

    printf("Enter a number:");
    scanf("%d", &num);

    if(num > 0){

        printf("number %d is positive",num);
    }
    else if(num < 0 ){
        printf("number %d is negative",num);
    }
    else {
        printf("number %d is zero",num);
    }

    return 0;
}