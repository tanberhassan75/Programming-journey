#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long r, c;
    cin >> r >> c;
    long long a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    long long ar[r];
    for (int i = 0; i < r; i++)
    {
        ar[i] = 0;
        for (int j = 0; j < c; j++)
        {
            ar[i] += a[i][j];
        }
    }
    long long t = 0;
    int ts = 0;
    int ok = 1;
    for (int i = 0; i < r; i++)
    {
        int z = 0;
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == 0)
            {
                z = 1;
                break;
            }
        }
        if (z == 0)
        {
            if (ts == 0)
            {
                t = ar[i];
                ts = 1;
            }
            else if (t != ar[i])
            {
                ok = 0;
            }
        }
    }
    if (ok == 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    if (ts == 0)
    {
        cout << "YES" << endl;
        return 0;
    }
    long long lim = 1000000000LL;
    for (int i = 0; i < r; i++)
    {
        long long zc = 0;
        long long fs = 0;

        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == 0)
                zc++;
            else
                fs += a[i][j];
        }
        if (zc > 0)
        {
            long long nd = t - fs;
            if (nd < -zc * lim || nd > zc * lim)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}
