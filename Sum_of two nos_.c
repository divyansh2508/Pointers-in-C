\* WAP to enter two numbers. Calculate its sum using pointers.*/
#include <stdio.h>

int main()
{
   int i =5; 
   int j = 12;
   int *ptr1, *ptr2;
   int sum=0;
   ptr1=&i;
   ptr2=&j;
   sum = *ptr1 + *ptr2;
   printf("sum of 2 no. using pointers is %d",sum);
return 0;
}
  