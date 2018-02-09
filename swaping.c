#include<stdio.h>
#include<string.h>
int main()
{

    char s1[200],ch='.',*cha;
    printf("enter the string:");
    scanf("%[^\n]s",&s1);
   
    cha=strchr(s1,ch);
    printf("string after' %c' is : %s",ch ,cha+1);
    return 0;
}
