#include <stdio.h>
int n=10,i,sum=0;
int average()
{
    int arr[n];
    for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum+=arr[i];
    }
    int avg=sum/n;
    return avg;
    }
int main(){
    printf("enter the element:");
    int r=average();
    printf("Average is :%d",r);
    return 0;
    }
