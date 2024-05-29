#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
using namespace std; 
#include <string>

class Estudiante {
private:
    string nombre;
    int annoNac;
    double exa1, exa2, exa3;
    int numAusencias;

public:
    Estudiante(std::string nombre, int annoNac, double exa1, double exa2, double exa3, int numAusencias);
    ~Estudiante();
    string getNombre() const;
    int getAnnoNac() const;
    double getExa1() const;
    double getExa2() const;
    double getExa3() const;
    int getNumAusencias() const;
    double notaFinal() const;
    bool eximido() const;
    string toString() const;
};

#endif // ESTUDIANTE_H
