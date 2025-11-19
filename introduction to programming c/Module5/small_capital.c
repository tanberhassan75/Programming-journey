#include<stdio.h>
int main()
{
char ch;
scanf("%c",&ch);
if(ch>=48 && ch<=57)
{
    printf("IS DIGIT");
}
else
{
    printf("ALPHA\n");
    if(ch>='a' && ch<='z')
    {
        printf("IS SMALL");
    }
    else
    {
           printf("IS CAPITAL");   
    } 
}
    return 0;
}