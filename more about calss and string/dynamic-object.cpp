#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    int roll;
    string name;

    Person(int roll, string name)
    {
        this->roll = roll;
        this->name = name;
    }
};

int main()
{
    Person *fozlur = new Person(10, "fozlur ");
    Person *rahmna = new Person(45, " rahman");
    // cout << fozlur->roll << endl
    //      << fozlur->name;
    *rahmna = *fozlur;
    delete fozlur;    
    cout << rahmna->name;


            return 0;
}