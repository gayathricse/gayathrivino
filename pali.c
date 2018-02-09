#include<stdio.h>
int main()
{
  char str,str1;
 printf("enter a string");
 scanf("%s",&str);
 str1=strrev(str);
 if(str1==str)
 {
  printf("yes!!it is a palindrome);
  }
  else
  {
  printf("no!it is not a palindrome");
  }
  return 0;
 }
 
