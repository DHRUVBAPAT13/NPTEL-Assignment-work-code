#include <stdio.h>

/* Write a C program to search a given element
from a 1D array and display the position at which 
it is found by using linear search function. 
The index location starts from 1. */

int linear_search(int[], int, int);

int main()
{
    int array[100], search, c, n, position;
    printf("Enter no. of elements in array : ");
    scanf("%d",&n);

    printf("\nEnter the elements of the array : ");
    for(c=0;c<n;c++)
    {
        scanf("%d",&array[c]);
    }

    printf("Enter element to be searched :");
    scanf("%d",&search);

    position = linear_search(array, search, n);

    if(position != -1)
    {
        printf("%d is present at location %d.",search,position+1);
    }
    else
    {
        printf("%d is not present in the array.",search);
    }

    return 0;
}

int linear_search(int arr[], int key, int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(key == arr[i])
        {
            return i ;
        }
    }
    return -1 ;
}