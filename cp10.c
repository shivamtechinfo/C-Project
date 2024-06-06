//Write a C program to find maximum between two numbers.

#include<stdio.h>
int main(){
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d",&num1);

    prntf("Enter second number: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("Number first is bigger");
    }
    else {
        printf("number second is bigger");
    }

    return 0;

}