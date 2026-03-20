#include <stdio.h>
int main()
{
    /* Write a C program to find subtraction of 
    two matrices i.e. matrix_A - matrix_B=matrix_C */

    int matrix_A[20][20], matrix_B[20][20], matrix_C[20][20];
    int i,j,row,col;
    scanf("%d",&row); 
    scanf("%d",&col); 
 
    
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &matrix_A[i][j]);
        }
    }

     
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &matrix_B[i][j]);
        }
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            matrix_C[i][j] = matrix_A[i][j] - matrix_B[i][j] ;
        }
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
        printf("%d",matrix_C[i][j]);
        if(j<col-1)
            printf(" ");
        }
        if(i < row-1)
        printf(" \n");
    }

    return 0;
}