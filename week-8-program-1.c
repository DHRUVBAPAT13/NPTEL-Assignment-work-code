#include<stdio.h>

/* Write a C Program to find HCF of 4 given numbers using 
recursive function */

int HCF(int, int); 

int main()
{

  int a, b, c, d, result;
  scanf("%d %d %d %d", &a, &b, &c, &d); 
  /* Takes 4 number as input from the test data */
  result = HCF(HCF(a, b), HCF(c,d));
  printf("The HCF is %d", result);
  return 0;
}

//Complete the rest of the program to calculate HCF
int HCF(int a, int b)
{
  while(a != b)
  {
    if(a>b)
    {
      a -= b;
    }
    else
    {
      b -= a;
    }
  }
  return a;
}
    