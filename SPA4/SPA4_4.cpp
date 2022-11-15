#include <iostream>
#include <string>

using namespace std;

struct Adresa {
    string grad;
    string ulica;

    void print(){
        cout << "Grad: " << grad << endl;
        cout << "Ulica: " << ulica << endl;
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
        adresa.print();
    }
};

int main(){
    Student student={
        "Robo","Test", 8001, 4, {"Mostar", "Matice hrvatske b.b"}
    };

    cout << "--------" << endl;

    student.print();


    return 0;
}