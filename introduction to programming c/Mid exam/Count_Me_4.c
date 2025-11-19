#include<stdio.h>
int main()
{
char n[10001];
scanf("%s",n);
int a[26]={0};
int len=strlen(n);
for(int i=0; i<len; i++)
{
    int val = n[i] - 'a';
    a[val]++;
}
for(int i=0; i<26; i++)
{
    if(a[i] != 0)
    {
        printf("%c - %d\n",i + 'a',a[i]);
    }
}
    return 0;
}