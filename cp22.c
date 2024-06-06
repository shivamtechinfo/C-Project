//Write a Program to check whether a number is prime or not.

#include<stdio.h>

int main() {
    int num, count = 0;
    printf("Enter a number:");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
       if(num % i == 0 ){
        count ++;
       }
    }
    if(count == 2){
        printf("number %d is prime",num);
    }
    else{
        printf("number %d is not prime", num);
    }
    return 0;
}