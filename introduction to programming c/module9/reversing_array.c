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
int i=0;
int j=n-1;
// eta ke bole 2 pointers technic 2 mathay 2 ta pointer nibo 2 mathay 
//tader use kore bivhinno kaj korbo
while(i<j)
{
    int tmp=a[i];
    a[i]=a[j];
    a[j]=tmp;
    i++;
    j--;
}
for(int i=0; i<n; i++)
{
    printf("%d ",a[i]);
}
    return 0;
}