//Write a C program to swap two numbers using temperary variable.
#include<stdio.h>
int main() {
    int num1, num2, temp;

    printf("Enter two number:");
    scanf("%d %d",  &num1, &num2);

    printf("number %d and %d before swaping\n", num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("number %d and %d after swaping", num1, num2);

    return 0; 
}