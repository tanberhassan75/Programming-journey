#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int val=1;
int fre=n;
for(int i=1; i<=n; i++)
{
    for(int j=1; j<fre; j++)
    {
        printf(" ");
    }
    for(int j=1; j<=val; j++)
    {
        printf("*");
    }
    printf("\n");
    val+=2;
    fre--;
}
    return 0;
}