#include<stdio.h>
int main() 
{
    int upper = 0, lower = 0;
    char ch[100];
    scanf("%[^\n]s", ch); 
    int i;
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
            upper++;
        else if(ch[i]>='a' && ch[i]<='z')
            lower++;
    }

    printf("Uppercase Letters : %d\n", upper);

    printf("Lowercase Letters : %d\n", lower);

    return 0;
}