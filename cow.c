#include<stdio.h>
#include<string.h>
int main()
{
int i,count=0;
char s[30];
printf("enter the strings");
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
count++;
}
printf("number of words in given string are:%d\n",count+1);
return 0;
}


