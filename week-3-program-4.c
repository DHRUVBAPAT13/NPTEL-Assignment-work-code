#include <stdio.h>
int main()
{
    /* Write a C Program to find the Largest Number (integer) 
    among Three Numbers (integers) using IF and Logical && operator.*/
    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3); /*Three numbers are accepted from the test case */

    if( n1>=n2 && n1>=n3 )
        printf("%d is the largest number.", n1);

    if( n2>=n1 && n2>=n3 )
        printf("%d is the largest number.", n2);

    if( n3>=n1 && n3>=n2 )
        printf("%d is the largest number.", n3);
}