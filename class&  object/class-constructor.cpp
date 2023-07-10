#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    char section;
    char name[100];

    Student(int r, char s, char *n)
    {
        roll = r;
        section = s;
        strcpy(name, n);
    }
};
int main()
{
    char name[100] = "Fozlur Rahman";
    Student fozlur(10, 'C', name);
    cout << fozlur.name;
    return 0;
}