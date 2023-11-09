#include <iostream>
#include <stdexcept>
#include <string>
#include <set>

class MateriaYaRegistradaException : public std::exception {
public:
    MateriaYaRegistradaException(const std::string& mensaje) : mensaje_error(mensaje) {}
    const char* what() const {
        return mensaje_error.c_str();
    }

private:
    std::string mensaje_error;
};

class RegistroMaterias {
public:
    void registrarMateria(const std::string& materia) {
        if (materiasRegistradas.find(materia) != materiasRegistradas.end()) {
            throw MateriaYaRegistradaException("Error: La materia ya ha sido registrada anteriormente.");
        }

        materiasRegistradas.insert(materia);
        std::cout << "Materia registrada con éxito: " << materia << std::endl;
    }

private:
    std::set<std::string> materiasRegistradas;
};

int main() {
    RegistroMaterias registro;

    try {
        registro.registrarMateria("Matemáticas");
        registro.registrarMateria("Historia");
        registro.registrarMateria("Matemáticas");
    } catch (const MateriaYaRegistradaException& e) {
        std::cerr << "Error al registrar materia: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error general: " << e.what() << std::endl;
    }

    return 0;
}
