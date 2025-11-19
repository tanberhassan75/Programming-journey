#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int check=0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(a[i][j]==0)
            {
                check++;
            }
        }
    }
    int mul=r*c;
    if(check == mul)
    {
        printf("This is a zero matrix");
    }
    else
    {
        printf("This is not a zero matrix");
    }
    return 0;
}