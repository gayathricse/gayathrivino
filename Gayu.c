#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
if(n%7==0)
{
printf("%d is multiple of 7",n);
}
else
{
printf("%d is not multiple of 7",n);
}
return 0;
}
