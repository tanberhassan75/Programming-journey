#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                arr[i] = a[i][j];
            }
        }
    }
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        ar[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                ar[i] = a[i][j];
            }
        }
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
         count+=arr[i];  
    }
    int count2=0;
    for(int i=0; i<n; i++)
    {
        count2+=ar[i];
    }
    int fre=0;
    if(count-count2>0)
    {
        fre=count-count2;
    }
    else
    {
        fre=count2-count;
    }
    printf("%d\n",fre);
    return 0;
}