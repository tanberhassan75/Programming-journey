#include<stdio.h>
int a(int sum1)
{
    if(sum1%2==0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    // int val=a(n);
    // printf("%d",val);
    a(n);
    return 0;
}