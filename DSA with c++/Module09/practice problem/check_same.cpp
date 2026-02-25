#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    list<int>l;
    for(int i = 0; i<a; i++)
    {
        int x;
        cin >> x;
        l.push_back(x);
    }
    int b; 
    cin >> b;
    list<int>l2;
    for(int i=0; i<b; i++)
    {
        int y;
        cin >> y;
        l2.push_back(y);
    }
    if(a != b)
    {
        cout << "We are not same"<<endl;
    }
    bool flag = true;
    auto it = l.begin();
    auto jt = l2.begin();
    while(it != l.end())
    {
        if(*it != *jt)
        {
            flag = false;
            break;
        }
        it++;
        jt++;
    }
    if(flag == true)
    {
        cout << "We are same" << endl;
    }
    else
    {
        cout << "We are not same" << endl;
    }
    return 0;
}