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
        int resultException = divideException(5, 0);
        cout << "Resultado de la division: " << resultException << endl;
    }
    catch (const char* e) {
        cerr << "Excepcion: " << e << endl;
    }
    return 0;
}