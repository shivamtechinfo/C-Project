//find last digit of given number
#include<stdio.h>
int main(){
   int num, last_digit;
   printf("Enter a number:");

   scanf("%d", &num);

   for (int i = 0; i = num; i++){
      last_digit = num % 10;
      num = num / 10;
      printf("%d is last digit:\n", last_digit); 
   }

return 0;

}