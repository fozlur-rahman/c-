#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    // a += b;
    a.push_back('A');
    a.pop_back();
    a.append(b);
    cout << a << endl;

    return 0;
}