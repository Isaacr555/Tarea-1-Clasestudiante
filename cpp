#include <iostream>
#include "estudiante.h"
using namespace std;

int main() {
    string nombre;
    int annoNac, numAusencias;
    double exa1, exa2, exa3;

    std::cout << "Ingrese los datos de los tres estudiantes:\n";
    for (int i = 0; i < 3; ++i) {
        cout << "Estudiante " << i + 1 << ":\n";
        cout << "Nombre: ";
        cin >> nombre;
        cout << "Año de nacimiento: ";
        cin >> annoNac;
        cout << "Nota examen 1: ";
        cin >> exa1;
        cout << "Nota examen 2: ";
        cin >> exa2;
        cout << "Nota examen 3: ";
        cin >> exa3;
        cout << "Número de ausencias: ";
        cin >> numAusencias;

        Estudiante estudiante(nombre, annoNac, exa1, exa2, exa3, numAusencias);

        if (estudiante.eximido()) {
            std::cout << nombre << " se exime.\n";
        }
        cout << estudiante.toString() << std::endl;
    }

    return 0;
}
