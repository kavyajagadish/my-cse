#include<stdio.h>
int main(){
    int num,i=1;
    printf("enter tht value of n:");
    scanf("%d",&num);
    while(i<=20){
    printf("%d*%d=%d\n",num,i,num*i);
    i++;
    }
}
