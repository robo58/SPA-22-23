#include <iostream>

using namespace std;

// Napisati program u kojem korisnik unosi 10 brojeva.
// Potrebno je ispisati umnožak svih brojeva, te sumu parnih i sumu neparnih
// brojeva.
int main(){
    int umnozak=1;
    int suma_parni=0;
    int suma_neparni=0;
    int i;
    int broj;

    for(i=0; i<10; i++){
        cout << "Molimo unesite " << i+1 << ". broj: ";
        cin >> broj;
        umnozak *= broj;
        // ako je broj paran
        if(broj % 2 == 0){
            suma_parni += broj;
            // ako je broj neparan
        } else if(broj % 2 == 1){
            suma_neparni += broj;
        }
    }

    cout << "Umnozak je: " << umnozak << endl << "Suma parnih je: " << suma_parni << endl << "Suma neparnih je: " << suma_neparni << endl;
    

    return 0;
}