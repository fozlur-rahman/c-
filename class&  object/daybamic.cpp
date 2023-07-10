#include <bits/stdc++.h>
using namespace std;

class Vehical
{
public:
    int seatNumber;
    char type;
    char name[100];

    Vehical(int num, char t, char *n)
    {
        seatNumber = num;
        type = t;
        strcpy(name, n);
    }
};

int main()
{
    char carName[100] = "toyota x-corola";

    Vehical car(10, 'A', carName);
    cout << car.name << endl;
    Vehical *car2 = new Vehical(10, 'A', carName);
    cout << car2->name << endl
         << car2->seatNumber;

    return 0;
}