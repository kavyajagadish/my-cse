#include<stdio.h>
int main(){
    float length, breadth, area;
    printf("Enter the length of the reactangle:");
    scanf("%d",&length);
    printf("Enter the breadth of the reactangle:");
    scanf("%f",&breadth);
    area = length * breadth;
    printf("The area of the reactangle is : %.2f\n",area);
    return 0;
}
