// A C program to input a 2D array & then acess its elements using pointers.

#include <stdio.h>

int main () {
    int m , n , index1 , index2;
    printf("Enter size of array[] []: ");
    scanf("%d %d",&m,&n);

    int arr[m][n];

    // Loops used to take input of array elements.
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            printf("Enter element at [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    // Loops used to print the array elements.
    for (int x=0; x<m; x++) {
        for (int y=0; y<n; y++) {
            printf("%d ",arr[x][y]);
            }
        } 

        printf("\nEnter index to find value: ");
        scanf("%d %d",&index1,&index2);


    // Loops used to access and search array elements and then print it.
    for (int p=0; p<m; p++) {
        for (int q=0; q<n; q++) {
            if (index1 == p && index2 == q) {
                // Here I am using pointers to access array elements.
                printf("%d \n",*(*(arr+p)+q)); 
            }
        }
    }

    return 0;
}
