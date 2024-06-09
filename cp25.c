//Write a C program to find cube of any number using function. 
#include<stdio.h>

void cube(int  number){
    int result = number * number * number;
    
    printf("cube of %d is %d", number, result);

}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
   cube(num);

    return 0;
}