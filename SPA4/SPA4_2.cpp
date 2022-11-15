#include <iostream>
#include <string>

using namespace std;

struct Automobil
{
    string proizvodjac;
    string model;
    int godina;
    int snaga;

    void print(){
        cout << "Proizvodjac: " << proizvodjac << endl;
        cout << "Model: " << model << endl;
        cout << "Godina: " << godina << endl;
        cout << "Snaga: " << snaga << endl;
    }
};

int main(){
    Automobil automobili[3];
    int i;
    for(i=0;i<3;i++){
        cout << "Unesite vrijednosti za automobil broj " << i+1 << endl;
        cin >> automobili[i].proizvodjac >> automobili[i].model >> automobili[i].godina >> automobili[i].snaga;
    }

    for(i=0;i<3;i++){
        if(automobili[i].snaga>100){
            automobili[i].print();
        }
    }


    return 0;
}