#include <iostream>

using namespace std;


// Napisati program koji će traži unos brojeva
// sve dok je njihova suma manja od 5000.
// Program treba ispisati sumu i ukupan broj unesenih brojeva.
// (while)
int main(){
    int suma = 0;
    int brojac = 0;
    int broj;

    while(suma<5000){
        cout << "Unesite neki broj: ";
        cin >> broj;
        suma+=broj;
        brojac++;
    }

    cout << "Suma je: " << suma << endl << "Ukupan broj brojeva je: " << brojac << endl;


    return 0;
}