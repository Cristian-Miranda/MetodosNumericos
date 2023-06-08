#include <iostream>
#include <string>
using namespace std;

struct Empleado {
    string nombre;
    char sexo;
    float sueldo;
};

int main() {
    Empleado empleado1;

    cout << "Ingrese el nombre del empleado: ";
    getline(cin, empleado1.nombre);

    cout << "Ingrese el sexo del empleado (M o F): ";
    cin >> empleado1.sexo;

    cout << "Ingrese el sueldo del empleado: ";
    cin >> empleado1.sueldo;

    cout << "\n\nNombre: " << empleado1.nombre << endl;
    cout << "Sexo: " << empleado1.sexo << endl;
    cout << "Sueldo: " << empleado1.sueldo << endl;

    system("pause");
    return 0;
}
