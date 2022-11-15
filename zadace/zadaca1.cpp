#include <iostream>
#include <string>

using namespace std;

struct Artikal
{
    string naziv;
    double cijena_kom;
    double kolicina;

    void print()
    {
        cout << "Naziv artikla: " << naziv << endl;
        cout << "Cijena(kom): " << cijena_kom << endl;
        cout << "Kolicina: " << kolicina << endl;
    }
};

struct Racun
{
    string ime_kupca;
    Artikal artikal;

    void print()
    {
        cout << "Ime kupca: " << ime_kupca << endl;
        artikal.print();
        cout << "Ukupna cijena racuna: " << ukupna_cijena() << endl;
    }

    double ukupna_cijena()
    {
        return artikal.cijena_kom * artikal.kolicina;
    }
};

double ukupnaZarada(Racun *racuni)
{
    double suma = 0.0;
    Racun *start = racuni;
    while (start != NULL)
    {
        suma += racuni->ukupna_cijena();
        start++;
    }
    return suma;
}

void dnevniIzvjestaj(Racun *racuni, int brojRacuna)
{
    cout << "Izdano " << brojRacuna << " racuna." << endl;
    if (brojRacuna > 0)
    {
        Racun najskuplji = *racuni;
        Racun *start = racuni;
        double suma = 0.0;
        if (brojRacuna > 1)
        {
            for (int i = 1; i < brojRacuna; i++)
            {
                start += sizeof(Racun) * i;
                suma += start->ukupna_cijena();
                if (start->ukupna_cijena() > najskuplji.ukupna_cijena())
                {
                    najskuplji = *start;
                }
            }
        }
        cout << "Najskuplji racun: " << endl;
        najskuplji.print();
        cout << "Ukupna zarada: " << suma << endl;
        cout << "Na PDV(17%) otpada: " << suma - (suma*0.17) << endl;
    }
}

void unosArtikla(Artikal *artikal)
{
    cout << "Naziv artikla: " << endl;
    cin >> artikal->naziv;
    cout << "Cijena artikla po komadu: " << endl;
    cin >> artikal->cijena_kom;
    cout << "Kolicina artikla: " << endl;
    cin >> artikal->kolicina;
}

void unosRacuna(Racun *racun)
{
    int option = 0;
    cout << "-- Novi racun --" << endl;
    cout << "Ime kupca: " << endl;
    cin >> racun->ime_kupca;
    unosArtikla(&racun->artikal);
}

int main()
{
    int option = 0;
    int brojIzdanihRacuna = 0;
    Racun niz[100];
    Racun *racuni = niz;
    Racun *start = racuni;
    do
    {
        cout << "Molimo odaberite opciju: 1 - unesite novi racun, 2 - generirajte izvjestaj, 3 - izlaz iz programa." << endl;
        cin >> option;
        if (option == 1)
        {
            start += sizeof(Racun) * brojIzdanihRacuna;
            unosRacuna(start);
            brojIzdanihRacuna++;
        }
        else if (option == 2)
        {
            dnevniIzvjestaj(racuni, brojIzdanihRacuna);
        }
    } while (option != 3);

    return 0;
}