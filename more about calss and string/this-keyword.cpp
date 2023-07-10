#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    int roll;
    string name;
    char group;
    int classes;

    Person(int roll, string name, char group, int classes)
    {
        this->roll = roll;
        this->name = name;
        this->group = group;
        this->classes = classes;
    }
};

int main()
{
    Person fozlur = Person(10, "fozlur rahman", 'A', 5);
    cout << fozlur.name << endl;

    return 0;
}