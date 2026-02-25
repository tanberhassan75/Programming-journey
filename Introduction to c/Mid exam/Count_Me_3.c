#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        char s[10001];
        scanf("%s", s);
        int a = 0;
        int b = 0;
        int c = 0;
        int len = strlen(s);
        for (int i = 0; i < len; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                a++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                b++;
            }
            else
            {
                c++;
            }
        }
        printf("%d %d %d\n", a, b, c);
    }
    return 0;
}