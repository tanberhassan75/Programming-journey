#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        double f = 0;
        for (int i = 0; i < n; i++)
        {
            f += ceil((double)a[i] / 2);
        }
        cout << f << endl;
    }
    return 0;
}