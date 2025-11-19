#include<stdio.h>
void print_array(int n, int a[],int i)
{
    if(i==5)
    {
        return;
    }
    printf("%d ",a[i]);
    print_array(n,a,i+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    print_array(n,a,0);
    return 0;
}