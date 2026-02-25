#include<stdio.h>
int main()
{
char a[1001];
char b[1001];
int n,m;
scanf("%s %s",a,b);
scanf("%d %d",&n,&m);
int len=strlen(a);
while(n<=m)
{
    a[len]=b[n];
    len++;
    n++;
}
a[len] = '\0';
printf("%s",a);
    return 0;
}
