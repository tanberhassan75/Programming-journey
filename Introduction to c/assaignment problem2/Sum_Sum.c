#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a[n];
int sum = 0;
int adi = 0;
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    if(a[i]>0)
    {
        sum+=a[i];
    }
    else
    {
        adi+=a[i];
    }
}
printf("%d ",sum);
printf("%d",adi);
    return 0;
}