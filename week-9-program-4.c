#include <stdio.h>

/* Write a C program to reverse an array by swapping 
the elements and without using any new array. */

int main()
{
    int array[100], n, c;

    printf("Enter no. of elements in array : ");
    scanf("%d",&n);

    printf("\nEnter the elements of the array : ");
    for(c=0;c<n;c++)
    {
        scanf("%d",&array[c]);
    }

    int temp;
	for (c = 0; c < n / 2; c++)
    {
        temp = array[c];
        array[c] = array[n-c-1];
        array[n-c-1] = temp;
 	}

    printf("Reversed array elements are:\n");

    for (c = 0; c < n; c++) 
    {
        printf("%d\n", array[c]);
    }
    return 0;

}