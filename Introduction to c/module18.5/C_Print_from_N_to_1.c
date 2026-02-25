#include<stdio.h>
void printing(int n,int i)
{
    if(i<1)
    {
        return;
    }
    printf("%d ",i);
    printing(n,i-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int i=n;
    printing(n,i);
    return 0;
}