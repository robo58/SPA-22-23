#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already
        // in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

int main()
{
    int niz[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Unesite broj" << endl;
        cin >> niz[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << niz[i] << ", ";
    }

    cout << endl;

    bubbleSort(niz, 10);

    for (int i = 0; i < 10; i++)
    {
        cout << niz[i] << ", ";
    }

    return 0;
}