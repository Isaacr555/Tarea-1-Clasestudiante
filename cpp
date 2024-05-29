#include "estudiante.h"
using namespace std; 

Estudiante::Estudiante(std::string nombre, int annoNac, double exa1, double exa2, double exa3, int numAusencias) {
    this->nombre = nombre;
    this->annoNac = annoNac;
    this->exa1 = exa1;
    this->exa2 = exa2;
    this->exa3 = exa3;
    this->numAusencias = numAusencias;
}

Estudiante::~Estudiante() {
    // Destructor
}

string Estudiante::getNombre() const {
    return nombre;
}

int Estudiante::getAnnoNac() const {
    return annoNac;
}

double Estudiante::getExa1() const {
    return exa1;
}

double Estudiante::getExa2() const {
    return exa2;
}

double Estudiante::getExa3() const {
    return exa3;
}

int Estudiante::getNumAusencias() const {
    return numAusencias;
}

double Estudiante::notaFinal() const {
    return 0.3 * exa1 + 0.3 * exa2 + 0.4 * exa3;
}

bool Estudiante::eximido() const {
    if (exa1 >= 80 && exa2 >= 80 && numAusencias == 0) {
        return true;
    } else {
        return false;
    }
}

string Estudiante::toString() const {
    return "Nombre: " + nombre + ", Año de nacimiento: " + std::to_string(annoNac) + ", Nota Final: " + std::to_string(notaFinal());
}
