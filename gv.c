#include<stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
printf("The factors are:");
for(i=0;i<200;i++)
{
if(n%i==0)
printf("%d",i);
}
return 0;
}
