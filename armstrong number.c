#include<stdio.h>
#include<math.h>
void main()
{
int low,high,i,temp1,temp2,remaindrer,n=0,result=0;
printf("enter the numbers between two intervals:");
scanf("%d","%d",&low ,&high);
printf("armstrong numbers between two integers %d an %d:"low,high);
for(i=low+1;i<high;++i)
{
temp2=0;
temp1=0;
while(temp1!=0)
{
temp1 /=10;
++n;
}
while(temp2!=0)
{
remainder=temp2%10;
result +=pow(remainder,n);
temp2 /=10;
}
if(result==i)
{
printf("%d",i);
}
n=0;
return 0;
}
