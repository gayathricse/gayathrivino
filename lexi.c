#include<stdio.h>
#include<string.h>
int main()
{
   char str[200],t;
   int i,j,l;
   printf("Enter the string:");
   scanf("%s",str);
   l=strlen(str);
   printf("\n The lexicographical order is:");
   for(i=0;i<l-1;i++)
   {
       for(j=i+1;j<l;j++)
       {
        if(str[i]>str[j])
        {
            t=str[i];
            str[i]=str[j];
            str[j]=t;
        }
       }
   }
   printf("%s",str);
    return 0;
}
