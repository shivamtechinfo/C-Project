// write a c program square of 5 using function

#include<stdio.h>

void calculateSquare(int number){

    int square = number * number;
    printf("square of %d is %d", number, square);
}

int main(){
calculateSquare(5);

return 0;
}
