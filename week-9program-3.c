#include <stdio.h>

/* Write a C program to search a given number from 
a sorted 1D array and display the position at which 
it is found using binary search algorithm. 
The index location starts from 1. */

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

    int first, middle, last;

    first=0;
    last=n-1;
    middle = (first+last)/2;

    while (first<=last)
    {
        if(array[middle] < search)
        {
            first = middle+1;
        }
        else if(array[middle] == search)
        {
            printf("%d found at location %d.\n", search, middle + 1);
            return 0;
        }
        else
        {
            last = middle-1;
        }
        middle = (first+last)/2 ;
    }

    if(first > last)
    {
        printf("Not found! %d isn't present in the list.\n", search);
    }

    return 0;

}
    