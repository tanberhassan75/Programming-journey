#include<stdio.h>
int main()
{
    int n ,count=1;
    scanf("%d",&n);
    int sp=n-1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=sp; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=count; j++)
        {
            
            printf(" *");
        }
        printf("\n");
        count++;
        sp--;
    }
    
    return 0;
}