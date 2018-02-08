#include<stdio.h>
int main()
{
	int ch;
	printf("enter the number");
	scanf("%d",&ch);
	if(ch<=5)
	{
		switch(ch)
		{
			case 1:
			printf("\nOne");
			break;
			case 2:
			printf("\nTwo");
			break;
			case 3:
			printf("\nThree");
			break;
			case 4:
			printf("\nFour");
			break;
			case 5:
			printf("\nFive");
			break;
			default:
			break;
		}
	}
	return 0;
}
