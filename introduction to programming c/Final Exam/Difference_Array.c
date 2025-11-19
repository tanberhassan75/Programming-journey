#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int r;
    scanf("%d",&r);
    int a[r];
    for(int i=0; i<r; i++)
    {
        scanf("%d",&a[i]);
    }
    int ar[r];
    for(int i=0; i<r; i++)
    {
        ar[i]=a[i];
    }

    for (int i = 0; i < r - 1; i++)
    {
        for (int j = i + 1; j < r; j++)
        {
            if (ar[i] > ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    int c[r];
    for(int i=0; i<r; i++)
    {
        if(a[i]-ar[i] <0)
        {
            c[i]=ar[i]-a[i];
        }
        else
        {
            c[i]=a[i]-ar[i];
        }
    }
    for (int i = 0; i < r; i++)
    {
        printf("%d ",c[i]);
    }
    printf("\n");
    }
    return 0;
}