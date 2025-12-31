#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s,x;
        cin >> s >> x;
        int y = x.length();
        while(true)
        {
            int ind = s.find(x);
            if(ind != -1)
            {
                s.replace(ind,y,"#");
            }
            else
            {
                break;
            }

        }
        cout << s << endl;
    }
    
    return 0;
}