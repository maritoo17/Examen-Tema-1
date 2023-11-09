#include <iostream>
#include <string>

using namespace std;

class RegistroAsistencia {
    string fecha;
    string estado;

    void mostrar_asistencia() {
        cout << "Fecha: " << fecha << endl;
        cout << "Estado: " << estado << endl;
    }
};

int main() {
    RegistroAsistencia registro1;

    registro1.fecha = "2021-09-01";
    registro1.estado = "Presente";

    registro1.mostrar_asistencia();

    return 0;
}