#include<stdio.h>
int main(){
    int a=15;
    int *b=&a;
    *b=*b+10;
    printf("a=%d\n",a);
    printf("kavya=%d\n",*b);
     return 0;
    }

