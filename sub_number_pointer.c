/*WAP to subtract two number using pointers*/
#include <stdio.h>

int main()
{
    int num1,num2;
    int *ptr1, *ptr2;
    int sub;
    printf("enter the two numbers:");
    scanf("%d%d",&num1,&num2);
    ptr1 = &num1;
    ptr2 = &num2;
    sub = *ptr1 - *ptr2;
    printf("subtraction of the given two interger values is = %d",sub);
    

    return 0;
}
