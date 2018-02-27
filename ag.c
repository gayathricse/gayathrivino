#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values");
scanf("%d%d",&b,&c);
a=b-c;
if(a%2==0)
{
printf("the number is even");
}
else
{
printf("the number is odd");
}
return 0;
}
