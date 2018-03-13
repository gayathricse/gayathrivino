#include<stdio.h>
int main()
{
int n,r,d=1;
printf("Enter the n");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
d=d*r;
n=n/10;
}
printf("The mul is %d",d);
return 0;
}
