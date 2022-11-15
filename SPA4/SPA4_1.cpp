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
    
    Automobil* test = new Automobil({
        "BMW","530d", 2007, 231
    });
    test->print();

    delete test;
    return 0;
}