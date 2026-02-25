
#include <stdio.h>
int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int val = a + b;
    return val;
}
int main()
{
    int mul = sum();
    printf("%d", mul);
    return 0;
}
