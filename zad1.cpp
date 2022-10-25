#include <iostream>

using namespace std;


int main(){
    int a;
    int b;

    cout << "Unesite stranicu a" << endl;
    cin >> a;

    cout << "Unesite stranicu b" << endl;
    cin >> b;

    if(a>0 && b>0){
        int povrsina=a*b;
        int opseg=2*a+2*b;
        cout << "Povrsina je: " << povrsina << endl;
        cout << "Opseg je: " << opseg << endl;
    } else {
        if(a<=0 && b<=0){
            cout << "Obje stranice pravokutnika su manje od nula." << endl;
        }else{
            cout << "Jedna stranica pravokutnika je manja od nula." << endl;
        }
    }

    return 0;
}