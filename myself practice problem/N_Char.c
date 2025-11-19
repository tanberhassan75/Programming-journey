#include<stdio.h>
int main()
{
char n;
scanf("%c",&n);
if(n>='a' && n<='z')
{
    n -=32;
    printf("%c",n);
}
else 
{
    n+=32;
    printf("%c",n);
}
    return 0;
}