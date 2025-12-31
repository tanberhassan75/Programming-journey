#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        int a[x];
        for (int i = 0; i < x; i++)
        {
            cin >> a[i];
        }
        int flag = 0;
        for (int i = 0; i < x; i++)
        {
            for (int j = i + 1; j < x; j++)
            {
                for (int t = j + 1; t < x; t++)
                {
                    if (a[i] + a[j] + a[t] == y)
                    {
                        flag = 1;
                    }
                }
            }
        }
        if (flag == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}