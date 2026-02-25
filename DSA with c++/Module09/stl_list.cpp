#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> a1 = {1, 2, 3, 4, 5};
    // int ar[] = {1, 2, 3};
    vector<int> v = {10, 20, 30};
    list<int> a(v.begin(), v.end());
    // a.clear();
    a.resize(2);
    if (a.empty())
    {
        cout << "empty";
    }
    else
    {
        // using range base for loop
        for (int val : a)
        {
            cout << val << endl;
        }
    }
    // using itarator
    // for(auto it = a.begin(); it!=a.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    return 0;
}