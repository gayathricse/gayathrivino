#include<stdio.h>
int main()
{
    int a,b;
a=int(input("Enter a:"))
b=int(input("Enter b:"))
for i in range(b,0,-1):
    a=a+1
print("Sum is:",a)    
return 0;
}
