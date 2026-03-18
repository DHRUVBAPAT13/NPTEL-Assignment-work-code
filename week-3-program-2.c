#include <stdio.h>
int main()
{
    /* Write a C program to check if a given Number 
    is zero or Positive or Negative Using if...else statement.*/
    double number;
    scanf("%lf", &number); 
    
	if(number>0)
    {
      printf("Positive number.");
    }
	else if(number<0)
    {
      printf("Negative number.");
    }
	else
    {
		printf("Zero.");
    }

}