#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int fre=1;
int sre=n-1;
for(int i=1; i<=n; i++)
{
    for(int j=1; j<=sre; j++)
    {
        printf(" ");
    }
    for(int j=1; j<=fre; j++)
    {
        printf("*");
    }
    printf("\n");
    fre+=2;
    sre--;
}
int dre=n*2;
int cre=1;
for(int i=1; i<=n; i++)
{
    for (int j = 1; j <cre; j++)
    {
        printf(" ");
    }
    for (int j = 1; j < dre; j++)
    {
        printf("*");
    }
    dre-=2;
    cre++;
    printf("\n");
    
    
}
    return 0;
}