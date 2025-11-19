#include<stdio.h>
int main()
{
int a = 10;
int b = 20;
int tmp = a;
//swap korte hole jeita value swap korbo oii ta ke ekta variable  er vhitore save korte hobe
a = b;
b = tmp;
printf("%d\n%d",b,a);
    return 0;
}