#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int *ptr = arr;
    printf("Initial value: %d\n", *ptr);
    ptr++;
    printf("Value after increment: %d\n", *ptr);
    ptr++;
    printf("Value after second increment: %d\n", *ptr);
    ptr = arr;
    for (int i=0;i<5;i++){
        printf("Elemebt %d:%d\n",i,*ptr);
        ptr++;
    }
    return 0;
    }

