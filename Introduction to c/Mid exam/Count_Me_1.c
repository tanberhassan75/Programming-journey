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
int val=0;
int val1=0;
for(int i=0; i<n; i++)
{
    if(a[i]%2==0)
    {
        val++;
    }
    else if(a[i]%3==0)
    {
        val1++;
    }
}
printf("%d %d",val, val1);
    return 0;
}