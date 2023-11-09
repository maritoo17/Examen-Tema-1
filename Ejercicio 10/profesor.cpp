#include <iostream>
#include <string>

using namespace std;

class Profesor {
public:
    string nombre;
    int edad;
    string materia;
    int experiencia;

    void mostrar_info() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Materia: " << materia << endl;
        cout << "Años de experiencia: " << experiencia << endl;
    }
};

int main () {
    Profesor profesor1;

    profesor1.nombre = "Jaime";
    profesor1.edad =23;
    profesor1.materia = "Programación";
    profesor1.experiencia = 2;

    Profesor profesor2;

    profesor2.nombre = "Juan";
    profesor2.edad = 25;
    profesor2.materia = "Matemáticas";
    profesor2.experiencia = 3;

    Profesor profesor3;

    profesor3.nombre = "María";
    profesor3.edad = 30;
    profesor3.materia = "Física";
    profesor3.experiencia = 5;


    profesor1.mostrar_info();
    profesor2.mostrar_info();
    profesor3.mostrar_info();

    return 0;
}

