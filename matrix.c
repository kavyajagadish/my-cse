#include<stdio.h>
int main()
{
    int i,j;
    int row,col;
    printf("enter the row and col");
    scanf("%d%d",&row,&col);
    int a[row][col],b[row][col],c[row][col];
    printf("enter the elements of matrix a\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements od matrix b\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&b[i][j]);
        }
    }
            for(i=0;i<row;i++){
                for(j=0;j<col;j++){
                c[i][j]=a[i][j]+b[i][j];
                }
            }
           for(i=0;i<row;i++){
                for(j=0;j<col;j++){
                    printf("6%d",c[i][j]);
                }
           printf("\n");
           }
}
                    
                    
                
