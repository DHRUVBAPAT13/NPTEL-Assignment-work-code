#include<stdio.h>

/* Write a C program to print the Record 
of the Student Merit wise. Here a structure 
variable is defined which contains student 
rollno, name and score. */

struct student
{
    int rollno;
    char name[20];
    int score;
};

void main()
{
    struct student s[20];
    int i, n;
    printf("Enter number of students : ");
    scanf("%d" ,&n); 
    for(i=0;i<n;i++)
    {
        printf("Enter roll no : ");
        scanf("%d", &s[i].rollno);
        printf("Enter name : ");
        scanf("%s", s[i].name);
        printf("Enter score : ");
        scanf("%d", &s[i].score);
    }

    struct student temp;
    int j;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(s[j].score < s[j+1].score)
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    printf("The Merit List is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d", s[i].rollno);
        printf("  %s", s[i].name);
        printf("  %d\n", s[i].score);
    }
}
