#include<stdio.h>
int main()
{
    /* The length of three sides are taken as input. 
    Write a C program to find whether a triangle can be 
    formed or not. If not display “This Triangle is NOT 
    possible.” If the triangle can be formed then check 
    whether the triangle formed is equilateral, isosceles, 
    scalene or a right-angled triangle. 
    (If it is a right-angled triangle then only print 
    Right-angle triangle do not print it as Scalene Triangle).*/
    
    int a,b,c; 
    scanf("%d %d %d",&a, &b, &c); /*The length of three sides are entered from the test cases */
 
	if(a<=0 || b<=0 || c<0 || a+b<=c || c+a<=b || b+c<=a)
    {
      printf("Triangle is not possible");
    }
	else
    {
      if(a*a + b*b == c*c || c*c + a*a == b*b || b*b + c*c == a*a)
      {
        printf("Right-angle Triangle");
      }
      else if(a==b && b==c)
      {
        printf("Equilateral Triangle");
      }
      else if(a==b || b==c || c==a)
      {
        printf("Isosceles Triangle");
      }
      else
      {
        printf("Scalene Triangle");
      }
    }
      
      return 0;
}