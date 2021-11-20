/*WAP to store n elements in an array and print the elements using pointer*/
#include <stdio.h>

int main()
{
    int arr1[25],i,n;
    printf("input the number of elements to store in the array:");
    scanf("%d",&n);
    printf("input %d number of elements in the array :\n",n);
    for(i=0;i<n;i++)
    {
        printf("elememt - %d :",i);
        scanf("%d",arr1+i);
        
    }
    printf("the elements you entered are : \n");
    for(i=0;i<n;i++)
    {
        printf("element - %d : %d \n",i,*(arr1+i));
        
    }
    return 0;
}
