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
    bool flag = true;
    auto it = l.begin();
    auto jt = l.end();
    jt--;
    for(int i=0; i<a/2; i++)
    {
        if(*it != *jt)
        {
            flag = false;
            break;
        }
        it++;
        jt--;
    }
    if(flag == true)
    {
        cout << "We are Palindrome" << endl;
    }
    else
    {
        cout << "We are not Palindrome" << endl;
    }
    return 0;
}