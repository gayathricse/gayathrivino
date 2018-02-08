#include <stdio.h>
int main() 
{
  int y;
  printf("\n enter the number:");
  scanf("%d",&y);
  if(y%2!=0)
  {
    printf("\n nearest even number is: %d",y-1);
  }
  else
  {
    printf("\n nearest even number is: %d",y-2);
  }
  return 0;
}
