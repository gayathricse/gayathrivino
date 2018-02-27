#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
if(n%10==0)
{
printf("%d is number is multiple of 10",n);
}
do
{
n++;
}
while(n%10==0)
printf("%d is nearest greater multiple of 10",n);
}
}
