#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string a;
    // ss >> a;
    // cout << a << endl;
    while (ss >> a)
    {
        cout << a << endl;
    }

    return 0;
}