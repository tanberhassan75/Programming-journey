#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l = {10,20,30,40,50,60};
    list<int>l2 = {100,200};
    // list<int>l;
    // l = l2;
    // l.assign(l2.begin(),l2.end());
    // l2.push_front(100);
    // l2.push_back(500);
    // l.erase(next(l.begin(),2),next(l.begin(),5));
    auto it = find(l.begin(),l.end(),60);
     
    if(it == l.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" <<endl;
    }
    for(int val : l)
    {
        cout << val << endl;
    }
    return 0;
}