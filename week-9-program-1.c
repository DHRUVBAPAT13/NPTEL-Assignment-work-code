#include <stdio.h>

/* Write a program to print all the locations 
at which a particular element (taken as input) 
is found in a list and also print the total number of times 
it occurs in the list*/

int main()
{
    int array[100], search, n, count=0;
    printf("Enter number of elements : ");
    scanf("%d",&n); //Number of elements is taken 

    int c;
    printf("\nEnter the elements of the array : ");
    for(c=0;c<n;c++)
    {
        scanf("%d",&array[c]);
    }

    printf("Enter element to be searched :");
    scanf("%d",&search);

    for(c=0;c<n;c++)
    {
        if(search == array[c])
        {
            printf("%d is present at location %d.\n",search,c+1);
            count++;
        }
    }
    if(count>0)
    {
        printf("%d is present %d times in the array.",search,count);
    }
    else
    {
        printf("%d is not present in the array.",search);
    }
    
    return 0;
}