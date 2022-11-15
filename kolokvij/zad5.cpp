#include <iostream>
#include <string>

using namespace std;

struct Adresa
{
    string grad;
    string ulica;
    int broj;
};

struct Osoba
{
    string ime;
    string prezime;
    int godina;
    Adresa adresa;

    void rodjendan()
    {
        godina = godina + 1;
        cout << "Sretan " << godina << ". rodjendan " << ime << " " << prezime << "." << endl;
    }
};

int main()
{
    Osoba osobe[3] = {
        {"Ivan", "Ivic", 23, {"Test", "Test", 11}},
        {"Petar", "Peric", 39, {"Test", "Test", 11}},
        {"Jure", "Juric", 44, {"Test", "Test", 11}}};

    osobe[0].rodjendan();

    for (int i = 0; i < 3; i++)
    {
        if (osobe[i].godina > 30)
        {
            cout << "Ime: " << osobe[i].ime << endl;
            cout << "Prezime: " << osobe[i].prezime << endl;
        }
    }

    return 0;
}