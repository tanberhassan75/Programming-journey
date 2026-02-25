#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int sp=n;
for(int i=1; i<=n; i++)
{
    for(int j=1; j<sp; j++)
    {
        printf(" ");
    }
    for(int j=i; 1<=j; j--)
    {
        printf("%d",j);
    }
    printf("\n");
    sp--;
}
    return 0;
}