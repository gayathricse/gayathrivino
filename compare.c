#include<stdio.h>
#include<string.h>
int main()
{
int a,b;
char x1[5],x2[5];
scanf("%s%s",&x1,&x2);
a=strlen(x1);
b=strlen(x2);
if(a>=b)
{
printf("%s",x1);
}
else
{
printf("%s",x2);
}
return 0;
}
