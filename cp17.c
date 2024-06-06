//Swap Numbers Without Using Temporary Variables

#include<stdio.h>
int main() {
    int num1, num2;

    printf("Enter two number:");
    scanf("%d %d", &num1, &num2);

    printf("number %d and %d before swaping\n", num1, num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("number %d and %d are after swaping", num1, num2);

    return 0;

}