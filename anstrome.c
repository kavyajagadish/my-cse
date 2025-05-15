#include<stdio.h>
int main(){
int num,result=0,remainder,original;
printf("enter a integer:");
scanf("%d",&num);
original=num;
while (num!=0){
    remainder=num %10;
    result += remainder*remainder*remainder;
    num/=10;
}
if(original==result){
    printf("%d is a anstrome\n");
}else{
    printf("%d is a anstrome\n");
}
return 0;
}
