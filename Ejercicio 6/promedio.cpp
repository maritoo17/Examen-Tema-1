#include <iostream>

double calcularPromedio(const int calificaciones[], int tamano) {
    if (tamano == 0) {
        return 0.0;
    }

    int suma = 0;

    for (int i = 0; i < tamano; ++i) {
        suma += calificaciones[i];
    }

    return static_cast<double>(suma) / tamano;
}

int main() {
    const int tamanoArray = 8;
    int calificaciones[tamanoArray] = {77, 33, 47, 95, 86, 53, 18, 89};

    double promedio = calcularPromedio(calificaciones, tamanoArray);

    std::cout << "El promedio de calificaciones es: " << promedio << std::endl;

    return 0;
}
