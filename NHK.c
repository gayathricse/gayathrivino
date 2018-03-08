
#include<stdio.h>
int main()
{
int n,k,a[200],i;
printf("Enter  the n & k:");
scanf("%d%d",&n,&k);
printf("\nEnter the n numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n The k number is %d",a[k-1]);
return 0;
}
