#include<stdio.h>
void recurtion(int n, int i)
{
    if(i==n)
    {
        return;
    }
    printf("I love Recursion\n");
    recurtion(n,i+1);
}
int main()
{
int n;
scanf("%d",&n);
recurtion(n,0);
    return 0;
}