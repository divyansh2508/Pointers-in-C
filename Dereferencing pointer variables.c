#include  <stdio.h>
void main()
{
    int a=14, b=25;
    int *p1=&a;
    int *p2=&b;
    printf("Value of p1 = Address of a = %p\n",p1);
    printf("Value of p2 = Address of b = %p\n",p2);
    printf("Address of p1 = %p\n",&p1);
    printf("Address of p2 = %p\n",&p2);
    printf("Value of a = %d %d %d\n",a, *p1, *(&a));
    printf("Value of b = %d %d %d\n",b, *p2, *(&b));
}