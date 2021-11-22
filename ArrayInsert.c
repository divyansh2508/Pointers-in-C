// A C program to insert a element from an array using pointers.
// Ex 7.2 --> Q2

#include <stdio.h>

int main () {
    int n;
    printf("Enter length of array: ");
    scanf("%d",&n);

    int arr[100];

    // Loop used to take input of array elements.
    for (int i=0; i<n; i++) {
        printf("Enter %d element: ",i+1);
        scanf("%d",arr+i);
    }
     
        int index , insert_element;
        printf("\n\nEnter index to insert an element: ");
        scanf("%d",&index);

        printf("Enter element to insert on %d position: ",index);
        scanf("%d",&insert_element);

        n = n+1;
        // Loop used to insert an element and shift other elements.
        for (int j=n; j>=index; j--) {
            *(arr+j+1) = *(arr+j);
        }
        arr[index] = insert_element;

        // Loop used to print the array.
        for (int k=0; k<n; k++) {
            printf("%d ",*(arr+k));
        }

    return 0;
}