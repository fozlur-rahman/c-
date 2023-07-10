#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    cout << a << endl;
    // a.replace(3, 3, "ABC");
    // cout <<a<< endl;
    // a.replace(6, 0, "ABC");
    a.insert(6, "ABC");
    cout << a << endl;
    return 0;
}