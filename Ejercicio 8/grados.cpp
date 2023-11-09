#include <iostream>
#include <string>

using namespace std;

class Estudiante {
public:
    string nombre;
    int edad;
    string grado;
};

void filtrarPorGrado(const Estudiante estudiantes[], int tamano, const string& grado, Estudiante estudiantesFiltrados[], int& tamanoFiltrados) {
    tamanoFiltrados = 0;

    for (int i = 0; i < tamano; ++i) {
        if (estudiantes[i].grado == grado) {
            estudiantesFiltrados[tamanoFiltrados] = estudiantes[i];
            ++tamanoFiltrados;
        }
    }
}

int main() {
    const int tamanoListaEstudiantes = 4;
    Estudiante listaEstudiantes[tamanoListaEstudiantes] = {
            {"Juan", 18, "Ingeniería informática"},
            {"María", 23, "Ingeniería aeronaútica"},
            {"Sebas", 19, "Veterinaria"},
            {"Pepelu", 18, "Ingeniería informática"}
    };

    const string gradoBuscado = "Ingeniería informática";
    const int tamanoMaxEstudiantesFiltrados = tamanoListaEstudiantes;
    Estudiante estudiantesFiltrados[tamanoMaxEstudiantesFiltrados];
    int tamanoEstudiantesFiltrados = 0;

    filtrarPorGrado(listaEstudiantes, tamanoListaEstudiantes, gradoBuscado, estudiantesFiltrados, tamanoEstudiantesFiltrados);

    cout << "Estudiantes de " << gradoBuscado << endl;
    for (int i = 0; i < tamanoEstudiantesFiltrados; ++i) {
        cout << "Nombre: " << estudiantesFiltrados[i].nombre << ", Edad: " << estudiantesFiltrados[i].edad << ", Grado: " << estudiantesFiltrados[i].grado << endl;
    }

    return 0;
}
