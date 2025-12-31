#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int english_marks;
};
bool cmp(Student l, Student r)
{
    if (l.english_marks == r.english_marks && l.math_marks == r.math_marks)
    {
       return l.id < r.id;
    }
    else
    {
        if (l.english_marks == r.english_marks)
        {
          return l.math_marks > r.math_marks;
        }
        else
        {
           return l.english_marks > r.english_marks;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].math_marks >> a[i].english_marks;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << " " << a[i].math_marks << " " << a[i].english_marks << endl;
    }
    return 0;
}