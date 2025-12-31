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
        double r = (double)n/4;
        cout << ceil(r)<< endl;
    }
    return 0;
}