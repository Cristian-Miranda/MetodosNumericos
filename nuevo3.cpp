#include <iostream>
#include <string>
using namespace std;

struct Atleta {
    string deporte;
    string nombre;
    string pais;
    int n_medallas;
};

int main() {
    Atleta atleta1;

    cout << "Ingrese el deporte del atleta: ";
    getline(cin, atleta1.deporte);

    cout << "Ingrese el nombre del atleta: ";
    getline(cin, atleta1.nombre);

    cout << "Ingrese el pais del atleta: ";
    getline(cin, atleta1.pais);

    cout << "Ingrese el numero de medallas del atleta: ";
    cin >> atleta1.n_medallas;

    cout << "Deporte: " << atleta1.deporte << endl;
    cout << "Nombre: " << atleta1.nombre << endl;
    cout << "Pais: " << atleta1.pais << endl;
    cout << "Numero de medallas: " << atleta1.n_medallas << endl;

    system("pause");
    return 0;
}
