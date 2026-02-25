#include<stdio.h>
int mehedi=1000; //global variable
int sum()
{
    int x=10;
    // printf("sum --> %d\n",x);
    printf("sum %d\n",mehedi);
    return;
}
int main()
{
    sum();
    int x=20;
    // printf("main --> %d\n",x);
    printf("main %d",mehedi);
    
    return 0;
}