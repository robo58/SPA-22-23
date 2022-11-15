#include <iostream>
#include <string>

using namespace std;

struct Adresa {
    string grad;
    string ulica;

    void print(){
        cout << "Grad: " << grad << endl;
        cout << "Grad: " << ulica << endl;
    }
};

struct Student {
    string ime;
    string prezime;
    int broj_indeksa;
    int godina;
    Adresa adresa;

    void print(){
        cout << "Ime: " << ime << endl;
        cout << "Prezime: " << prezime << endl;
        cout << "Broj indeksa: " << broj_indeksa << endl;
        cout << "Godina: " << godina << endl;
        cout << "Adresa: " << endl;
        adresa.print();
    }
};

int main(){
    Student studenti[3];

    int i;
    for(i=0;i<3;i++){
        cout << "Unesite vrijednosti za studenta broj " << i+1 << endl;
        cout << "Ime: ";
        cin >> studenti[i].ime;
        cout << "Prezime: ";
        cin >> studenti[i].prezime;
        cout << "Broj indeksa: ";
        cin >> studenti[i].broj_indeksa;
        cout << "Godina: ";
        cin >> studenti[i].godina;
        cout << "Grad: ";
        cin >> studenti[i].adresa.grad;
        cout << "Ulica: ";
        cin >> studenti[i].adresa.ulica;
    }

    for(i=0;i<3;i++){
        if(studenti[i].godina==1 && studenti[i].broj_indeksa>8000){
            cout << "-----" << endl;
            studenti[i].print();
        }
    }


    return 0;
}