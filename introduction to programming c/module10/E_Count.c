#include<stdio.h>
int main()
{
char n[1000001];
scanf("%s",n);
int lenth=strlen(n);
int  sum=0;
for(int i=0; i<lenth; i++)
{
    sum+=n[i]-48;
}
printf("%d",sum);
    return 0;
}
// ekhane amader ascii value - hocche 3 5 1 er ascii value