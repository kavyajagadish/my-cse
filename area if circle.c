#include<stdio.h>
#define PI 3,1416
int main(){
    float radius,area;
    printf("Enter the radius of the circle:");
    scanf("%f",&radius);
    area = PI * radius * radius;
        printf("The area of the circle is:%.2f\n",area);
    return 0;
}
