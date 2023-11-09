#include <iostream>
#include <string>

using namespace std;

class Estudiante {
public:
    string nombre;
    int edad;
    string grado;

    void mostrar_info() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Grado: " << grado << endl;
    }

    void registrar_materias() {
        cout << "Matemáticas" << endl;
        cout << "Física" << endl;
        cout << "Programación" << endl;
    }
};

int main() {
    Estudiante estudiante1;

    estudiante1.nombre = "Pepelu";
    estudiante1.edad = 18;
    estudiante1.grado = "Ingeniería informática";

    estudiante1.mostrar_info();
    estudiante1.registrar_materias();

    return 0;
}
