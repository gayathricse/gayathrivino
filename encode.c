#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    int i,l;
    printf("\nEnter the string:");
    scanf("%s",str);
    l=strlen(str);
    printf("\n The encoded form is:");
    for(i=0;i<l;i++)
    {
        printf("%c",str[i]+3);
    }
    return 0;
    
}
