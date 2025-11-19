#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int val=n;
for(int i=1; i<=n; i++)
{
    for(int j=1; j<=val; j++)
    {
        printf("*");
    }
    printf("\n");
    val--;
}
    return 0;
}