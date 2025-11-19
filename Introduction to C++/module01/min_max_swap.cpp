#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    cout << "Min" << " " << min(a,b) << endl; // unlimited digit theke min digit berkorte pare
    cout << "Max" << " " << max(a,b) << endl;
    swap(a,b); // 2 ta value ke swap kore dilo
    cout << a << " " << b << endl;
    return 0;
}
// ({a,b,c}) 2nd braked use korte hobe 2 digit theke beshi nile