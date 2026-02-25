#include<stdio.h>
int main()
{
int a;
int b;
int c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
int a1=a;
int b1=b;
int c1=c;
if(a1>b1)
{
    int temp=a1;
    a1=b1;
    b1=temp;
}
if(a1>c1)
{
    int temp=a1;
    a1=c1;
    c1=temp;
}
if(b1>c1)
{
    int temp=b1;
    b1=c1;
    c1=temp;
}
printf("%d\n %d\n %d\n\n",a1,b1,c1);
printf("%d\n %d\n %d\n",a,b,c);
    return 0;
}