#include <stdio.h>
int main() {
    int a=5;
    int *ptr=&a;
    printf("before a is:%d\n",a);
    *ptr=*ptr+10;
    printf("after a is:%d\n",ptr);
    return 0;
}
