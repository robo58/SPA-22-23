#include <iostream>

using namespace std;


int zbrojDvoznamenkastihBrojeva(){
    int suma=0;
    int i;
    for(i=10; i<100; i++){
        suma+=i;
    }
    return suma;
}

int main(){
    int suma;
    suma = zbrojDvoznamenkastihBrojeva();

    cout << "Zbroj dvoznamenkastih brojeva je: " << suma;

     return 0;
}