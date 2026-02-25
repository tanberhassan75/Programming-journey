#include<bits/stdc++.h>
using namespace std;
class Mystack
{
    public:
    vector<int>v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};
int main()
{
    Mystack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    if(st.empty())
        cout << "empty"<<endl;
    else
        cout << "Not Empty"<<endl;
    return 0;
}