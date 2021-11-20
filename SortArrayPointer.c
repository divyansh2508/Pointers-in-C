// A C program to sort a given array using pointers.
// Bubble Sort is used to sort the given array.

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
        // Here pointer is used to store array elements.
        scanf("%d",ptr+i);
    }

    // Loops used to compare array elements and then swap them if required.
    for (int m=0; m<n; m++) {
        for (int l=0; l<=n-1; l++) {
            // Condition used using pointers.
            if (*(ptr+m) < *(ptr+l)) {
                // Swapping elements if required (using pointers).
                // Bubble sort.                 
                int temp = *(ptr+m);
                *(ptr+m) = *(ptr+l);
                *(ptr+l) = temp;
            }
        }
    }

    // Loop used to print the sorted array element.
    for (int k=0; k<n; k++) {
        printf("%d ",*(ptr+k));
    }

    return 0;
}
