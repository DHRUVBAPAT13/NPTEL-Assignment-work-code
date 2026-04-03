#include <stdio.h>

/* Write a C program to check whether the given input number 
is Prime number or not using recursion. So, the input is an integer 
and output should print whether the integer is prime or not. 
Note that you have to use recursion. */

int checkPrime(int, int);

int main()
{
    int num, check;
    printf("Enter a positive integer : ");
    scanf("%d", &num); 
    check = checkPrime(num, num/2);
    if (check == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}

int checkPrime(int num, int i)
{
    if(i==1)
    {
        return 1;
    }
    else
    {
        if(num%i == 0)
        {
    	    return 0;
        }
        else
        {
    	    return checkPrime(num, i-1);
        }
    }
  
}    
    