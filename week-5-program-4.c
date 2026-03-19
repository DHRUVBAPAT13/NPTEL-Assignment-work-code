#include<stdio.h>
int main()
{
    /* Write a C program to find sum of following series where the value of N 
    is taken as input 1+ 1/2 + 1/3 + 1/4 + 1/5 + .. 1/N */
    int N;
    float sum = 0.0;
    scanf("%d",&N); 
	int i;
	if(N<=0)
    {
        printf("Please enter a positive integer greater than zero.");
    }
	else
    {
        for(i=1;i<=N;i++)
        {
            sum = sum + (1.0/i) ;
        }
        printf("Sum of the series is: %.2f",sum);
    }

	return 0;
}