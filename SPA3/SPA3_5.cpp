#include <iostream>

using namespace std;


void uvecaj(int broj) {
    broj+=10;
    cout << "Velicina unutar funkcije " << broj << endl;
}

void uvecajPokazivac(int *broj){
    *broj+=10;
    cout << "Velicina unutar funkcije " << *broj << endl;
}

int main(){

    int broj = 5;

    uvecaj(broj);
    cout << "Velicina unutar main " << broj << endl;
    uvecajPokazivac(&broj);
    cout << "Velicina unutar main " << broj << endl;

    return 0;
}