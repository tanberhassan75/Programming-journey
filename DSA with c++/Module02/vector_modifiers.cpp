#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,6,4,4,3,5,5};
    vector<int>v1 = {100,200,300};
    replace(v.begin(),v.end(),3,50);
    // vector <int> :: iterator it = find(v.begin(),v.end(),6);
    // cout << *it<<endl;
    // if(it == v.end())
    // {
    //     cout << "Not Find"<<endl;
    // }
    // else
    // {
    //     cout << "Find"<<endl;
    // }
    for(auto it : v)
    {
        cout << &it << " ";
    }
    return 0;
}