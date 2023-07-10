#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    char name[100];
    float height;
    int age;

    Person(char *n, float h, int ag)
    {
        strcpy(name, n);
        height = h;
        age = ag;
    }
};
int main()
{
    char name[100] = "Fozlur Rahman";
    char nam[100] = "Zishan Khan";
    Person *fozlur = new Person(name, 6.5, 21);
    Person *zishan = new Person(name, 6.8, 22);
    if ((*fozlur).age > (*zishan).age)
    {
        cout << (*fozlur).age;
    }
    else
    {
        cout << (*zishan).age;
    }


    return 0;
}
