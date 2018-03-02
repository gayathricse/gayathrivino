#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[20];
    int n,b;
    printf("Enter the string:");
    scanf("%s",a);
    n=strlen(a);
    b=n/2;
    a[b]='*';
    printf("%s",a);
    return 0;
}

