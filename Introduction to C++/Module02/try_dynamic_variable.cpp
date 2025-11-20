#include<bits/stdc++.h>
using namespace std;
int *p;
void bry()
{
    int* x = new int;
    int x = 100;
    p = x;
    cout << "try function -->" << *p << endl;
    return;
}
int main()
{
    bry();
    cout << "main function -->" << *p << endl;
    return 0;
}