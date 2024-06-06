//Write a C program to find maximum between three numbers using if-else.

#include<stdio.h>
int main() {
    int num1, num2, num3;

    printf("Enter three number:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2){
        if(num1 > num3){
        printf("number %d is bigger", num1);
        }
        else {
            printf("number %d is bigger", num3);
        }
    }
    else{
        printf("number %d is bigger", num2);
    }

    return 0;
}