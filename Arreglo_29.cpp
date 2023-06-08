#include <iostream>
using namespace std;

int main() {
    int vector[100];

    // Llenar el arreglo en orden inverso
    for (int i = 0; i < 100; i++) {
        vector[i] = 100 - i;
    }

    // Mostrar el arreglo en pantalla
    for (int i = 0; i < 100; i++) {
        cout << "Vector[" << i << "] = " << vector[i] << endl;
    }

    return 0;
}
