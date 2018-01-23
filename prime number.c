#include<stdio.h>
int main()
{
int low,high,i,flag;
printf("enter two numbers (intervals):");
scanf("%d" "%d" &low,&high);
printf("prime numbers between two numbers:" low,high);
while(low<high)
flag 0;
for(i=2;i<low/2;++i)
{
if(low%2==0)
{
flag 1;
break;
}
}
if(flag==0)
{
printf("%d",low);
}
++i;
return 0;
}
