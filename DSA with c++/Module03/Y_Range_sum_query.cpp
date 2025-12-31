#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<long long int> v1(n + 1);
    for (int i = 1; i <= n; i++)
    {
        v1[i] = v[i] + v1[i - 1];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        long long int sum;
        if(l==1)
        {
            sum= v1[r];
        }
        else
        {
            sum = v1[r] - v1[l - 1];
        }
        cout << sum << endl;
    }
    return 0;
}