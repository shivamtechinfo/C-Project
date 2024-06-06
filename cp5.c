// we have to get price of object

#include<stdio.h>
int main() {
    float first_price, first_quantity,  second_price,second_quantity, first_quantity_result;
    printf("Enter Unit Quantity of object:");
    scanf("%f", &first_quantity);

    printf("Enter given object price:");
    scanf("%f", &first_price);

    first_quantity_result = first_quantity / first_price;

    printf("Enter second unit quantity of object:");
    scanf("%f", &second_quantity);
     second_price = first_quantity_result * second_quantity; 

    printf("%f", second_price);

    return 0;
}