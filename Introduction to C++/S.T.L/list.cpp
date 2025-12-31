#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>i;
    i.push_back(1);
    i.push_back(2);
    i.push_front(3);
    i.push_front(4);
    for(int i: i)
    {
        cout << i <<" ";
    }
    return 0;
}