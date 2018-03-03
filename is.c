#include<stdio.h>
void main()
{
int a[30],n,k,i,flag=0;
char s[30];
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==s[i+1])
    flag=1;
}
if(flag==1)
printf("\nNO");
else
printf("\n YES");
}
