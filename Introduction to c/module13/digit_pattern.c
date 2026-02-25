#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int count=1;
int sp=n-1;
for(int i=1; i<=n; i++) //for line 
{
    for(int j=1; j<=sp; j++) //for space
    {
        printf(" ");
    }
    for(int j=1; j<=count; j++) // for star & pattern
    {
        printf("%d ",j);
    }
    printf("\n");
    count++;
    sp--;
}
    return 0;
}