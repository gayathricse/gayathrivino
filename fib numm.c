#include<stdio.h>
void main()
{
	int s=2,y=2,z,n,i;
	printf("\n enter the number of terms");
	scanf("%d",&n);
	printf("\n the fibonacci series is");
	for(i=2;i<n;i++)
	{
	printf("\n%d",s);
	z=s+y;
	s=y;
	y=z;
}
}
