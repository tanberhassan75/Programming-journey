#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n, A, B;
        cin >> n >> A >> B;
        vector<int> T(n);
        for (int i = 0; i < n; i++)
            cin >> T[i];
        bool pore_achi = false;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (T[i] < A)
            {
                if (pore_achi == false)
                {
                    pore_achi = true;
                    cnt++;
                }
            }
            else if (T[i] > B)
            {
                if (pore_achi == true)
                {
                    pore_achi = false;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}