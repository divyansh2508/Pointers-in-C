// A C program to add two matrices using pointers...
#include <stdio.h>

int main () {
    int m , n; 
    printf("Enter size of Matrix [] []: ");
    scanf("%d %d",&m,&n);
    
    // Since we need to add two matrices their order has to be same.    
    int arr1[m][n];
    int arr2[m][n];

    printf("\n\nEnter elements for 1st Matrix.\n");

    // Loops used to input elements of 2D array "arr1".
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            printf("Enter [%d][%d] element: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

    // Loops used to print elements of array "arr1".
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            printf("%d ",*(*(arr1+i)+j));
        }
            printf("\n");
    }

    printf("\n\nEnter elements for 2nd Matrix.\n");

    // Loops used to input elements of 2D array "arr2".
    for (int k=0; k<m; k++) {
        for (int l=0; l<n; l++) {
            printf("Enter [%d][%d] element: ",k,l);
            scanf("%d",&arr2[k][l]);
        }
    }

    // Loops used to print elements of array "arr2".
    for (int k=0; k<m; k++) {
        for (int l=0; l<n; l++) {
            printf("%d ",*(*(arr2+k)+l));
        }
        printf("\n");
    }

    printf("\n\nResultant Matrix is:\n");

    // Loops used to add two matrix and print them.
    for (int x=0; x<m; x++) {
        for (int y=0; y<n; y++) {
            printf("%d ",*(*(arr1+x)+y) + *(*(arr2+x)+y));
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
