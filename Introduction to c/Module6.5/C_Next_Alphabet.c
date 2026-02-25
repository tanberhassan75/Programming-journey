#include<stdio.h>
int main()
{
    char n;
    scanf("%c", &n);
    if(n=='z')
    {
        printf("%c\n",'a');
        
    }
    else
    {
        printf("%c\n",n + 1);
    }
    
    return 0;
}