#include <stdio.h>
int main(){
    int arr[10]={1,2,3,4,5},n=5,i,temp,*start,*end;
    start = arr;
    while(start<end){
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    
}
