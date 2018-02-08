#include<stdio.h>
int main()
{
	int swap,a,b;
	printf("enter two num\t");
	scanf("%d %d",&a,&b);
	swap=a;
	a=b;
	b=swap;
	printf("%d %d",a,b);
	return 0;
}
