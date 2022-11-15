#include <iostream>

using namespace std;

int sumaIntervala(int a, int b)
{
    int suma = 0;
    if (a > b)
    {
        for (int i = b; i < a; i++)
        {
            if (i % 2 == 0)
            {
                suma += i;
            }
        }
    }
    else if (a < b)
    {
        for (int i = a; i < b; i++)
        {
            if (i % 2 == 0)
            {
                suma += i;
            }
        }
    }
    return suma;
}

int main()
{
    int a,b;
    cout << "Unesite granice intervala (odvojiti razmakom)" << endl;
    cin >> a >> b;

    cout << "Suma parnih brojeva u intervalu je: " << sumaIntervala(a,b) << endl;

    return 0;
}