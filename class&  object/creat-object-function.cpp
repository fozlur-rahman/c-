#include <bits/stdc++.h>
using namespace std;
class Vehical
{
public:
    char name[100];
    char type;
    int seats;

    Vehical(char *n, char t, int s)
    {
        strcpy(name, n);
        type = t;
        seats = s;
    }

    void getCar()
    {
        cout << name << endl;
        cout << type << endl;
        cout << seats << endl;
    }
};
int main()
{
    char carName[100] = "toyota f-corola";

    Vehical car(carName, 'A', 20);
    // cout << car.name;
    car.getCar();
    return 0;
}