#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    int roll;
    string name;
    char group;
    int classes;

    Person(int r, string n, char g, int c)
    {
        roll = r;
        name = n;
        group = g;
        classes = c;
    }
    void consol()
    {
        cout << "hello bokacda" << endl;
    }
    int avarege()
    {
        int total = roll + classes;
        return total;
    }
};

int main()
{
    Person fozlur = Person(10, "fozlur rahman", 'A', 5);
    cout << fozlur.name << endl;
    fozlur.consol();
    int avaregeTotal = fozlur.avarege();
    cout << avaregeTotal << endl;

    return 0;
}