#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[101];
    char section;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        Student x[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> x[i].id >> x[i].name >> x[i].section >> x[i].marks;
        }
        Student Sera = x[0];
        for (int i = 1; i < 3; i++)
        {
            if (x[i].marks > Sera.marks)
            {
                Sera = x[i];
            }
            else if (x[i].marks == Sera.marks && x[i].id < Sera.id)
            {
                Sera = x[i];
            }
        }
        cout << Sera.id << " " << Sera.name << " " << Sera.section << " " << Sera.marks << endl;
    }
    return 0;
}