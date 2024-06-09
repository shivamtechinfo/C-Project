// Write a program in C to swap two numbers using a function.

#include<stdio.h>

int n1, n2, temp;
void swap(n1, n2){

    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("first number is %d and second is %d", n1, n2 );


}
    int main(){
        int num1, num2;

        printf("Enter two number:");
        scanf("%d %d", &num1, &num2);

        swap(num1, num2);
    
    return 0;

}