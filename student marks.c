#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks\n");
    scanf("%d",&marks);
    if (marks>=90)
    printf("gread A");
    else if(marks>=70)
    printf("gread B");
    else if(marks>=50)
    printf("gread C");
    else
    printf("gread D");
    return 0;
}
