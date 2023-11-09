#include <iostream>

void intercambiarValores(int *ptrA, int *ptrB) {
    *ptrA = *ptrB;
    *ptrB = *ptrA;
}

int main() {
    int a = 17, b = 42;

    std::cout << "Antes del intercambio: a = " << a << ", b = " << b << std::endl;

    intercambiarValores(&a, &b);

    std::cout << "Después del intercambio: a = " << a << ", b = " << b << std::endl;

    return 0;
}

