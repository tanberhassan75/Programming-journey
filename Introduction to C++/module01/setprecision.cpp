#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double x;
    while(cin >> x)// jotokhon user input dibe tokhon input nibe
    {
        cout << fixed << setprecision(1) << x << endl;
    }
    return 0;
}