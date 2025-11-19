#include<stdio.h>
void sum(int n)
{
    for(int i=1; i<=n; i++)
    {
        printf("%d",i);
        printf(" ");
    }
    printf("\n"); 
}
int main()
{
int n;
scanf("%d",&n);
sum(n);
    return 0;
}