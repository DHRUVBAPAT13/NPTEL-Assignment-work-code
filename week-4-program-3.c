#include<stdio.h>
void main()
{
    /* Write a program to find the factorial of a given number using while loop.*/
    int n;
    long int fact;  
    scanf("%d",&n);  

	int i;
	fact=1;
	for(i=1;i<=n;i++)
    {
      fact = fact*i;
    }

	printf("The Factorial of %d is : %ld \n",n,fact);

	
}