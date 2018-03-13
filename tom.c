#include<stdio.h>
int main()
{
int p,t,r;
printf("Enter the principle amount,time,rate:");
scanf("%d%d%d",&p,&t,&r);
printf("\n The floor value is %d",p*t*r/100);
return 0;
}
