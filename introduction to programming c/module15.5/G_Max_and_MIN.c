#include <stdio.h>
void sum(int n, int a[])
{
    int min = 0;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < a[min])
        {
            min = i;
        }
        if (a[i] > a[max])
        {
            max = i;
        }
    }
    printf("%d %d", a[min], a[max]);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sum(n, a);

    return 0;
}