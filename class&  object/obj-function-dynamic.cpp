#include <bits/stdc++.h>
using namespace std;
class Vehical
{
public:
    char name[100];
    int seats;
    char type;

    Vehical(char *n, int s, char t)
    {
        strcpy(name, n);
        seats = s;
        type = t;
    }

    void getCar()
    {
        cout << name << endl;
        cout << seats << endl;
        cout << type << endl;
    }
};
int main()
{

    Vehical car("tota", 30, 'a');
    cout << car.name << endl;

    // use function
    car.getCar();
    //   create dynamic

    Vehical *car2 = new Vehical("tota", 30, 'a');
    cout << endl;
    cout << car2->name << endl
         << car2->seats << endl
         << car2->type << endl;
    return 0;
}