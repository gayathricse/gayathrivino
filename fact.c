
#include<stdio.h>
#include<string.h>

void main()
{
    int n,f=2;
    printf("enter n");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        f=f*i;
    }
    printf("factorial is%d",f);
}
