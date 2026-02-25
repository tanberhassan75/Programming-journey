#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l = {10,30,40,20,60,50,80,10,30,50,70};
    l.sort();
    // l.sort(greater<int>());
    l.unique(); // remove duplicate value
    for(int val : l)
    {
        cout << val <<" ";
    }
    return 0;
}