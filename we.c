
#include<stdio.h>
int main()
{
    char str[200];
    int i;
    printf("Enter the string:");
    scanf("%s",str);
   printf("\n The numbers are:");
    for(i=0;str[i]!='\0';i++)
    {
        if(isdigit(str[i]))
        {
           printf("%c",str[i]);
        }
        return 0;
    }
  
}
