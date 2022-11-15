#include <iostream>

using namespace std;

int main()
{
    int M, N;

    cout << "Unesite dimenzije matrice odvojene zarezom" << endl;
    cin >> M >> N;

    int matrica[M][N];


    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << "Unesite broj" << endl;
            cin >> matrica[i][j];
        }
    }

    int umnozak = 1;

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(i==j){
                umnozak=umnozak*matrica[i][j];
            }
        }
    }

    cout << "Umnozak elemenata na glavnoj dijagonali je: " << umnozak << endl;
    return 0;
}