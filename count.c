#include<stdio.h>
int main()
{
char str[50];
int counter,count=0;
printf("enter the string:");
gets(str);
for(counter=0;str[counter]!=NULL;counter++)
{
if((str[counter]>='A' && str[counter]<='Z')||(str[counter]>='a' && str[counter]<='z'))
count++;
}
printf("%d",count);
}
return 0;
