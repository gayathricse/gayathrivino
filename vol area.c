#include<stdio.h>
int main()
{
float l,b,h,r;
float vol,area;
printf("enter the value l,b,h");
scanf("%f%f%f",&l,&b,&h);
vol=l*b*h;
area=2*(l*b+b*h+h*l);
printf("\n the volume of cuboid is %f",vol);
printf("\n the area of cuboid is %f",area);
}
