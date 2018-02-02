
#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()
{
char s[30];
printf("string");
gets(s);
int i,n,count=0;
n=strlen(s);

for(i=0;i<=n;i++)
{
if(isspace(s[i]))
{
count++;
}
}
printf("%d",count);
}
