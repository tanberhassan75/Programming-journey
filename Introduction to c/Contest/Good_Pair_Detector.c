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
int count=0;
int i=0;
int j=1;
int opp=0;
while(i<=n)
{
    if(a[i]%2==0 && a[j]%2==0)
    {
        opp++;
    }
    else if(a[i]%2!=0 && a[j]%2!=0)
    {
        opp++;
    }
    else
    {
        count++;
    }
    i++;
    j++;
}
printf("%d",count);
    return 0;
}