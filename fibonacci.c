#include <stdio.h>

void main(void) 
{
	
   int n,c,i;
   int a=2,b=1;
   scanf("%d",&n);
   printf("%d\t%d",a,b);
   for(i=2;i<n;i++)
   {
     c=a+b;
     a=b;
     b=c;
    printf("\t%d",c);
  
}
