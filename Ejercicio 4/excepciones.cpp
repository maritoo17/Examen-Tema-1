#include <iostream>

using namespace std;

int divideException(int a, int b) {
    if (b == 0) {
        throw "No se puede dividir por cero";
    }
    return a / b;
}

int main() {
    try {
        int a, b;
        cout << "Introduzca el primer numero: ";
        cin >> a;
        cout << "Introduzca el segundo numero: ";
        cin >> b;
        int resultException = divideException(a, b);
        cout << "Resultado de la division: " << resultException << endl;
    }
    catch (const char* e) {
        cerr << "Excepcion: " << e << endl;
    }
    return 0;
}