#include<stdio.h>
int main(){
    int marks;
    printf("Enter student marks:");
    scanf("%d",&marks);
    if (marks>=40){
        printf("The student passed.\n");
    }
    else{
        printf("The student failed.\n");
    }
    return 0;
}
