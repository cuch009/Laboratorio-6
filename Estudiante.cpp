#include <iostream>
#include <string>

using namespace std;

class Estudiante {
private:
    string nombre;
    string apellido;
    int edad;
    string curso;

public:
    
    Estudiante(string n, string a, int e, string c) : nombre(n), apellido(a), edad(e), curso(c) {}

    void setNombre(string n) {
        nombre = n;
    }

    string getNombre() const {
        return nombre;
    }

    void setApellido(string a) {
        apellido = a;
    }

    string getApellido() const {
        return apellido;
    }

    void setEdad(int e) {
        edad = e;
    }

    int getEdad() const {
        return edad;
    }

    void setCurso(string c) {
        curso = c;
    }

    string getCurso() const {
        return curso;
    }

    void mostrarInformacion() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Edad: " << edad << " anios" << endl;
        cout << "Curso: " << curso << endl;
    }
};

int main() {
    
    Estudiante estudiante1("Juan", "Perez", 20, "Ingenieria en Sistemas");

    estudiante1.mostrarInformacion();

    estudiante1.setEdad(20);
    estudiante1.mostrarInformacion();

    return 0;
}

