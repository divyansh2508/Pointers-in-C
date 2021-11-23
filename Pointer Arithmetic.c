///Pointer Arithmetic
void main()
{
   int a=5,*ptr=&a;
   float c=5.5, *pf=&c;
   char b='x', *pc=&b;
   printf ("Value of pf=Address of c=%p\n", pf) ;
   printf ( "Value of pc=Address of b=%p\n",pc) ;
   printf ("Value of ptr=Address of a=%p\n", ptr);
   ptr++;
   pf++;
   pc++;
   printf ( "Now value of pf=%p\n", pf) ;
   printf ("Now value of pc=%p\n", pc) ;
   printf ("Now value of ptr=%p\n", ptr);
}