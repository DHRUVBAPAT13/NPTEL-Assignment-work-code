#include<stdio.h>
#include<string.h>

/* Write a C Program to reverse a given word using function 
e.g. INDIA should be printed as AIDNI */

void reverse(char[], int, int);

int main()
{
    char str1[20];      
    scanf("%s", str1);

    int size;
	size = strlen(str1);
	reverse(str1,0,size-1);

	printf("The string after reversing is: %s",str1);

	return 0;
}

void reverse(char str[], int index, int size)
{
    char temp;

    temp = str[index];
    str[index] = str[size - index];
    str[size - index] = temp;

    if(index == size/2)
    {
        return;
    }
    reverse(str, index + 1, size);
}