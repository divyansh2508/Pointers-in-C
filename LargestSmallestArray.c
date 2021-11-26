// A C program to take input of elements of array then find the largest and smallest number from the entered elements.
// This program utilizes the concept of "Pointers" and "Functions".

#include <stdio.h>

// Function used to find the largest element of the array.
void Largest(int *arr , int n) {
    int max = *(arr);

    // Loop used to find maximum element.
    for (int j=0; j<n; j++) {
        if (*(arr+j) > max) {
            max = *(arr+j);
        }
    }

    // Loop used to print the largest element.
    for (int k=0; k<n; k++) {
        printf("Largest element of the array is %d.\n",max);
        break;
    }
}

// Function used to find the smallest element of the array.
void Smallest(int *arr , int n) {
    int min = *(arr);

        // Loop used to find the smallest element of array.
        for (int l=0; l<n; l++) {
            if (*(arr+l) < min) {
                min = *(arr+l);
            }
        }

        // Loop used to print the smallest element.
        for (int m=0; m<n; m++) {
            printf("Smallest element of the array is %d.\n",min);
            break;
        }
    }

int main () {
    int n;
    printf("Enter length of array: ");
    scanf("%d",&n);

    int arr[n];

    // Loop used to take input of array elements.
    for (int i=0; i<n; i++) {
        printf("Enter %d element: ",i+1);
        scanf("%d",arr+i);
    }

    // Main function is calling the "Largest()" function.
    Largest(arr , n);

    // Main function is calling the "Smallest()" function.
    Smallest(arr , n);

    return 0;
}
