#include <stdio.h>
int main()
{
    /* Write a C program to check whether a given number (N) 
    is a perfect number or not? Perfect Number - A perfect number 
    is a positive integer number which is equals to the sum of 
    its proper positive divisors. For example 6 is a perfect number 
    because its proper divisors are 1, 2, 3 and it’s sum is equals to 6. */
    
    int N; 
    scanf("%d",&N); 
	int i, sum=0;
	
	for(i=1;i<N;i++)
    {
        if(N%i==0)
        {
            sum += i;
        }
    }

	if(sum==N)
    {
        printf("%d is a perfect number.",N);
    }
	else
    {
        printf("%d is not a perfect number.",N);
    }

	return 0;
}