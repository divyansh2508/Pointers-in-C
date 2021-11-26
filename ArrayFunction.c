// A C program to pass an array into a function using pointers.
// This program uses the concept of "Call by reference".

#include <stdio.h>

void ModifyArray (int *arr , int n) {
    // Loop used to modify the array.
    for (int j=0; j<n; j++) {
        *(arr+j) += 3;  
    }
}

void main () {
    int n;
    printf("Enter length of array: ");
    scanf("%d",&n);

    int arr[n];

    // Loop used to take input of elements of array.
    for (int i = 0; i<n; i++) {
        printf("Enter %d element: ",i+1);
        scanf("%d",arr+i);
    }

    ModifyArray(arr , n);

    // Loop used to print the modified array.
    for (int k = 0; k<n; k++) {
        printf("%d ",*(arr+k));
    }
}

