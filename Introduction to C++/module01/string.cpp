#include<iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    cin.ignore();
    char s[100];
    cin.getline(s,100);// for printing with space
    cout << a << endl << s;
    return 0;
}