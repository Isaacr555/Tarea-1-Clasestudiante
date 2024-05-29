

using namespace std;

class Estudiante {
private:
    string nombre;
    int annoNac;
    double exa1, exa2, exa3;
    int numAusencias;

public:
    // Constructor
    Estudiante(string nombre, int annoNac, double exa1, double exa2, double exa3, int numAusencias) {
        this->nombre = nombre;
        this->annoNac = annoNac;
        this->exa1 = exa1;
        this->exa2 = exa2;
        this->exa3 = exa3;
        this->numAusencias = numAusencias;
    }

    // Destructor (no necesario en este caso)

    // Métodos Getters
    string getNombre() const { return nombre; }
    int getAnnoNac() const { return annoNac; }
    double getExa1() const { return exa1; }
    double getExa2() const { return exa2; }
    double getExa3() const { return exa3; }
    int getNumAusencias() const { return numAusencias; }

    // Métodos Setters (no es necesario implementar en este caso)

    // Método para calcular la nota final
    double notaFinal() const {
        return 0.3 * exa1 + 0.3 * exa2 + 0.4 * exa3;
    }

    // Método para verificar si el estudiante se exime
    bool eximido() const {
        if (exa1 >= 80 && exa2 >= 80 && numAusencias == 0) {
            exa3 = 100; // Asigna 100 en el tercer examen si se exime
            return true;
        } else {
            return false;
        }
    }

    // Método toString para mostrar los atributos del estudiante
    string toString() const {
        return "Nombre: " + nombre + ", Año de nacimiento: " + to_string(annoNac) + ", Nota Final: " + to_string(notaFinal());
    }
};
