//Write a C program to print all natural numbers in reverse (from n to 1). – using while loop
#include<stdio.h>
int main() {
    int num, i = 1;

    printf("Enter a number:");
    scanf("%d", &num);

   while (i <= num)
   {
        printf("%d\n", num);
        num --;
   }
   

    return 0;
}