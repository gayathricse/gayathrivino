#include<stdio.h>
int main()
{
int number,original number,remainder,result=0;
printf("enter three digit number:");
scanf("%d",&number);
originalnumber=number;
while(originalnumber!=0)
{
remainder=originalnumber%10;
result+=remainder*remainder*remainder;originalnumber/=0;
}
if(result==number)
{
printf("%d" is armstrong number:number);
}
else
{
printf("%d"is not armstrong number:number);
}
return 0;
}
