#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<string> l;
    string s;
    while (true)
    {
        cin >> s;
        if (s == "end")
        {
            break;
        }
        else
        {
            l.push_back(s);
        }
    }
    int t;
    cin >> t;
    auto adrs = l.begin();
    while (t--)
    {
        string loa;
        cin >> loa;
        if (loa == "visit")
        {
            string cpny;
            cin >> cpny;
            auto it = find(l.begin(), l.end(), cpny);
            if (it != l.end())
            {
                adrs = it;
                cout << *adrs << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (loa == "next")
        {
            auto temp = adrs;
            temp++;

            if (temp != l.end())
            {
                adrs = temp;
                cout << *adrs << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (loa == "prev")
        {
            if (adrs != l.begin())
            {
                adrs--;
                cout << *adrs << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}