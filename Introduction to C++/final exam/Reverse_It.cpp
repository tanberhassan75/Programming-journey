#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    char group;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cin >> a[i].name >> a[i].roll >> a[i].group >> a[i].marks;
    }
    int j = n;
    for (int i = 0; i < n / 2; i++)
    {
        char s = a[i].group;
        a[i].group = a[j - 1].group;
        a[j - 1].group = s;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].group << " " << a[i].marks << endl;
    }
    return 0;
}