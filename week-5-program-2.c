#include <stdio.h>
 int main()
{
    /* Write a C program to count total number of digits of an Integer number (N).*/

    int N; 
    scanf("%d",&N); 
	int orig, count=0;

	orig = N;
    while(N!=0)
    {
        N = N/10;
        count++;
    }
    printf("The number %d contains %d digits.",orig,count);

    return 0;
}