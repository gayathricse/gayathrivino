#include<stdio.h>
int main()
{
int m,n;
printf("enter the numbers");
scanf("%d %d",&m,&n);
if(m>n)
{
printf("%d",m-n);
}
else
{
printf("%d",n-m);
}
return 0;
}
