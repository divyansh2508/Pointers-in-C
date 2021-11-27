/*WAP to find the sum of each element of array using pointer*/
#include <stdio.h>

int main()
{
    int arr[50];
    int i,  n ,sum=0;
    int *ptr;
    printf("enter the size of array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the elememt of array:");
        scanf("%d",&arr[i]);
    }
    ptr = arr;
    for(i=0;i<n;i++)
    {
        sum = sum + *ptr;
        ptr++;
        
    }
    printf("\nThe sum is:%d",sum);
    

    return 0;
}
