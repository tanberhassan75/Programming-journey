#include<stdio.h>
int sum(int a,int b)
{
    int val = a+b;
    return val;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
   int mul = sum(a,b);
    printf("%d",mul);
    return 0;
}