#include<stdio.h>
void printing(int n,int i)
{
    if(i>n)
    {
        return;
    }
    printf("%d\n",i);
    printing(n,i+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    printing(n,i);
    return 0;
}