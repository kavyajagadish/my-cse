#include<stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num>0){
        printf("%d is a positive number.\n",num);
    }
    else if (num<0){
        printf("%d is a negative number.\n",num);
    }
    else{
        printf("the number is zero.\n");
        
    }
    
    return 0;
}
