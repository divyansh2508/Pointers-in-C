// A C program to multiply , add & subtract two numbers as per users choice.
// Menu driven approach is used.

#include <stdio.h>

int main()
{
    int a,b,*p,*q,mul,add,sub;
    printf("Enter the two numbers: "); 
    scanf("%d%d",&a,&b);
    p = &a;
    q = &b;
    
    // Menu 
    printf("\n\t\tEnter:\n");
    printf("\t1 to Multiply two numbers\n");
    printf("\t2 to Subtract two numbers\n");
    printf("\t3 to Add two numbers\n");
    
    // Taking input as per users choice.
    int ch;
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    
    // Using switch case statement to provide a menu driven outlook.
    switch (ch) {
        case 1: {
            mul = (*p) * (*q);
            printf("\nMultiplication of %d and %d is %d",a,b,mul);
            // Break statement is used to stop the flow of program.
            break;
        }
        case 2: {
            sub = *p - *q;
            printf("\nSubtraction of %d and %d is %d",a,b,sub);
            // Break statement is used to stop the flow of program.
            break;
        }
        case 3: {
            add = *p + *q;
            printf("\nAddition of %d and %d is %d",a,b,add);
            // Break statement is used to stop the flow of program.
            break;
        }
    }

    return 0;
}
