#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(int i=n-1;i>=0;i--) //n-1 mean n theke 1-kora holo mani user jeita dibe oita  theke  1-
{
    printf("%d\n",a[i]);
    
}
    return 0;
}