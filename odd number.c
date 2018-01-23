#include<stdio.h>
void main()
{
int num,n=20,m=40;
printf("print the odd given range m to n:\n);
for(num=m,num<=n,num++)
{
if(num%2==1)
{
printf("%d",num);
getch();
}
}
