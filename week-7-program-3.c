#include <stdio.h>
int main()
{
    /* Write a C program to print lower triangle 
    of a square matrix */

int matrix[20][20];
int i,j,r;
   
scanf("%d", &r); //Accepts number of rows or columns

    for(i=0;i< r;i++) //Accepts the matrix elements from the test case data
    {
        for(j=0;j<r; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if(j<=i)
                printf("%d",matrix[i][j]);
            else
                printf("0");
    
            if(j < r-1)
                printf(" ");
        }
        if(i < r-1)
        printf(" \n");
    }

return 0;
}