// A C program to swap two numbers using pointers and function.

#include <stdio.h>

void main () {
    int num1 , num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);

    printf("Num 1 = %d",num1);
    printf("\nNum 2 = %d",num2);

    // Calling swap function inside the main function. 
    swap(&num1,&num2);
}

// Swap function is used to swap the two given numbers.
void swap (int *num1 , int *num2) {
    // Logic is used to swap two numbers.
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;

    printf("\n\nNum 1 = %d",*num1);
    printf("\nNum 2 = %d",*num2);
    printf("\n");
}