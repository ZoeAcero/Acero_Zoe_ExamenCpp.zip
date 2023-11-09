#include <iostream>
#include <stdexcept>
#include <string>
#include <set>

using namespace std;

//definicion expresion personalizada
class MateriaYaRegistradaExcepcion : public runtime_error {
public:
    MateriaYaRegistradaExcepcion(const string& materia)
    : runtime_error("Error: Materia ya registrada - " + materia) {}
};

class RegistroMaterias {
public:
    //funcion para registrar una materia
    void registrarMateria(const string& materia) {
        //verificar si la materia ya esta registrada
        if (materiasRegistradas.find(materia) != materiasRegistradas.end()) {
            //lanzar excepcion
            throw MateriaYaRegistradaExcepcion(materia);
        }

        //registrar materia
        materiasRegistradas.insert(materia);
        cout << "Materia registrada: " << materia << endl;
    }

private:
    //alamcenar materias registradas
    set<string> materiasRegistradas;
};


int main() {
    RegistroMaterias registro;

    try {
        //registrar materias
        registro.registrarMateria("Programacion");

        //intentar registrar la misma materia
        registro.registrarMateria("Programacion");

    } catch (const MateriaYaRegistradaExcepcion& e) {
        //capturar y manejar la excepcion
        cerr << e.what() << endl;
    }

    return 0;
}
