#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    deque<int> d(n);
    for(int i=0; i<n; i++)
    {
        cin >>d[i];
    }
    for(int i=0; i<n; i++)
    {
        cout << d[i] << " ";
    }
    return 0;
}