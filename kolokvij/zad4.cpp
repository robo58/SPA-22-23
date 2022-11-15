#include <iostream>

using namespace std;

void funkcija(int niz[], int *p)
{
    *p = niz[2];
}

int main()
{
    int broj;

    cout << "Unesite cijeli broj" << endl;

    cin >> broj;

    cout << "Adresa unesenog broja je: " << &broj << endl;
    cout << "Vrijednost unesenog broja je: " << broj << endl;

    int niz[5] = {1, 5, 77, 2, 3};

    funkcija(niz, &broj);

    cout << "Adresa unesenog broja je: " << &broj << endl;
    cout << "Vrijednost unesenog broja je: " << broj << endl;

    return 0;
}