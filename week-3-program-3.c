#include <stdio.h>
int main()
{
    /* Write a C program to check whether a given number (integer) is Even or Odd. */
    int number;
    scanf("%d", &number); /*An integer number is taken from the test case */

	if(number%2==0)
    {
		printf("%d is even.",number);
    }
	else
    {
      printf("%d is odd.",number);
    }
  return 0;
}