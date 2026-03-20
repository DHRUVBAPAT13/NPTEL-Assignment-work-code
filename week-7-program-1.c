#include <stdio.h>
int main()
{
    /* Write a C program to find the sum of 
    all elements of each row of a matrix.*/
    
    int matrix[20][20];
    int i,j,r,c;

    scanf("%d",&r); 
    scanf("%d",&c); 

    for(i=0;i< r;i++) 
    {
        for(j=0;j< c;j++)
        {
            scanf("%d",&matrix[i][j]); 
        }
    }

    for(i=0;i<r;i++)
    {
        int rowsum = 0;
        for(j=0;j<c;j++)
        {
            rowsum += matrix[i][j];
        }
        printf("%d",rowsum);
        if(i != r-1)
        {
            printf("\n");
        }
    }

    return 0;
}