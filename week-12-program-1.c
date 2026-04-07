#include <stdio.h>

/* Write a program in C to find 
the factorial of a given number using pointers.*/

void findFact(int x, long int *fact)
{
    int i;
    *fact = 1;

    for(i=1;i<=x;i++)
    {
        *fact = *fact*i;
    }
}


int main()
{
    long int fact;
    int num1;
    printf("Enter a number : ");
    scanf("%d",&num1);

    findFact(num1, &fact);

    printf("The factorial of %d is %ld.\n",num1,fact);

    return 0;
}

