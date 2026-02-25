#include<stdio.h>
int main()
{
int n,count=1;
scanf("%d",&n);
int sp=n-1;
for(int i=1; i<=n; i++) //for line 
{
    for(int j=1; j<=sp; j++) //for space
    {
        printf(" ");
    }
    for(int j=1; j<=count; j++) // for star & pattern
    {
        printf("*");
    }
    printf("\n");
    count+=2;
    sp--;
}
    return 0;
}