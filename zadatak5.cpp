#include <iostream>

using namespace std;


// Napisati program koji za uneseni broj računa je li savršen.
// Za broj kažemo da je savršen ako je jednak sumi svojih djelitelja (osim samog
// sebe) (6 = 1 + 2 + 3)
// Koristiti funkciju koja prima broj i samo ispisuje je li dani broj savršen ili ne. (void)

void jeLiSavrsen(int broj){
    int suma=0;
    int i;
    for (i = 1; i < broj; i++)
    {
        if(broj % i == 0){
            suma+=i;
        }
    }
    if (suma==broj){
        cout << "Taj broj je savrsen." << endl;
    }else {
        cout << "Taj broj nije savrsen." << endl;  
    }
}

int main(){
    int broj;
    cout << "Unesite broj: " << endl;
    cin >> broj;
    jeLiSavrsen(broj);

    return 0;
}