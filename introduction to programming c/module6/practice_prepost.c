#include<stdio.h>
int main()
{
int x = 10;
int y = x++;
// post increment age kaj hobe pore increment
int z = ++y;
// pre increment age increment pore kaj
printf("%d",z);
    return 0;
}