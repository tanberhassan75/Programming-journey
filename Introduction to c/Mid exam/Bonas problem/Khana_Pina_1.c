#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
if(1000<=n)
{
    printf("Three Kacchi");
}
else if(500<=n)
{
    printf("One Large Pizza");
}
else if(250<=n)
{
    printf("Three Small Burger");
}
else if(100<=n)
{
    printf("Three Fuchka");
}
else
{
    printf("Nothing");
}
    return 0;
}