#include <iostream>

using namespace std;

int main(){

    int brojevi[3]={1,2,3};

    cout << "Adresa prvog elementa: ";
    cout << &brojevi[0] <<endl;

    cout << "Vrijednost brojevi: ";
    cout << brojevi <<endl;

    int *p = brojevi;

    for (int i = 0; i < 3; i++)
    {
        cout << p+i << endl;
        cout << *(p+i) << endl;
    }
    

    return 0;
}