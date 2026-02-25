#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    if (n == 0) 
    {
        cout << 1 << endl;
        return 0;
    }
    long long y = (500 + n -1)/n;
    cout << y << endl;
    return 0;
}
