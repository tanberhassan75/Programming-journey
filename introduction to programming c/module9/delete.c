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
int idx;
scanf("%d",&idx);
for(int i=idx; i<n; i++)
{
    a[i]=a[i+1];
}
// n-- ei vhabe array er value komano jay mean dhore neoya jay eto kom / beshi
n--;
for(int i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
    return 0;
}