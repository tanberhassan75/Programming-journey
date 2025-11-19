#include<stdio.h>
#include<string.h>
int main()
{
char n[101];
scanf("%s",&n);
int count=0;
for(int i=0; n[i] != '\0' ; i++)
{
    count++;
}
printf("%d",count);
    return 0;
}