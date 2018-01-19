#include<stdio.h>
int main()
{
int number,i,count=0;
printf("enter the number");
scanf("%d",&number);
for(i=2;i<=number/2;i++)
{
if(number%i==0)
{
    count++;
}
}
if(count==0)
{
printf("the value is  prime");
}
else
{
printf("the value is not prime");
}

    return 0;
}
