#include <iostream>

using namespace std;

int main(){

    int matrica[4][4];

    cout << "Unesite elemente matrice" << endl;


    int i,j;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cin >> matrica[i][j];
        }
    }

    cout << "Ispis matrice 4x4: " << endl;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout << matrica[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    int suma=0;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(i==j){
                suma+=matrica[i][j];
                cout << matrica[i][j];
                if(i<3 && j<3){
                    cout << " + ";
                }
            }
        }
    }
    cout << " = " << suma << endl;

    return 0;
}