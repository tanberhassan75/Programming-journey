#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[10];
    for(int i=0; i<10; i++)
    { 
       cin >> ar[i];
    }
    vector<int>v1(ar,ar+10);
    // for(int i=0; i<v1.size(); i++)
    // {
    //     cout << v1[i] << " " ;
    // }
    v1.erase(v1.begin()+3,v1.end());
    for(int x: v1)
    {
        cout << x <<" ";
    }
    return 0;
}