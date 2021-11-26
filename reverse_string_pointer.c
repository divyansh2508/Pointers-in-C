
/*WAP to print a string in reverse order using pointer*/
#include <stdio.h>
int main()
{
    char str1[50];
    char revstr[50];
    char *stptr = str1;
    char *rvptr = revstr;
    int i = -1;
    printf("\n\n pointer: print a string in reverse order:\n");
    printf("input a string:");
    scanf("%s", str1);
    while(*stptr)
    {
        stptr++;
        i++;
    }
    while(i>=0)
    {
        stptr--;
        *rvptr = *stptr;
        rvptr++;
        --i;
        
    }
    *rvptr = '\0';
    printf("reverse of the string is : %s\n\n",revstr);
    return 0;
}