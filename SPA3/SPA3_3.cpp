#include <iostream>

using namespace std;

int main(){

    int broj = 10;
    int *p = &broj;
    cout << "Broj bez pokazivaca: ";
    cout << broj <<endl;

    cout << "Adresa broja: ";
    cout << &broj <<endl;


    cout << "Vrijednost pokazivaca: ";
    cout << p <<endl;

    cout << "Vrijednost na adresi: ";
    cout << *p <<endl;

    return 0;
}