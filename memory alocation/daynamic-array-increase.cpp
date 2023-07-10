#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *a = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
        cout << a[i];
    }
    cout << endl;
    int b[5];
    for (int i = 0; i < 3; i++)
    {
        b[i] = a[i];
    }
    b[3] = 30;
    b[4] = 40;

    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }
    // delete for a array
    delete[] a;

    return 0;
}