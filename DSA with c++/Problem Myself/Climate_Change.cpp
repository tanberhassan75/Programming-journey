#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> v(n);
    long long t = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        t += v[i];
    }
    if (t % 2 != 0) {
        cout << 0 << endl;
        return 0;
    }
    long long x = t / 2;
    long long pre = 0;
    int count = 0;
    for(int i = 0; i < n - 1; i++) {
        pre += v[i];
        if(pre == x) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}