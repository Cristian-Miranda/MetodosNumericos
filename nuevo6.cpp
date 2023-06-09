#include <iostream>

using namespace std;

struct Fraccion {
    int numerador;
    int denominador;
};

// Funci�n para encontrar el m�ximo com�n divisor
int MCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return MCD(b, a % b);
    }
}

// Funci�n para simplificar una fracci�n
void SimplificarFraccion(Fraccion &f) {
    int mcd = MCD(f.numerador, f.denominador);
    f.numerador = f.numerador / mcd;
    f.denominador = f.denominador / mcd;
}

// Funci�n para sumar dos fracciones
Fraccion SumaFracciones(Fraccion f1, Fraccion f2) {
    Fraccion resultado;
    resultado.numerador = (f2.denominador * f1.numerador) + (f1.denominador * f2.numerador);
    resultado.denominador = f1.denominador * f2.denominador;
    SimplificarFraccion(resultado);
    return resultado;
}

// Funci�n para restar dos fracciones
Fraccion RestaFracciones(Fraccion f1, Fraccion f2) {
    Fraccion resultado;
    resultado.numerador = (f2.denominador * f1.numerador) - (f1.denominador * f2.numerador);
    resultado.denominador = f1.denominador * f2.denominador;
    SimplificarFraccion(resultado);
    return resultado;
}

// Funci�n para dividir dos fracciones
Fraccion DivisionFracciones(Fraccion f1, Fraccion f2) {
    Fraccion resultado;
    resultado.numerador = f1.numerador * f2.denominador;
    resultado.denominador = f1.denominador * f2.numerador;
    SimplificarFraccion(resultado);
    return resultado;
}

// Funci�n para imprimir una fracci�n
void ImprimirFraccion(Fraccion f) {
    cout << f.numerador << "/" << f.denominador << endl;
}

int main() {
    Fraccion f1 = {1, 2};
    Fraccion f2 = {3, 4};

    Fraccion suma = SumaFracciones(f1, f2);
    Fraccion resta = RestaFracciones(f1, f2);
    Fraccion division = DivisionFracciones(f1, f2);

    cout << "La suma de las fracciones es ";
    ImprimirFraccion(suma);

    cout << "La resta de las fracciones es ";
    ImprimirFraccion(resta);

    cout << "La division de las fracciones es ";
    ImprimirFraccion(division);

    return 0;
}
