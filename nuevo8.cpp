#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Ingrese el tamano del arreglo: ";
    cin >> x;

    int *arreglo = new int[x];

    cout << "Ingrese " << x << " numeros:\n";
    for(int i=0; i<x; i++) {
        cin >> *(arreglo+i);
    }

    cout << "El arreglo es:\n";
    for(int i=0; i<x; i++) {
        cout << *(arreglo+i) << " ";
    }

    delete[] arreglo;

    return 0;
}
