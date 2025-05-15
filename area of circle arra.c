#include <stdio.h>
int r;
int areaofcircle()
{
    float pi=3.14,area;
    area=pi*r*r*r;
    return area;
}
int main()
{
printf("hii kavyajagadish\n");
printf("enter the radius of circle:");
scanf("%d",&r);
float result = areaofcircle(r);
    printf("area of circle is:%.2f",result);
}
