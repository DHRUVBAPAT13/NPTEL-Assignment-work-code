#include <stdio.h>

/* Write a C program to add two distance given as input 
in feet and inches.*/

struct Distance{
    int feet;
    int inch;
    }d1,d2,sum;

int main()
    {
    printf("Enter first ditsance\n");
    printf("Feet : ");
    scanf("%d",&d1.feet); 
    printf("Inches(less that 12) : ");
    scanf("%d",&d1.inch);
    printf("Enter second ditsance\n");
    printf("Feet : ");
    scanf("%d",&d2.feet);
    printf("Inches(less than 12) : ");
    scanf("%d",&d2.inch);

    struct Distance pre_sum;

	pre_sum.feet = d1.feet + d2.feet;
	pre_sum.inch = d1.inch + d2.inch;

	if(pre_sum.inch >= 12)
    {
        sum.inch = pre_sum.inch - 12;
        sum.feet = pre_sum.feet + 1;
    }
	else
    {
        sum.feet = pre_sum.feet;
        sum.inch = pre_sum.inch;
    }

    printf("Sum of distances = %d feet %d inches\n",sum.feet,sum.inch);
    return 0;
}