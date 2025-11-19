#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a[n];
int b[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
    scanf("%d",&b[i]);
}
int i=0;
int j=n-1;
while(i<j)
{
    int val=a[i];
    a[i]=a[j];
    a[j]=val;
    i++;
    j--;
}
int c[n];
for(int i=0; i<n; i++)
{
    c[i]=0;
}
for(int i=0; i<n; i++)
{
   c[i]=a[i]+b[i];
}
for(int i=n-1;i>=0;i--)
{
    printf("%d ",c[i]);
    
}
    return 0;
}