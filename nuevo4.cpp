#include <iostream>
#include <string>
using namespace std;

struct Empleado {
    string nombre;
    char sexo;
    float sueldo;
};

int main() {
    const int NUM_EMPLEADOS = 5;
    Empleado empleados[NUM_EMPLEADOS];
    Empleado menor_sueldo;

    // Ingreso de datos por teclado
    for (int i = 0; i < NUM_EMPLEADOS; i++) {
        cout << "Ingrese el nombre del empleado " << i+1 << ": ";
        getline(cin, empleados[i].nombre);

        cout << "Ingrese el sexo del empleado " << i+1 << " (M o F): ";
        cin >> empleados[i].sexo;

        cout << "Ingrese el sueldo del empleado " << i+1 << ": ";
        cin >> empleados[i].sueldo;
        cin.ignore();  // Ignorar el salto de línea después del sueldo

        // Actualizar el empleado de menor sueldo
        if (i == 0 || empleados[i].sueldo < menor_sueldo.sueldo) {
            menor_sueldo = empleados[i];
        }
    }

    // Mostrar los datos de los empleados
    for (int i = 0; i < NUM_EMPLEADOS; i++) {
        cout << "Empleado " << i+1 << endl;
        cout << "Nombre: " << empleados[i].nombre << endl;
        cout << "Sexo: " << empleados[i].sexo << endl;
        cout << "Sueldo: " << empleados[i].sueldo << endl << endl;
    }

    // Mostrar el empleado de menor sueldo
    cout << "Empleado con menor sueldo: " << menor_sueldo.nombre << endl;
    cout << "Sexo: " << menor_sueldo.sexo << endl;
    cout << "Sueldo: " << menor_sueldo.sueldo << endl;

    system("pause");
    return 0;
}
