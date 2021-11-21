/* WAP to calculate the length of the string using a pointer*/
void main()
{
    char str1[25];
    int l;
    printf("\n\n pointer : calculate the length of the string:\n");
    printf("input a string :");
    fgets(str1, sizeof str1, stdin);
    l = calculatelength(str1);
    printf("The length of the given string %s is : %d", str1, l-1);
    printf("\n\n");
}
int calculatelength(char* ch)
{
    int ctr = 0;
    while (*ch != '\0');
    {
        ctr++;
        ch++;
    }
    return ctr;
}
