#include <stdio.h>
#include <string.h>
int main()
{
    char name[15];
    printf("enter name");
    scanf("%s",&name);
    printf("%s\n",name);
    int length = strlen(name);
    printf("%d\n",length);
    strcpy(name,"sanjana");
    printf("%s\n",name);
    int cmp=strcmp("sanju","kavya");
    printf("%d\n",cmp);
    strcat(name,"coder");
    printf("%s\n",name);
    }
