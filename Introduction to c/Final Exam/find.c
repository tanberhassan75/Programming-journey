#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int M, A, B, C;
        scanf("%d %d %d %d", &M, &A, &B, &C);
        int alu = A * B * C;
        int kalu = M / alu;
        if (M % kalu == 0)
        {
            printf("%d\n", kalu);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}