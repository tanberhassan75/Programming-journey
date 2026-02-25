#include<stdio.h>
int main()
{
int N;
int Mul = 3*7;
scanf("%d",&N);
for (int i=1;i<=N;i++)
if(i%Mul==0)
{
    printf("%d\n",i);
}
    return 0;
}