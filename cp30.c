//Write a C program to print all even numbers between 1 to 100. – using while loop

#include<stdio.h>
int main() {

    int num, i = 2;

    printf("Enter a number :");
    scanf("%d", &num);

    while (i <= num)
    {
        
         printf("%d\n", i);
        i += 2;
    }
    
}