#include <iostream>
using namespace std;

int main() {
    int arreglo[20] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int suma = 0;
    int multiplicacion = 1;
    float promedio;

    // Calcular la suma de todos los elementos
    for (int i = 0; i < 20; i++) {
        suma += arreglo[i];
    }

    // Calcular el promedio
    promedio = (float)suma / 20;

    // Calcular la multiplicación de todos los elementos
    for (int i = 0; i < 20; i++) {
        multiplicacion *= arreglo[i];
    }

    cout << "El promedio de los elementos es: " << promedio << endl;
    cout << "La multiplicación de los elementos es: " << multiplicacion << endl;

    return 0;
}
