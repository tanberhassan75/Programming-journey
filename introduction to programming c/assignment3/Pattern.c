#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sp = n;
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < sp; j++)
        {
            printf(" ");
        }
        if (i % 2 != 0)
        {
            for (int j = 1; j <= f; j++)
            {
                printf("#");
            }
        }
        else
        {
            for (int j = 1; j <= f; j++)
            {
                printf("-");
            }
        }
        printf("\n");
        f += 2;
        sp--;
    }
    int fre = f - 4;
    int sp1 = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= sp1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= fre; j++)
        {
            if ((n + i) % 2 != 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
        fre -= 2;
        sp1++;
    }

    return 0;
}