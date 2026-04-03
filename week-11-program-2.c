#include <stdio.h>

/* Write a C program to find integrate x ^ 2 dx from a to b 
using Trapezoidal rule with 10 segments between a and b. 
The values of a and b will be taken from test cases. */

float func(float x);

int main()
{
    int n; //Taking n sub intervals
    printf("Enter number of intervals (<100) : ");
    scanf("%d",&n);

    float a,b,integral; //integral is the integration result

    printf("Enter lower limit : ");
    scanf("%f",&a); 
    printf("Enter upper limit : ");
    scanf("%f",&b); 

    int i;
	float h, x,sum = 0;

	if(b>a)
        h = (b-a)/n;
	else
        h = -(b-a)/n;
	
	for(i=1;i<n;i++)
    {
        x = a+i*h;
        sum += func(x);
    }
	
	integral = (h/2)*(func(a) + func(b) + 2*sum);
	printf("The integral is: %0.6f",integral);
    return 0;
}

float func(float x)
{
    return x*x ;
}


