#include <iostream>

using namespace std;

// Napisati program u kojem korisnik unosi stranice pravokutnika.
// Ako su unesene stranice veće od nula, onda izračunati i ispisati na
// zaslon opseg i površinu.
// U suprotnom ispisati na ekran: “Jedna stranica pravokutnika je
// manja od nula.” ili “Obe stranice pravokutnika su manje od nula.”.
int main(){
    int a;
    int b;

    cout << "Molimo unesite stranicu a." << endl;
    cin >> a;

    cout << "Molimo unesite stranicu b." << endl;
    cin >> b;

    if(a>0 && b>0){
        int opseg;
        int povrsina;
        opseg = 2*(a+b);
        povrsina = a*b;
        cout << "Opseg pravokutnika je: " << opseg << endl << ", Povrsina je: " << povrsina << endl;
    } else {
        if(a<=0 && b<= 0){
            cout << "Obje stranice pravokutnika su manje od 0." << endl;
        }else {
            cout << "Jedna stranica je manja od 0." << endl;
        }
    }

    return 0;
}