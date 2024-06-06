//Write a C program to add two numbers using pointers.
#include <stdio.h>
int main() {
  int sum, num1, num2;
  int *ptr1, *ptr2;

  ptr1 = &num1;
  ptr2 = &num2;
  printf("Enter two number");
  scanf("%d %d", ptr1, ptr2);

  sum = *ptr1 + *ptr2;

  printf("sum of %d and %d is %d", *ptr1, *ptr2, sum);

  return 0;
}