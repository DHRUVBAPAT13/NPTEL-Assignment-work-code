#include <stdio.h>

/* Write a C program to sort a 1D array using pointer 
by applying Bubble sort technique*/

void sort(int *a, int n);

int main()
{
    int a[20];
    int n, i;

    printf("Enter no. of elements of the array : ");
    scanf("%d",&n);

    printf("Enter elements of the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    sort(a, n);

    printf("Sorted array : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

void sort(int *a, int n)
{
    int i, j, temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(*(a+j) > *(a+j+1))
            {
                temp = *(a+j);
                *(a+j) = *(a+j+1);
                *(a+j+1) = temp;
            }
        }
    }
}