#include<stdio.h>
 
int main() 
{
    /* Write a C Program to delete duplicate elements 
    from an array of integers.*/

    int array[50], i, size;
 
    scanf("%d", &size); 

    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]); 
    }

	int j, k ;
	for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(array[i]==array[j])
            {
                for(k=j;k<size-1;k++)
                {
                    array[k]=array[k+1];
                }
            size--;
            j--;
            }
        }
    }

    for (i = 0; i < size; i++) 
    {
        printf("%d\n", array[i]);
    }
return 0;

}