#include<stdio.h>
int main()
{
	int i,j,t;
	int b[20];
	printf("enter the array of n numbers\n");
	for(i=0;i<20;i++)
	{
		scanf("%d",&b[i]);
	}
		for(i=0;i<20;i++)
		{
			for(j=i+1;j<20;j++)
			{
				if(b[i]>b[j])
				{
				t=b[j];
				b[j]=b[i];
				b[i]=t;
				}
			}
		}
		printf("the maximum num is %d\t",b[19]);
	return 0;
}
