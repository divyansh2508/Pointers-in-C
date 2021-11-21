// A C program to find the largest element in an array using pointers.

#include <stdio.h>

int main () {
    int n;
    printf("Enter length of array: ");
    scanf("%d",&n);

    int arr[n];
    int *ptr = &arr[0];

    // Loop used to take input of array elements.
    for (int i=0; i<n; i++) {
        printf("Enter %d element: ",i+1);
        scanf("%d",ptr+i);
    }

    int largest = *ptr;

    // Loop and condition used to find the largest element in the array.
    for (int j=0; j<n; j++) {
        if (*(ptr+j) > largest) {
            largest = *(ptr+j);
        }
    }

    printf("%d ",largest);

    return 0;
}