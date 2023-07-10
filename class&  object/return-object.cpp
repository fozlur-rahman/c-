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

Student fun()
{
    char name[100] = "Fozlur Rahman";
    Student fozlur(10, 'C', name);
    return fozlur;
}
int main()
{
    Student fozlur = fun();
    cout << fozlur.roll;
    return 0;
}