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
    int flag = 0;
    int j = 0;
    for (int i = j + 1; i < n; i++)
    {
        if (v[i] == v[j])
        {
            flag = 1;
        }
        j++;
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}