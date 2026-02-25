#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n=(t+11)/2;
    int st=1;
    int sp=n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<sp-1; j++)
        {
            printf(" ");
        }
        for(int j=0; j<st; j++)
        {
            printf("*");
        }
        st+=2;
        sp--;
        printf("\n");
    }
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf(" ");
        }
        for(int j=0; j<t; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}