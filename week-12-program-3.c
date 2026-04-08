#include <stdio.h>
#include <stdlib.h>

/* Write a C program to store n elements using 
Dynamic Memory Allocation - calloc() 
and find the Largest element */

int main()
{
    int n;
    float *element;

    printf("Enter number of elements : ");
    scanf("%d",&n);

    element = (float*)calloc(n, sizeof(float));

    if(element == NULL)
    {
        printf("Error!!! no meory available.");
        exit(0);
    }

    int i;
    printf("Enter the elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%f",element+i);
    }

    for(i=0;i<n;i++)
    {
        if(*element < *(element+i))
        {
            *element = *(element+i);
        }
    }
    printf("The largest number is : %.2f\n",*element);
    return 0;
    
}