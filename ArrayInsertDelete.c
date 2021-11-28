// A C program to insert and delete an element from an array using pointers.
// Switch case is used to provide a menu to the user.
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

    // Menu
    printf("\n\t\tPress:");
    printf("\n\t1 to insert an element.");
    printf("\n\t2 to delete an element.");
    printf("\n\tEnter your choice: ");
    
    int ch;
    scanf("%d",&ch);

    // Using switch-case to provide a menu to the user.
    switch (ch) 

    case 1: {
        int index , insert_element;
        printf("\nEnter index to insert an element: ");
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
        // Break statement used to stop the flow of program after executing choice 1.
        break;    

    case 2: {
        int index_delete;
        printf("\n\nEnter index of element to be deleted: ");
        scanf("%d",&index_delete);

        // Conditions used to check wheter a element can be deleted or not.
        if (index_delete >= n+1) {
            printf("\nDeletion not possible.");
        } else {
            // Loop used to delete an element and shift other element to the left.
            for (int x=index_delete-1; x<n-1; x++) {
                arr[x] = arr[x+1];
            }
        }
        printf("\nThe resultant array is:\n");

        // Loop used to print the resultant array.
        for (int x=0; x<n-1; x++) {
            printf("%d ",*(arr+x));
        }
        // Break statement used to stop the flow of program after executing choice 2.
        break;
    }
}

    return 0;
}
