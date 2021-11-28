//This code is all about how we pass the array elements into another array using pointers.
#include <stdio.h>
void main()
{
  int i,j,a1[10],a2[10];
  for(i=0;i<10;i++) //initializing the array
  {
    printf("Enter Element%d ",i+1);
    scanf("%d",&a1[i]);
  }
  int *ptr;
  ptr=a1;
  for(j=0;j<10;j++) //copying the array elements into another array using pointers
  {
    a2[j]=*ptr;
    ptr++;
  }
  printf("The original array is: "); //displaying the original array
  for(i=0;i<10;i++)
  {
    printf("%d\t",a1[i]);
  }
  printf("\nThe copied array is: "); //displaying the copied array
  for(i=0;i<10;i++)
  {
    printf("%d\t",a1[i]);
  }
  printf("\n");
}
