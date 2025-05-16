#include <stdio.h>
int main() {
int i,num,isPrime=1;
printf("enter a num");
  scanf("%d",&num);
  if(num<=1){
      isPrime=0;
}else{
    for(i=2;i<=num/2;i++){
    if(num % i==0){
        isPrime=0;
        break;
     }
   }
 }
 if (isPrime)
 printf("%d is a prime number.\n",num);
 else
 printf("%d is not e prime number.\n",num);
 return 0;
 }
