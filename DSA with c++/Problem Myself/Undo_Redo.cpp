#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    vector<string> v;
    vector<string> r;
    while (t--)
    {
        string st;
        cin >> st;
        if (st == "TYPE")
        {
            string x;
            cin >> x;
            v.push_back(x);
            r.clear();
        }
        else if (st == "UNDO")
        {
            if (!v.empty())
            {
                r.push_back(v.back());
                v.pop_back();
            }
        }
        else if (st == "REDO")
        {
            if (!r.empty())
            {
                v.push_back(r.back());
                r.pop_back();
            }
        }
    }
    for (auto c : v)
    {
        cout << c << endl;
    }
    cout << endl;
    return 0;
}