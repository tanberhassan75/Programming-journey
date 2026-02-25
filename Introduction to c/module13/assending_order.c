#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n-1; i++) // sorting algorithom
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j]) // eta assending order
            {
                int v=a[i];  // eta ke bole selection sort
                a[i]=a[j];
                a[j]=v;
            }
            // if (a[i] < a[j])
            // {
            //     int v = a[i]; eta ke bole dessending order 
            //     a[i] = a[j];
            //     a[j] = v;
            // }
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}