#include<stdio.h>
void fun(int* x)// <---(pointer wise reacive korlam)
{
  *x = 20;//pointer ke direffence korlam *diye oii address a giye seta change korlam
     
}
int main()
{
int x = 10;
fun(&x);//-----> eta ke bole pass value(eta ke reffence wise pathailam)
printf("main --> %d",x);
    return 0;
}