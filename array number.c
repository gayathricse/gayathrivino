#include<stdio.h>
void main()
{
int a[40],b,d,large,small;
    printf("How many elements:");
    scanf("%d",&d);
    printf("Enter the Array:");
  for(b=0;b<d;++b)
  scanf("%d",&a[b]);
  large=small=a[0];
  for(b=1;b<d;++b)
    {
        if(a[b]>large)
            large=a[b];
        if(a[b]<small)
            small=a[b];
    }
    printf("The largest element is %d",large);
    printf("\nThe smallest element is %d",small);
}
