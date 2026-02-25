#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    long long mx = -1;

    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] % 2 == 0)
        {
            mx = v[i];
            break;
        }
    }
    if (n >= 2)
    {
        int count = 0;
        long long sum = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] % 2 == 0)
            {
                sum += v[i];
                count++;
                if (count == 2)
                    break;
            }
        }
        if (count == 2)
            mx = max(mx, sum);

        count = 0;
        sum = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] % 2 != 0)
            {
                sum += v[i];
                count++;
                if (count == 2)
                    break;
            }
        }
        if (count == 2)
            mx = max(mx, sum);
    }
    cout << mx << endl;
    return 0;
}