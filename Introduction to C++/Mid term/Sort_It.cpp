#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int ar[n];
    for(int i=0; i<n; i++)
    {
        ar[i] = a[i];   
    }
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        cout << a[i] <<" ";
    }
    cout << endl;
    sort(ar,ar+n,greater<int>());
    for(int i=0; i<n; i++)
    {
        cout << ar[i] <<" ";
    }
    return 0;
}