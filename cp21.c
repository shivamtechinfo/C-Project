// Find the largest number among the three numbers.

#include<stdio.h>
int main() {

        int num1, num2, num3;

        printf("Enter three number:");
        scanf("%d %d %d", &num1, &num2, &num3);

        if(num1 > num2){
            if(num1 > num3){
                printf("number %d is largest", num1);
            }
            else{
                printf("number %d is largest", num3);
            }
        }
        else {
            printf("number %d is largest", num2);
        }

    return 0; 
}