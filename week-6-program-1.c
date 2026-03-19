#include <stdio.h>

int main()
{
    /*Write a C Program to find Largest Element of an 
    Integer Array. Here the number of elements in the array ‘n’ 
    and the elements of the array is read from the test data.*/
    
    int i, n, largest;
    int arr[100];

    scanf("%d", &n); 
    for(i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]); 
    }
    largest = arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>largest)
            largest = arr[i];
    }
    printf("Largest element = %d",largest);
}