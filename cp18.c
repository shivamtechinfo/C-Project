
// swap two number using pointers with temperory variable
#include<stdio.h>
int main() {
    int num1, num2, temp;
    int *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    printf("Enter two number:");
    scanf("%d %d", ptr1, ptr2);

    printf("number %d and %d are before swaping\n", *ptr1, *ptr2);

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;    

    printf("number %d and %d are after swaping", *ptr1, *ptr2);

    return 0; 


}