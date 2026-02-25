#include<stdio.h>
#include<stdbool.h>
int main()
{
char s[100001];
scanf("%s",&s);
int lenth = strlen(s);
int n=0;

for(int i=0; i<lenth; i++)
{
    if(s[i] !='a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
    {
        n++;
    }
}
printf("%d",n);
    return 0;
}