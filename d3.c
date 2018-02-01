#include<stdio.h>
int main()
{
int n,a[20],i;
printf("enter the number");
printf("Enter the integers");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
printf("index is%d\t%d\n",a[i],i);
return 0;
}
