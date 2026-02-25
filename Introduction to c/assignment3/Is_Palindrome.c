#include<stdio.h>
int is_palindrome(char s[])
{
    int len = strlen(s);
    int i=0;
    int j=len-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            return 1;
        }
        j--;
        i++;
    }
    return 0;
}
int main()
{
    char s[1001];
    scanf("%s",s);
    is_palindrome(s);
    if(is_palindrome(s)==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    
    return 0;
}