#include<stdio.h>
int main()
{
int n,reversedInteger=0,remainder,originalInteger;
printf("enter the integer");
scanf("%d",&n);
if( n!=0 )
{
remainder=n%10;
reversedInteger=reversedInteger*10+remainder;
n/=10;
}
if(originalInteger==reversedInteger)
{
printf("%d is palindrome.",originalInteger);
}
else
{
printf("%d is not palindrome.",originalInteger);
return 0;
}
}
