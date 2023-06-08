#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Ingrese el tamano del arreglo: ";
    cin >> x;

    char *arreglo = new char[x];

    cout << "Ingrese " << x << " letras:\n";
    for(int i=0; i<x; i++) {
        cin >> *(arreglo+i);
    }

    cout << "El arreglo en forma inversa es:\n";
    for(int i=x-1; i>=0; i--) {
        cout << *(arreglo+i);
    }

    delete[] arreglo;

    return 0;
}
