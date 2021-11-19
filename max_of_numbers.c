/* WAP to find largest of two numbers using pointers*/
#include <stdio.h>

int main()
{
    int x, y, *large, *ptr1, *ptr2;
    printf("Enter the first number:");
    scanf("%d",&x);
    printf("Enter the second number:");
    scanf("%d",&y);
    ptr1 = &x;
    ptr2 = &y;
    if(*ptr1>*ptr2)
    large = ptr1;
    else
    large = ptr2;
    printf("The largest number is : %d",*large);
    return 0;
    
}
