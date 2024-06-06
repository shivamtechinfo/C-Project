//array program to traverse all elemtn
// array program to traverse all elemtn
#include <stdio.h>
int main() {
  int a[10];

  printf("Enter 10 digit mobile number:");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < 10; i++) {
    printf("Your mobile number is %d\n", a[i]);
  }
  return 0;
}