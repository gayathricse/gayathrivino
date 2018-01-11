#include<stdio.h>
void main()
{
int a=5,b=4,c=3;
printf("enter the numbers");
scanf("%d",&a,&b,&c);
if(c<b<a)
{
printf("a is the biggest number");
}
else
{
printf("b is the biggest number");
}
else
{
printf("c is the biggest number");
}
}
