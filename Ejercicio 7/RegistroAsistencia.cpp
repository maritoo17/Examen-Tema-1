#include <iostream>
#include <string>

using namespace std;

class RegistroAsistencia {
public:
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
    registro1.estado = "Asistió";

    RegistroAsistencia registro2;

    registro2.fecha = "2021-09-01";
    registro2.estado = "Falta";

    RegistroAsistencia registro3;

    registro3.fecha = "2021-09-01";
    registro3.estado = "Tardanza";

    registro1.mostrar_asistencia();
    registro2.mostrar_asistencia();
    registro3.mostrar_asistencia();

    return 0;
}