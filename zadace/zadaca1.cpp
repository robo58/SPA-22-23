#include <iostream>

using namespace std;

// Modificirati program iz Zadatka 4 tako da kao argumente prima 2 broja i ispisuje
// sumu brojeva u tome intervalu.
// Pripaziti koji element je veći kako ne bi upali u beskonačnu petlju. 

int sumaIntervala(int a, int b){
    int suma=0;

    if(a<b){
        for (int i = a; i <= b; i++)
        {
            suma+=i;
        }
        
    }else if(b>a){
        for (int i = b; i <= a; i++)
        {
            suma+=i;
        }
    }


    return suma;
}

int main(){

    int a,b;

    cout << "Unesite 2 broja: "<< endl;
    cin >> a >> b;

    cout << "Suma intervala je: " << sumaIntervala(a,b) << endl;

    return 0;
}