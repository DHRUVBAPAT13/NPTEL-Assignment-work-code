#include<stdio.h>

/* Write a C program to find the root of the equation using Newton-Raphson method.
	f(x) = x^3 - 2x - 3
	The maximum number of steps are taken as input. */


float f(float x);
float df (float x);

int main()
{
    int itr, maxmitr; 
    float x0=1.0, x1; 
    printf("Enter value of max no. of iterations : ");
    scanf("%d", &maxmitr); 

    float h;
	for(itr=1;itr<=maxmitr;itr++)
    {
        h=f(x0)/df(x0);
        x1 = x0-h;
        x0=x1;
    }
	printf("Root = %8.6f",x1);
	return 0;
}

float f(float x)
{
    return (x*x*x - 2*x - 3);
}

float df(float x)
{
    return (3*x*x - 2);
}


