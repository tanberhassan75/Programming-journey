#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        long long int val = a * b * c;
        long long int add = m / val;

        if (val == 0)
        {
            if (m == 0)
            {
                printf("0\n");
            }
            else
            {
                printf("-1\n");
            }
        }
        else if (val != 0 && m % val == 0)
        {
            printf("%lld\n", add);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}
