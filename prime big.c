#include<stdio.h>
int main()
{
int n,i,flag=0;
printf("enter the positive integer:");
scanf("%d",&n);
for(i=0;i<=n%2;++i)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("%d is prime number.",n);
}
else
{
printf("%d is not prime number.",n);
}
return 0;
}



