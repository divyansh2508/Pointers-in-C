/*WAP to multiply two number using pointer*/
#include <stdio.h>

int main()
{
    int a,b,*p,*q,mul;
    printf("enter the two number to multiply"); 
    scanf("%d%d",&a,&b);
    p = &a;
    q = &b;
    mul = *p * *q;
    printf("multiplication of two number = %d",mul);

    return 0;
}
