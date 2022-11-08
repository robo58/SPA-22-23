#include <iostream>

using namespace std;

// Napisati program koji će sadržavati niz od 10 brojeva.
// Potrebno je:
//  • Ispisati cijeli niz
//  • Sortirati niz te ga ponovno ispisati.

int main(){
    int brojevi[10] = {1,5,6,2,3,4,11,8,7,9};
    int i, j;

    cout << "Pocetni niz: " << endl;
    for(i=0;i<10;i++){
        cout << brojevi[i] << ", ";
    }
    cout << endl;

    for (i = 0; i < 10 - 1; i++){
        // Last i elements are already
        // in place
        for (j = 0; j < 10 - i - 1; j++){
            if (brojevi[j] > brojevi[j + 1]){
                int temp = brojevi[j];
                brojevi[j]=brojevi[j+1];
                brojevi[j+1]=temp;
            }
        }
    }

    cout << "Sortirani niz: " << endl;
    for(i=0;i<10;i++){
        cout <<  brojevi[i] << ", ";
    }
    cout << endl;

    return 0;
}