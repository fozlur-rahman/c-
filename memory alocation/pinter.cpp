#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    cout << a;
    int *b = &a;
    cout << endl;
    int **c = &b;
    cout << b;
    cout << endl;
    cout << **c;
    return 0;
}