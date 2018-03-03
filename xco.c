#include<stdio.h>
int main()
{
char str[200],odd[200],even[200];
int i,o=0,e=0;
printf("Enter the String:");
scanf("%s",&str);
for(i=0;str[i]!='\0';i++)
{
if(i%2==0)
{
odd[o]=str[i];
o++;
}
else
{
even[e]=str[i];
e++;
}
}
printf("\n The two strings are %s \t %s",odd,even);
return 0;
}

