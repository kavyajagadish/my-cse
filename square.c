#include <stdio.h>
#include <string.h>
int sq(int n){
    return n*n;
}
int main(){
    int n=5;
    int result=sq(n);
    printf("The square of %d is%d\n",n,result);
    return 0;
}
