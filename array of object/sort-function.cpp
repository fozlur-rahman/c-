#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cpm(Student a, Student b)
{
    if (a.marks < b.marks)
        return true;
    else
        return false;
}
int main()
{
    Student a[3];
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < 3; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
        cin.ignore();
    }
    sort(a, a + n, cpm);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}