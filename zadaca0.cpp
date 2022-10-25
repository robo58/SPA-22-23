#include <iostream>

using namespace std;

// Napisati program u kojem unosite koliko ste bodova ostvarili na kolokvijima i na
// prezentaciji. Program zatim ispisuje jeste li položili predmet ili ne.
// Tablica bodovanja se nalazi na početku prezentacije.
// Napomena! Za polaganje predmeta potrebno je imati najmanje 50% bodova iz svih
// aktivnosti.
// Kolokvij 1 - max 30 bodova, 15 za polozit
// Kolokvij 2 - max 50 bodova, 25 za polozit
// Prezentacija - max 20 bodova, 10 za polozit
// 100 bodova max, 50-65=2, 65-80=3, 80-90=4, 90+=5
int main()
{
    int kolokvij1;
    int kolokvij2;
    int prezentacija;
    int suma=0;

    cout << "Unesite bodove na kolokviju 1" << endl;
    cin >> kolokvij1;
    if(kolokvij1<15 && kolokvij1 <= 30){
        cout << "Niste položili, imate manje od pola bodova iz prvog kolokvija." << endl;
        return 0;
    }
    cout << "Unesite bodove na kolokviju 2" << endl;
    cin >> kolokvij2;
    if(kolokvij2<25 && kolokvij2 <= 50){
        cout << "Niste položili, imate manje od pola bodova iz drugog kolokvija." << endl;
        return 0;
    }
    cout << "Unesite bodove na prezentaciji" << endl;
    cin >> prezentacija;
    if(prezentacija<10 && prezentacija <= 20){
        cout << "Niste položili, imate manje od pola bodova iz prezentacije." << endl;
        return 0;
    }

    suma=kolokvij1+kolokvij2+prezentacija;

    if(suma<65){
        cout << "Položili ste ocjena je 2." << endl;
        return 0;
    } else if(suma<80){
        cout << "Položili ste ocjena je 3." << endl;
        return 0;
    } else if(suma<90){
        cout << "Položili ste ocjena je 4." << endl;
        return 0;     
    } else if(suma>90){
        cout << "Položili ste ocjena je 5." << endl;
        return 0;     
    }
}
