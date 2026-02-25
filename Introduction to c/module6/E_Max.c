#include<stdio.h>
int main()
{
int x;
scanf("%d",&x);
int mx = 0;
for(int i = 1;i<=x;i++)
{
    int n;
    scanf("%d",&n);
    if(n>mx)
    {
        mx = n;
    }
}
printf("%d",mx);
    return 0;
}