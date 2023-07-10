#include <bits/stdc++.h>
using namespace std;

void revercePrint(stringstream &ss)
{
    string w;
    if (ss >> w)
    {
        revercePrint(ss);
        cout << w << endl;

        // ai vabe print korle begin to end print hobe.
        // cout << w << endl;
        // revercePrint(ss);
    }
}

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    // string w;
    // while (ss >> w)
    // {
    //     cout << w << endl;
    // }
    revercePrint(ss);
    return 0;
}