#include<stdio.h>
int main(){
    int n,a=0,b=1,sum,i;
    printf("enter number of terms;");
    scanf("%d",&n);
    printf("fibonacii series;%d %d",a,b);
    for(i=2; i<n; i++)
    {
        sum=a+b;
        printf("%d",sum);
        a=b;
        b=sum;
    }
    return 0;
}
