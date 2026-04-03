#include <stdio.h>

/* 
The velocity of a car at different time instant is given as
Time (t)        10  15  18  22  30  
Velocity v(t)   22  26  35  48  68
A linear Lagrange interpolant is found using these data points. 
Write a C program to find the velocity of the car at different time instants.  */

int main()
{
    float t[100]={10,15,18,22,30}, v[100]={22,26,35,48,68};
    float a; 
    printf("Enter value to find velocity at that time : ");
    scanf("%f", &a); 

    int i, j;
	float b,c,k=0;
	for(i=0; i<5; i++)
    {
        b=1;
        c=1;
        for(j=0; j<5; j++)
        {
            if(j!=i)
            {
               b=b*(a-t[j]);
               c=c*(t[i]-t[j]);
            }
        }
        k=k+((b/c)*v[i]);
    }

    printf("The respective value of the variable v is: %.2f\n", k);
    return 0;
}