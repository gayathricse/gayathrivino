#include<stdio.h>
void main()
{
int num,n=6,m=9;
printf("print the even given range m to n:\n);
for(num=m,num<=n,num++)
{
if(num%2==0)
{
printf("%d",num);
getch();
}
}
