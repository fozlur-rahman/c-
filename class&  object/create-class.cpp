#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Student
    {
    public:
        char name[100];
        int roll;
        char section;
    };
    Student fozlur;
    fozlur.roll = 10;
    fozlur.section = 'C';
    char name[100] = "Fozlur Rahman";
    strcpy(fozlur.name, name);
    cout << fozlur.name << endl;

    Student ami;
    ami.roll = 20;
    ami.section = 'C';
    char name2[100] = "ami tumi";
    strcpy(ami.name, name2);

    return 0;
}