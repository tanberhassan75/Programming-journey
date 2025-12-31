#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vac(n);
    for(int i=0; i<n; i++)
    {
        cin >> vac[i];
    }
    // vector<int>::reverse_iterator i; auto keyword dichi
    // for(auto i=vac.rbegin(); i!=vac.rend(); i++)
    // {
    //     cout << *(i) <<" ";
    // }
    for(int i=0; i<n; i++)
    {
        cout << vac[i] <<" ";
    }
    return 0;
}