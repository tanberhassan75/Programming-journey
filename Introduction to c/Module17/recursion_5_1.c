#include<stdio.h>
void recursion(int i)
{
    if(i==0)
    {
        return;
    }
    printf("%d\n",i);
    recursion(i-1);
}
int main()
{
    int i=5;
    recursion(i);
    return 0;
}