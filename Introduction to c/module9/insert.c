#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a[n+1];
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);   
}
int idx,val;
scanf("%d  %d",&idx,&val);
for(int i=n;i>=idx+1;i--)
 // loop ta n theke suru hobe i mean 6 sesh hobe idx+1 idx er value er sathe 1 + 
{ 
    a[i]=a[i-1]; 
    // a[i] er vhitore i -1 rakhchi mani 6 er vhitore 6-1=5 ke rakhtechi
}   // eta reped hobe idx +1 projonto
a[idx]=val; // idx number idx er moddhe val er value ta rakhtechi
for(int i = 0;i<=n;i++)
{
    printf("%d ",a[i]);
}
    return 0;
}