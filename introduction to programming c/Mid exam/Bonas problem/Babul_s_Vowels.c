#include<stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    if('a'==n || 'e'==n || 'i'==n || 'o'==n || 'u'==n)
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    return 0;
}