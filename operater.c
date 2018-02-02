#include<stdio.h>
int main()
{
int i,j;
printf("the numbers  i and j are \t");
scanf("%d %d",&i &j);
i=i^j;
j=j^i;
i=i^j;
printf("%d=i\t %d=j\t",i,j);
}
return;
}
