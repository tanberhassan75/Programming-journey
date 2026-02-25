#include<stdio.h>
#include<stdbool.h>
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
    // int dio=(r*c)-r;
    // int count=0;
    int diagonal=true;
    if(r==c)
    {
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(i+j==r-1)
                {
                    // if(a[i][j]==0)
                    // {
                    //     count++;
                    // }
                }
                else
                {
                    if(a[i][j]!=0)
                    {
                        diagonal=false;
                        printf("This is a not primary diagonal matrix\n");
                    }
                }
            
            }
        }
        if(diagonal == true)
        {
            printf("This is a primary diagonal matrix\n");
        }
    }
    else
    {
        printf("This is not a primary dioganal matrix\n");
        // return 0;
    }
    // if(dio==count)
    // {
    //     printf("This is a dioganal matrix");
    // }
    // else
    // {
    //     printf("This is not a dioganal matrix");
    // }
    return 0;
}