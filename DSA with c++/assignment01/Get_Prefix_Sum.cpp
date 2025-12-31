#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<long long int> v1(n + 1);
    for (int i = 1; i <= n; i++)
    {
        v1[i] = v[i] + v1[i - 1];
    }
    for (int i = n; n >= 1; n--)
    {
        cout << v1[n] << " ";
    }
    cout << endl;
    return 0;
}